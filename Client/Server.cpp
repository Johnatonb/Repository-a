#include <boost/array.hpp>
#include <boost/asio.hpp>

int main(){
    boost::asio::io_service io_service;
    boost::asio::ip::udp::socket socket(io_service, boost::asio::ip::udp::v4(), 13)
    for(;;){
        boost::array<char, 128>recv_buf;
        boost::asio::ip::udp::endpoint remote_endpoint;
        socket.recieve_from(boos::asio::buffer(recv_buf), remote_endpoint, 0, error);
    }
}

