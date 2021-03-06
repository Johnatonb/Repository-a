#include <iostream>
#include <boost/array.hpp>
#include <boost/asio.hpp>

int main(int argc, char* argv[]){
    if(argc!=2){
        std::cerr<<"Usage: client <host>"<<std::endl;
        return 1;
    }
    boost::asio::io_service io_service;
    boost::asio::ip::udp::resolver resolver(io_service);
    boost::asio::ip::udp::resolver::query query(boost::asio::ip::udp::v4(), argv[1], "daytime");
    boost::asio::ip::udp::endpoint reciever_endpoint = *resolver.resolve(query);
    boost::asio::ip::udp::socket socket(io_service);
    socket.open(boost::asio::ip::udp::v4());
    boost::array<char, 1> send_buff = {{ 0 }};
    socket.send_to(boost::asio::buffer(send_buff), reciever_endpoint);
    boost::array<char, 128>recv_buf;
    boost::asio::ip::udp::endpoint sender_endpoint;
    size_t len = socket.receive_from(boost::asio::buffer(recv_buf), sender_endpoint);
    std::cout.write(recv_buf.data(), len);
}
