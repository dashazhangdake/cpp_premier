#include <iostream>
#include <string>
#include <memory>

struct connection {
    connection(std::string ip_, int port_) : ip(ip_), port(port_) {}

    std::string ip;
    int port;
};
struct destination {
    destination(std::string ip_, int port_) : ip(ip_), port(port_) {}

    std::string ip;
    int port;
};

connection connect(destination* pDest)
{
    std::shared_ptr<connection> pConn(new connection(pDest->ip, pDest->port));
    std::cout << "creating connection(" << pConn.use_count() << ")"
              << std::endl;
    return *pConn;
}

void disconnect(connection pConn)
{
    std::cout << "connection close(" << pConn.ip << ":" << pConn.port << ")"
              << std::endl;
}
void end_connection(connection* pConn)
{
    disconnect(*pConn);
}

void f(destination& d)
{
    connection conn = connect(&d);

    std::shared_ptr<connection> p(&conn, connect);
    // std::shared_ptr<connection> p(&conn, [](connection *p) { end_connection(p); });

    std::cout << "connecting now(" << p.use_count() << ")" << std::endl;
}

int main()
{
    destination dest("202.118.176.67", 3316);
    f(dest);

    return 0;
}