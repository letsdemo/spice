#include <iostream>

#include <hilti/rt/libhilti.h>

#include <spicy/rt/libspicy.h>

#include "spice.h"

int main(int argc, char **argv)
{
    assert(argc == 2);

    // Initialize runtime library.
    hilti::rt::init();

    // Create stream with $1 as data.
    auto stream = hilti::rt::reference::make_value<hilti::rt::Stream>(argv[1]);
    stream->freeze();

    int state = 0;

    switch (state)
    {
    case 0:
    {
        // Instantiate unit.
        auto request = hilti::rt::reference::make_value<__hlt_spice::Spice::ClientLink>();

        // Feed data.
        auto r = hlt_spice::Spice::ClientLink::parse2(request, stream, {}, {});
        r.resume();

        int64_t offset = stream.get()->begin().offset();
    }
    break;
    case 1:
    {
        // Instantiate unit.
        auto request = hilti::rt::reference::make_value<__hlt_spice::Spice::ServerLink>();

        // Feed data.
        auto r = hlt_spice::Spice::ServerLink::parse2(request, stream, {}, {});
        r.resume();

        int64_t offset = stream.get()->begin().offset();
    }
    break;
    default:
        break;
    }

    // request.get()->header;
    // request.get()->message;

    // Access fields.
    // std::cout << "method : " << *request.method << std::endl;
    // std::cout << "uri    : " << *request->uri << std::endl;
    // std::cout << "version: " << *(*request->version)->number << std::endl;

    // Wrap up runtime libraries.
    spicy::rt::done();
    hilti::rt::done();

    return 0;
}