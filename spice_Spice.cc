// Begin of Spice (from "spice.spicy")
// Compiled by HILTI version 1.12.0-dev.188

#include <hilti/rt/compiler-setup.h>

#include <spicy/rt/libspicy.h>
#include <hilti/rt/libhilti.h>

extern const char* __hlt_spice_hlto_scope;

namespace __hlt_spice::Spice {
    struct SpiceLinkHeader;
    struct SpiceLinkMess;
    struct ClientLink;
    struct SpiceLinkReply;
    struct ServerLink;
    struct SpiceConversation;
    HILTI_RT_ENUM_WITH_DEFAULT(SpiceSessionState, Undef, SPICE_LINK_CLIENT = 0, SPICE_LINK_SERVER = 1, SPICE_TICKET_CLIENT = 2, SPICE_TICKET_SERVER = 3, SPICE_CLIENT_AUTH_SELECT = 4, SPICE_SASL_INIT_FROM_SERVER = 5, SPICE_SASL_START_TO_SERVER = 6, SPICE_SASL_START_FROM_SERVER = 7, SPICE_SASL_START_FROM_SERVER_CONT = 8, SPICE_SASL_STEP_TO_SERVER = 9, SPICE_SASL_STEP_FROM_SERVER = 10, SPICE_SASL_STEP_FROM_SERVER_CONT = 11, SPICE_SASL_DATA = 12, SPICE_DATA = 13, Undef = -1);;
    struct SpiceLinkHeader : ::hilti::rt::trait::isStruct, ::hilti::rt::Controllable<SpiceLinkHeader> {
        auto __self() { return ::hilti::rt::ValueReference<SpiceLinkHeader>::self(this); }
        std::optional<::hilti::rt::integer::safe<uint32_t>> magic{};
        std::optional<::hilti::rt::integer::safe<uint32_t>> major_version{};
        std::optional<::hilti::rt::integer::safe<uint32_t>> minor_version{};
        std::optional<::hilti::rt::integer::safe<uint32_t>> size{};
        auto __parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        auto __parse_Spice__SpiceLinkHeader_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        std::optional<::hilti::rt::RecoverableFailure> __error{};
        SpiceLinkHeader();
        SpiceLinkHeader(const SpiceLinkHeader&) = default;
        SpiceLinkHeader(SpiceLinkHeader&&) = default;
        SpiceLinkHeader& operator=(const SpiceLinkHeader&) = default;
        SpiceLinkHeader& operator=(SpiceLinkHeader&&) = default;
        SpiceLinkHeader(std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> magic, std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> major_version, std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> minor_version, std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> size);
        template<typename F> void __visit(F _) const { _("magic", magic); _("major_version", major_version); _("minor_version", minor_version); _("size", size); }
    };

    struct SpiceLinkMess : ::hilti::rt::trait::isStruct, ::hilti::rt::Controllable<SpiceLinkMess> {
        auto __self() { return ::hilti::rt::ValueReference<SpiceLinkMess>::self(this); }
        std::optional<::hilti::rt::integer::safe<uint32_t>> connection_id{};
        std::optional<::hilti::rt::integer::safe<uint8_t>> channel_type{};
        std::optional<::hilti::rt::integer::safe<uint8_t>> channel_id{};
        std::optional<::hilti::rt::integer::safe<uint32_t>> num_common_caps{};
        std::optional<::hilti::rt::integer::safe<uint32_t>> num_channel_caps{};
        std::optional<::hilti::rt::integer::safe<uint32_t>> caps_offset{};
        auto __parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        auto __parse_Spice__SpiceLinkMess_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        std::optional<::hilti::rt::RecoverableFailure> __error{};
        SpiceLinkMess();
        SpiceLinkMess(const SpiceLinkMess&) = default;
        SpiceLinkMess(SpiceLinkMess&&) = default;
        SpiceLinkMess& operator=(const SpiceLinkMess&) = default;
        SpiceLinkMess& operator=(SpiceLinkMess&&) = default;
        SpiceLinkMess(std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> connection_id, std::optional<std::optional<::hilti::rt::integer::safe<uint8_t>>> channel_type, std::optional<std::optional<::hilti::rt::integer::safe<uint8_t>>> channel_id, std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> num_common_caps, std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> num_channel_caps, std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> caps_offset);
        template<typename F> void __visit(F _) const { _("connection_id", connection_id); _("channel_type", channel_type); _("channel_id", channel_id); _("num_common_caps", num_common_caps); _("num_channel_caps", num_channel_caps); _("caps_offset", caps_offset); }
    };

    struct ClientLink : ::hilti::rt::trait::isStruct, ::hilti::rt::Controllable<ClientLink> {
        auto __self() { return ::hilti::rt::ValueReference<ClientLink>::self(this); }
        std::optional<::hilti::rt::ValueReference<SpiceLinkHeader>> header{};
        std::optional<::hilti::rt::ValueReference<SpiceLinkMess>> message{};
        inline static ::spicy::rt::Parser __parser{};
        auto __parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        static auto parse1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::stream::View;
        static auto parse2(::hilti::rt::ValueReference<ClientLink>& __unit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::stream::View;
        static auto parse3(::hilti::rt::ValueReference<::spicy::rt::ParsedUnit>& __gunit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::stream::View;
        auto __parse_Spice__ClientLink_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        std::optional<::hilti::rt::RecoverableFailure> __error{};
        ClientLink();
        ClientLink(const ClientLink&) = default;
        ClientLink(ClientLink&&) = default;
        ClientLink& operator=(const ClientLink&) = default;
        ClientLink& operator=(ClientLink&&) = default;
        ClientLink(std::optional<std::optional<::hilti::rt::ValueReference<SpiceLinkHeader>>> header, std::optional<std::optional<::hilti::rt::ValueReference<SpiceLinkMess>>> message);
        template<typename F> void __visit(F _) const { _("header", header); _("message", message); }
    };

    struct SpiceLinkReply : ::hilti::rt::trait::isStruct, ::hilti::rt::Controllable<SpiceLinkReply> {
        auto __self() { return ::hilti::rt::ValueReference<SpiceLinkReply>::self(this); }
        std::optional<::hilti::rt::integer::safe<uint32_t>> error{};
        std::optional<::hilti::rt::Bytes> pub_key{};
        std::optional<::hilti::rt::integer::safe<uint32_t>> num_common_caps{};
        std::optional<::hilti::rt::integer::safe<uint32_t>> num_channel_caps{};
        std::optional<::hilti::rt::integer::safe<uint32_t>> caps_offset{};
        auto __parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        auto __parse_Spice__SpiceLinkReply_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        std::optional<::hilti::rt::RecoverableFailure> __error{};
        SpiceLinkReply();
        SpiceLinkReply(const SpiceLinkReply&) = default;
        SpiceLinkReply(SpiceLinkReply&&) = default;
        SpiceLinkReply& operator=(const SpiceLinkReply&) = default;
        SpiceLinkReply& operator=(SpiceLinkReply&&) = default;
        SpiceLinkReply(std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> error, std::optional<std::optional<::hilti::rt::Bytes>> pub_key, std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> num_common_caps, std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> num_channel_caps, std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> caps_offset);
        template<typename F> void __visit(F _) const { _("error", error); _("pub_key", pub_key); _("num_common_caps", num_common_caps); _("num_channel_caps", num_channel_caps); _("caps_offset", caps_offset); }
    };

    struct ServerLink : ::hilti::rt::trait::isStruct, ::hilti::rt::Controllable<ServerLink> {
        auto __self() { return ::hilti::rt::ValueReference<ServerLink>::self(this); }
        std::optional<::hilti::rt::ValueReference<SpiceLinkHeader>> header{};
        std::optional<::hilti::rt::ValueReference<SpiceLinkReply>> message{};
        inline static ::spicy::rt::Parser __parser{};
        auto __parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        static auto parse1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::stream::View;
        static auto parse2(::hilti::rt::ValueReference<ServerLink>& __unit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::stream::View;
        static auto parse3(::hilti::rt::ValueReference<::spicy::rt::ParsedUnit>& __gunit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::stream::View;
        auto __parse_Spice__ServerLink_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        std::optional<::hilti::rt::RecoverableFailure> __error{};
        ServerLink();
        ServerLink(const ServerLink&) = default;
        ServerLink(ServerLink&&) = default;
        ServerLink& operator=(const ServerLink&) = default;
        ServerLink& operator=(ServerLink&&) = default;
        ServerLink(std::optional<std::optional<::hilti::rt::ValueReference<SpiceLinkHeader>>> header, std::optional<std::optional<::hilti::rt::ValueReference<SpiceLinkReply>>> message);
        template<typename F> void __visit(F _) const { _("header", header); _("message", message); }
    };

    struct SpiceConversation : ::hilti::rt::trait::isStruct, ::hilti::rt::Controllable<SpiceConversation> {
        auto __self() { return ::hilti::rt::ValueReference<SpiceConversation>::self(this); }
        std::optional<::hilti::rt::integer::safe<uint32_t>> connection_id{};
        std::optional<::hilti::rt::integer::safe<uint32_t>> num_channel_caps{};
        std::optional<::hilti::rt::integer::safe<uint32_t>> destport{};
        std::optional<::hilti::rt::integer::safe<uint32_t>> client_auth{};
        std::optional<::hilti::rt::integer::safe<uint32_t>> server_auth{};
        std::optional<::hilti::rt::integer::safe<uint32_t>> auth_selected{};
        std::optional<Spice::SpiceSessionState> next_state{};
        std::optional<::hilti::rt::integer::safe<uint16_t>> playback_mode{};
        std::optional<::hilti::rt::integer::safe<uint8_t>> channel_type{};
        std::optional<::hilti::rt::integer::safe<uint8_t>> channel_id{};
        std::optional<::hilti::rt::integer::safe<uint8_t>> client_mini_header{};
        std::optional<::hilti::rt::integer::safe<uint8_t>> server_mini_header{};
        inline static ::spicy::rt::Parser __parser{};
        auto __parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        static auto parse1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::stream::View;
        static auto parse2(::hilti::rt::ValueReference<SpiceConversation>& __unit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::stream::View;
        static auto parse3(::hilti::rt::ValueReference<::spicy::rt::ParsedUnit>& __gunit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::stream::View;
        auto __parse_Spice__SpiceConversation_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        std::optional<::hilti::rt::RecoverableFailure> __error{};
        SpiceConversation();
        SpiceConversation(const SpiceConversation&) = default;
        SpiceConversation(SpiceConversation&&) = default;
        SpiceConversation& operator=(const SpiceConversation&) = default;
        SpiceConversation& operator=(SpiceConversation&&) = default;
        SpiceConversation(std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> connection_id, std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> num_channel_caps, std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> destport, std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> client_auth, std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> server_auth, std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> auth_selected, std::optional<std::optional<Spice::SpiceSessionState>> next_state, std::optional<std::optional<::hilti::rt::integer::safe<uint16_t>>> playback_mode, std::optional<std::optional<::hilti::rt::integer::safe<uint8_t>>> channel_type, std::optional<std::optional<::hilti::rt::integer::safe<uint8_t>>> channel_id, std::optional<std::optional<::hilti::rt::integer::safe<uint8_t>>> client_mini_header, std::optional<std::optional<::hilti::rt::integer::safe<uint8_t>>> server_mini_header);
        template<typename F> void __visit(F _) const { _("connection_id", connection_id); _("num_channel_caps", num_channel_caps); _("destport", destport); _("client_auth", client_auth); _("server_auth", server_auth); _("auth_selected", auth_selected); _("next_state", next_state); _("playback_mode", playback_mode); _("channel_type", channel_type); _("channel_id", channel_id); _("client_mini_header", client_mini_header); _("server_mini_header", server_mini_header); }
    };

    const ::hilti::rt::integer::safe<uint64_t> SPICE_MAX_PASSWORD_LENGTH = ::hilti::rt::integer::safe<std::uint64_t>{60U};
    const ::hilti::rt::integer::safe<uint64_t> SPICE_TICKET_KEY_PAIR_LENGTH = ::hilti::rt::integer::safe<std::uint64_t>{1024U};
    const ::hilti::rt::integer::safe<uint64_t> SPICE_TICKET_PUBKEY_BYTES = ::hilti::rt::integer::safe<std::uint64_t>{162U};
    const ::hilti::rt::Bool __feat0x25Spice0x400x40ClientLink0x25is_filter = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40ClientLink0x25supports_filters = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40ClientLink0x25supports_sinks = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40ClientLink0x25synchronization = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40ClientLink0x25uses_offset = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40ClientLink0x25uses_random_access = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40ClientLink0x25uses_stream = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40ClientLink0x25uses_sync_advance = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40ServerLink0x25is_filter = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40ServerLink0x25supports_filters = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40ServerLink0x25supports_sinks = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40ServerLink0x25synchronization = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40ServerLink0x25uses_offset = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40ServerLink0x25uses_random_access = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40ServerLink0x25uses_stream = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40ServerLink0x25uses_sync_advance = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceConversation0x25is_filter = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceConversation0x25supports_filters = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceConversation0x25supports_sinks = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceConversation0x25synchronization = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceConversation0x25uses_offset = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceConversation0x25uses_random_access = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceConversation0x25uses_stream = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceConversation0x25uses_sync_advance = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkAuthMechanism0x25is_filter = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkAuthMechanism0x25supports_filters = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkAuthMechanism0x25supports_sinks = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkAuthMechanism0x25synchronization = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkAuthMechanism0x25uses_offset = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkAuthMechanism0x25uses_random_access = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkAuthMechanism0x25uses_stream = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkAuthMechanism0x25uses_sync_advance = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkEncryptedTicket0x25is_filter = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkEncryptedTicket0x25supports_filters = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkEncryptedTicket0x25supports_sinks = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkEncryptedTicket0x25synchronization = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkEncryptedTicket0x25uses_offset = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkEncryptedTicket0x25uses_random_access = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkEncryptedTicket0x25uses_stream = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkEncryptedTicket0x25uses_sync_advance = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkHeader0x25is_filter = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkHeader0x25supports_filters = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkHeader0x25supports_sinks = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkHeader0x25synchronization = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkHeader0x25uses_offset = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkHeader0x25uses_random_access = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkHeader0x25uses_stream = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkHeader0x25uses_sync_advance = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkMess0x25is_filter = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkMess0x25supports_filters = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkMess0x25supports_sinks = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkMess0x25synchronization = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkMess0x25uses_offset = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkMess0x25uses_random_access = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkMess0x25uses_stream = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkMess0x25uses_sync_advance = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkReply0x25is_filter = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkReply0x25supports_filters = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkReply0x25supports_sinks = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkReply0x25synchronization = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkReply0x25uses_offset = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkReply0x25uses_random_access = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkReply0x25uses_stream = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceLinkReply0x25uses_sync_advance = ::hilti::rt::Bool(false);
    extern auto operator<<(std::ostream& o, const __hlt_spice::Spice::SpiceLinkHeader& x) -> std::ostream&;
    SpiceLinkHeader::SpiceLinkHeader() {
    }

    SpiceLinkHeader::SpiceLinkHeader(std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> magic, std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> major_version, std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> minor_version, std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> size) : SpiceLinkHeader() {
        if ( magic ) this->magic = std::move(*magic);
        if ( major_version ) this->major_version = std::move(*major_version);
        if ( minor_version ) this->minor_version = std::move(*minor_version);
        if ( size ) this->size = std::move(*size);
    }

    
    extern auto operator<<(std::ostream& o, const __hlt_spice::Spice::SpiceLinkMess& x) -> std::ostream&;
    SpiceLinkMess::SpiceLinkMess() {
    }

    SpiceLinkMess::SpiceLinkMess(std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> connection_id, std::optional<std::optional<::hilti::rt::integer::safe<uint8_t>>> channel_type, std::optional<std::optional<::hilti::rt::integer::safe<uint8_t>>> channel_id, std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> num_common_caps, std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> num_channel_caps, std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> caps_offset) : SpiceLinkMess() {
        if ( connection_id ) this->connection_id = std::move(*connection_id);
        if ( channel_type ) this->channel_type = std::move(*channel_type);
        if ( channel_id ) this->channel_id = std::move(*channel_id);
        if ( num_common_caps ) this->num_common_caps = std::move(*num_common_caps);
        if ( num_channel_caps ) this->num_channel_caps = std::move(*num_channel_caps);
        if ( caps_offset ) this->caps_offset = std::move(*caps_offset);
    }

    
    extern auto operator<<(std::ostream& o, const __hlt_spice::Spice::ClientLink& x) -> std::ostream&;
    ClientLink::ClientLink() {
    }

    ClientLink::ClientLink(std::optional<std::optional<::hilti::rt::ValueReference<__hlt_spice::Spice::SpiceLinkHeader>>> header, std::optional<std::optional<::hilti::rt::ValueReference<__hlt_spice::Spice::SpiceLinkMess>>> message) : ClientLink() {
        if ( header ) this->header = std::move(*header);
        if ( message ) this->message = std::move(*message);
    }

    
    extern auto operator<<(std::ostream& o, const __hlt_spice::Spice::SpiceLinkReply& x) -> std::ostream&;
    SpiceLinkReply::SpiceLinkReply() {
    }

    SpiceLinkReply::SpiceLinkReply(std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> error, std::optional<std::optional<::hilti::rt::Bytes>> pub_key, std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> num_common_caps, std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> num_channel_caps, std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> caps_offset) : SpiceLinkReply() {
        if ( error ) this->error = std::move(*error);
        if ( pub_key ) this->pub_key = std::move(*pub_key);
        if ( num_common_caps ) this->num_common_caps = std::move(*num_common_caps);
        if ( num_channel_caps ) this->num_channel_caps = std::move(*num_channel_caps);
        if ( caps_offset ) this->caps_offset = std::move(*caps_offset);
    }

    
    extern auto operator<<(std::ostream& o, const __hlt_spice::Spice::ServerLink& x) -> std::ostream&;
    ServerLink::ServerLink() {
    }

    ServerLink::ServerLink(std::optional<std::optional<::hilti::rt::ValueReference<__hlt_spice::Spice::SpiceLinkHeader>>> header, std::optional<std::optional<::hilti::rt::ValueReference<__hlt_spice::Spice::SpiceLinkReply>>> message) : ServerLink() {
        if ( header ) this->header = std::move(*header);
        if ( message ) this->message = std::move(*message);
    }

    
}

namespace hlt_spice::Spice::ClientLink {
    extern auto parse1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::Resumable;
    extern auto parse2(::hilti::rt::ValueReference<__hlt_spice::Spice::ClientLink>& __unit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::Resumable;
    extern auto parse3(::hilti::rt::ValueReference<::spicy::rt::ParsedUnit>& __gunit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::Resumable;
}

namespace hlt_spice::Spice::ServerLink {
    extern auto parse1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::Resumable;
    extern auto parse2(::hilti::rt::ValueReference<__hlt_spice::Spice::ServerLink>& __unit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::Resumable;
    extern auto parse3(::hilti::rt::ValueReference<::spicy::rt::ParsedUnit>& __gunit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::Resumable;
}

namespace hilti::rt::detail::adl {
    inline auto to_string(__hlt_spice::Spice::SpiceSessionState x, adl::tag) -> std::string;
}

namespace __hlt_spice::Spice {
    inline auto operator<<(std::ostream& o, SpiceSessionState x) -> std::ostream&;
    extern auto operator<<(std::ostream& o, const __hlt_spice::Spice::SpiceConversation& x) -> std::ostream&;
    SpiceConversation::SpiceConversation() {
    }

    SpiceConversation::SpiceConversation(std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> connection_id, std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> num_channel_caps, std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> destport, std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> client_auth, std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> server_auth, std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> auth_selected, std::optional<std::optional<Spice::SpiceSessionState>> next_state, std::optional<std::optional<::hilti::rt::integer::safe<uint16_t>>> playback_mode, std::optional<std::optional<::hilti::rt::integer::safe<uint8_t>>> channel_type, std::optional<std::optional<::hilti::rt::integer::safe<uint8_t>>> channel_id, std::optional<std::optional<::hilti::rt::integer::safe<uint8_t>>> client_mini_header, std::optional<std::optional<::hilti::rt::integer::safe<uint8_t>>> server_mini_header) : SpiceConversation() {
        if ( connection_id ) this->connection_id = std::move(*connection_id);
        if ( num_channel_caps ) this->num_channel_caps = std::move(*num_channel_caps);
        if ( destport ) this->destport = std::move(*destport);
        if ( client_auth ) this->client_auth = std::move(*client_auth);
        if ( server_auth ) this->server_auth = std::move(*server_auth);
        if ( auth_selected ) this->auth_selected = std::move(*auth_selected);
        if ( next_state ) this->next_state = std::move(*next_state);
        if ( playback_mode ) this->playback_mode = std::move(*playback_mode);
        if ( channel_type ) this->channel_type = std::move(*channel_type);
        if ( channel_id ) this->channel_id = std::move(*channel_id);
        if ( client_mini_header ) this->client_mini_header = std::move(*client_mini_header);
        if ( server_mini_header ) this->server_mini_header = std::move(*server_mini_header);
    }

    
}

namespace hlt_spice::Spice::SpiceConversation {
    extern auto parse1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::Resumable;
    extern auto parse2(::hilti::rt::ValueReference<__hlt_spice::Spice::SpiceConversation>& __unit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::Resumable;
    extern auto parse3(::hilti::rt::ValueReference<::spicy::rt::ParsedUnit>& __gunit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::Resumable;
}

namespace __hlt_spice::Spice {
    extern void __register_Spice_ClientLink();
    extern void __register_Spice_ServerLink();
    extern void __register_Spice_SpiceConversation();
    extern void __register_Spice_SpiceLinkAuthMechanism();
    extern void __register_Spice_SpiceLinkEncryptedTicket();
    extern void __register_Spice_SpiceLinkHeader();
    extern void __register_Spice_SpiceLinkMess();
    extern void __register_Spice_SpiceLinkReply();
    extern void __init_module();
    extern void __register_module();
}

namespace __hlt_spice::type_info { namespace {
    extern const ::hilti::rt::TypeInfo __ti_Spice__SpiceLinkHeader_namex2aSpice__SpiceLinkHeaderx2b;
    extern const ::hilti::rt::TypeInfo __ti_optional_spicy__RecoverableFailure__optionalx2anamex2ahilti__RecoverableFailurex2bx2b;
    extern const ::hilti::rt::TypeInfo __ti_hilti__RecoverableFailure_namex2ahilti__RecoverableFailurex2b;
    const ::hilti::rt::TypeInfo __ti_hilti__RecoverableFailure_namex2ahilti__RecoverableFailurex2b = { "hilti::RecoverableFailure", "hilti::RecoverableFailure", new ::hilti::rt::type_info::Exception() };
    const ::hilti::rt::TypeInfo __ti_optional_spicy__RecoverableFailure__optionalx2anamex2ahilti__RecoverableFailurex2bx2b = { {}, "optional<spicy::RecoverableFailure>", new ::hilti::rt::type_info::Optional(&type_info::__ti_hilti__RecoverableFailure_namex2ahilti__RecoverableFailurex2b, ::hilti::rt::type_info::Optional::accessor<::hilti::rt::RecoverableFailure>()) };
    const ::hilti::rt::TypeInfo __ti_Spice__SpiceLinkHeader_namex2aSpice__SpiceLinkHeaderx2b = { "Spice::SpiceLinkHeader", "Spice::SpiceLinkHeader", new ::hilti::rt::type_info::Struct(std::vector<::hilti::rt::type_info::struct_::Field>({::hilti::rt::type_info::struct_::Field{ "magic", &::hilti::rt::type_info::uint32, offsetof(Spice::SpiceLinkHeader, magic), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint32_t>>() }, ::hilti::rt::type_info::struct_::Field{ "major_version", &::hilti::rt::type_info::uint32, offsetof(Spice::SpiceLinkHeader, major_version), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint32_t>>() }, ::hilti::rt::type_info::struct_::Field{ "minor_version", &::hilti::rt::type_info::uint32, offsetof(Spice::SpiceLinkHeader, minor_version), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint32_t>>() }, ::hilti::rt::type_info::struct_::Field{ "size", &::hilti::rt::type_info::uint32, offsetof(Spice::SpiceLinkHeader, size), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint32_t>>() }, ::hilti::rt::type_info::struct_::Field{ "__error", &type_info::__ti_optional_spicy__RecoverableFailure__optionalx2anamex2ahilti__RecoverableFailurex2bx2b, offsetof(Spice::SpiceLinkHeader, __error), true, false }})) };
    extern const ::hilti::rt::TypeInfo __ti_Spice__SpiceLinkMess_namex2aSpice__SpiceLinkMessx2b;
    const ::hilti::rt::TypeInfo __ti_Spice__SpiceLinkMess_namex2aSpice__SpiceLinkMessx2b = { "Spice::SpiceLinkMess", "Spice::SpiceLinkMess", new ::hilti::rt::type_info::Struct(std::vector<::hilti::rt::type_info::struct_::Field>({::hilti::rt::type_info::struct_::Field{ "connection_id", &::hilti::rt::type_info::uint32, offsetof(Spice::SpiceLinkMess, connection_id), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint32_t>>() }, ::hilti::rt::type_info::struct_::Field{ "channel_type", &::hilti::rt::type_info::uint8, offsetof(Spice::SpiceLinkMess, channel_type), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint8_t>>() }, ::hilti::rt::type_info::struct_::Field{ "channel_id", &::hilti::rt::type_info::uint8, offsetof(Spice::SpiceLinkMess, channel_id), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint8_t>>() }, ::hilti::rt::type_info::struct_::Field{ "num_common_caps", &::hilti::rt::type_info::uint32, offsetof(Spice::SpiceLinkMess, num_common_caps), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint32_t>>() }, ::hilti::rt::type_info::struct_::Field{ "num_channel_caps", &::hilti::rt::type_info::uint32, offsetof(Spice::SpiceLinkMess, num_channel_caps), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint32_t>>() }, ::hilti::rt::type_info::struct_::Field{ "caps_offset", &::hilti::rt::type_info::uint32, offsetof(Spice::SpiceLinkMess, caps_offset), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint32_t>>() }, ::hilti::rt::type_info::struct_::Field{ "__error", &type_info::__ti_optional_spicy__RecoverableFailure__optionalx2anamex2ahilti__RecoverableFailurex2bx2b, offsetof(Spice::SpiceLinkMess, __error), true, false }})) };
    extern const ::hilti::rt::TypeInfo __ti_Spice__ClientLink_namex2aSpice__ClientLinkx2b;
    extern const ::hilti::rt::TypeInfo __ti_value_ref_SpiceLinkHeader__value_refx2anamex2aSpice__SpiceLinkHeaderx2bx2b;
    const ::hilti::rt::TypeInfo __ti_value_ref_SpiceLinkHeader__value_refx2anamex2aSpice__SpiceLinkHeaderx2bx2b = { {}, "value_ref<SpiceLinkHeader>", new ::hilti::rt::type_info::ValueReference(&type_info::__ti_Spice__SpiceLinkHeader_namex2aSpice__SpiceLinkHeaderx2b, ::hilti::rt::type_info::ValueReference::accessor<__hlt_spice::Spice::SpiceLinkHeader>()) };
    extern const ::hilti::rt::TypeInfo __ti_value_ref_SpiceLinkMess__value_refx2anamex2aSpice__SpiceLinkMessx2bx2b;
    const ::hilti::rt::TypeInfo __ti_value_ref_SpiceLinkMess__value_refx2anamex2aSpice__SpiceLinkMessx2bx2b = { {}, "value_ref<SpiceLinkMess>", new ::hilti::rt::type_info::ValueReference(&type_info::__ti_Spice__SpiceLinkMess_namex2aSpice__SpiceLinkMessx2b, ::hilti::rt::type_info::ValueReference::accessor<__hlt_spice::Spice::SpiceLinkMess>()) };
    const ::hilti::rt::TypeInfo __ti_Spice__ClientLink_namex2aSpice__ClientLinkx2b = { "Spice::ClientLink", "Spice::ClientLink", new ::hilti::rt::type_info::Struct(std::vector<::hilti::rt::type_info::struct_::Field>({::hilti::rt::type_info::struct_::Field{ "header", &type_info::__ti_value_ref_SpiceLinkHeader__value_refx2anamex2aSpice__SpiceLinkHeaderx2bx2b, offsetof(Spice::ClientLink, header), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::ValueReference<__hlt_spice::Spice::SpiceLinkHeader>>() }, ::hilti::rt::type_info::struct_::Field{ "message", &type_info::__ti_value_ref_SpiceLinkMess__value_refx2anamex2aSpice__SpiceLinkMessx2bx2b, offsetof(Spice::ClientLink, message), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::ValueReference<__hlt_spice::Spice::SpiceLinkMess>>() }, ::hilti::rt::type_info::struct_::Field{ "__error", &type_info::__ti_optional_spicy__RecoverableFailure__optionalx2anamex2ahilti__RecoverableFailurex2bx2b, offsetof(Spice::ClientLink, __error), true, false }})) };
    extern const ::hilti::rt::TypeInfo __ti_Spice__SpiceLinkReply_namex2aSpice__SpiceLinkReplyx2b;
    const ::hilti::rt::TypeInfo __ti_Spice__SpiceLinkReply_namex2aSpice__SpiceLinkReplyx2b = { "Spice::SpiceLinkReply", "Spice::SpiceLinkReply", new ::hilti::rt::type_info::Struct(std::vector<::hilti::rt::type_info::struct_::Field>({::hilti::rt::type_info::struct_::Field{ "error", &::hilti::rt::type_info::uint32, offsetof(Spice::SpiceLinkReply, error), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint32_t>>() }, ::hilti::rt::type_info::struct_::Field{ "pub_key", &::hilti::rt::type_info::bytes, offsetof(Spice::SpiceLinkReply, pub_key), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::Bytes>() }, ::hilti::rt::type_info::struct_::Field{ "num_common_caps", &::hilti::rt::type_info::uint32, offsetof(Spice::SpiceLinkReply, num_common_caps), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint32_t>>() }, ::hilti::rt::type_info::struct_::Field{ "num_channel_caps", &::hilti::rt::type_info::uint32, offsetof(Spice::SpiceLinkReply, num_channel_caps), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint32_t>>() }, ::hilti::rt::type_info::struct_::Field{ "caps_offset", &::hilti::rt::type_info::uint32, offsetof(Spice::SpiceLinkReply, caps_offset), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint32_t>>() }, ::hilti::rt::type_info::struct_::Field{ "__error", &type_info::__ti_optional_spicy__RecoverableFailure__optionalx2anamex2ahilti__RecoverableFailurex2bx2b, offsetof(Spice::SpiceLinkReply, __error), true, false }})) };
    extern const ::hilti::rt::TypeInfo __ti_Spice__ServerLink_namex2aSpice__ServerLinkx2b;
    extern const ::hilti::rt::TypeInfo __ti_value_ref_SpiceLinkReply__value_refx2anamex2aSpice__SpiceLinkReplyx2bx2b;
    const ::hilti::rt::TypeInfo __ti_value_ref_SpiceLinkReply__value_refx2anamex2aSpice__SpiceLinkReplyx2bx2b = { {}, "value_ref<SpiceLinkReply>", new ::hilti::rt::type_info::ValueReference(&type_info::__ti_Spice__SpiceLinkReply_namex2aSpice__SpiceLinkReplyx2b, ::hilti::rt::type_info::ValueReference::accessor<__hlt_spice::Spice::SpiceLinkReply>()) };
    const ::hilti::rt::TypeInfo __ti_Spice__ServerLink_namex2aSpice__ServerLinkx2b = { "Spice::ServerLink", "Spice::ServerLink", new ::hilti::rt::type_info::Struct(std::vector<::hilti::rt::type_info::struct_::Field>({::hilti::rt::type_info::struct_::Field{ "header", &type_info::__ti_value_ref_SpiceLinkHeader__value_refx2anamex2aSpice__SpiceLinkHeaderx2bx2b, offsetof(Spice::ServerLink, header), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::ValueReference<__hlt_spice::Spice::SpiceLinkHeader>>() }, ::hilti::rt::type_info::struct_::Field{ "message", &type_info::__ti_value_ref_SpiceLinkReply__value_refx2anamex2aSpice__SpiceLinkReplyx2bx2b, offsetof(Spice::ServerLink, message), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::ValueReference<__hlt_spice::Spice::SpiceLinkReply>>() }, ::hilti::rt::type_info::struct_::Field{ "__error", &type_info::__ti_optional_spicy__RecoverableFailure__optionalx2anamex2ahilti__RecoverableFailurex2bx2b, offsetof(Spice::ServerLink, __error), true, false }})) };
    extern const ::hilti::rt::TypeInfo __ti_Spice__SpiceSessionState_namex2aSpice__SpiceSessionStatex2b;
    const ::hilti::rt::TypeInfo __ti_Spice__SpiceSessionState_namex2aSpice__SpiceSessionStatex2b = { "Spice::SpiceSessionState", "Spice::SpiceSessionState", new ::hilti::rt::type_info::Enum(std::vector<::hilti::rt::type_info::enum_::Label>({::hilti::rt::type_info::enum_::Label{ "SPICE_LINK_CLIENT", 0 }, ::hilti::rt::type_info::enum_::Label{ "SPICE_LINK_SERVER", 1 }, ::hilti::rt::type_info::enum_::Label{ "SPICE_TICKET_CLIENT", 2 }, ::hilti::rt::type_info::enum_::Label{ "SPICE_TICKET_SERVER", 3 }, ::hilti::rt::type_info::enum_::Label{ "SPICE_CLIENT_AUTH_SELECT", 4 }, ::hilti::rt::type_info::enum_::Label{ "SPICE_SASL_INIT_FROM_SERVER", 5 }, ::hilti::rt::type_info::enum_::Label{ "SPICE_SASL_START_TO_SERVER", 6 }, ::hilti::rt::type_info::enum_::Label{ "SPICE_SASL_START_FROM_SERVER", 7 }, ::hilti::rt::type_info::enum_::Label{ "SPICE_SASL_START_FROM_SERVER_CONT", 8 }, ::hilti::rt::type_info::enum_::Label{ "SPICE_SASL_STEP_TO_SERVER", 9 }, ::hilti::rt::type_info::enum_::Label{ "SPICE_SASL_STEP_FROM_SERVER", 10 }, ::hilti::rt::type_info::enum_::Label{ "SPICE_SASL_STEP_FROM_SERVER_CONT", 11 }, ::hilti::rt::type_info::enum_::Label{ "SPICE_SASL_DATA", 12 }, ::hilti::rt::type_info::enum_::Label{ "SPICE_DATA", 13 }, ::hilti::rt::type_info::enum_::Label{ "Undef", -1 }})) };
    extern const ::hilti::rt::TypeInfo __ti_Spice__SpiceConversation_namex2aSpice__SpiceConversationx2b;
    const ::hilti::rt::TypeInfo __ti_Spice__SpiceConversation_namex2aSpice__SpiceConversationx2b = { "Spice::SpiceConversation", "Spice::SpiceConversation", new ::hilti::rt::type_info::Struct(std::vector<::hilti::rt::type_info::struct_::Field>({::hilti::rt::type_info::struct_::Field{ "connection_id", &::hilti::rt::type_info::uint32, offsetof(Spice::SpiceConversation, connection_id), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint32_t>>() }, ::hilti::rt::type_info::struct_::Field{ "num_channel_caps", &::hilti::rt::type_info::uint32, offsetof(Spice::SpiceConversation, num_channel_caps), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint32_t>>() }, ::hilti::rt::type_info::struct_::Field{ "destport", &::hilti::rt::type_info::uint32, offsetof(Spice::SpiceConversation, destport), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint32_t>>() }, ::hilti::rt::type_info::struct_::Field{ "client_auth", &::hilti::rt::type_info::uint32, offsetof(Spice::SpiceConversation, client_auth), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint32_t>>() }, ::hilti::rt::type_info::struct_::Field{ "server_auth", &::hilti::rt::type_info::uint32, offsetof(Spice::SpiceConversation, server_auth), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint32_t>>() }, ::hilti::rt::type_info::struct_::Field{ "auth_selected", &::hilti::rt::type_info::uint32, offsetof(Spice::SpiceConversation, auth_selected), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint32_t>>() }, ::hilti::rt::type_info::struct_::Field{ "next_state", &type_info::__ti_Spice__SpiceSessionState_namex2aSpice__SpiceSessionStatex2b, offsetof(Spice::SpiceConversation, next_state), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<Spice::SpiceSessionState>() }, ::hilti::rt::type_info::struct_::Field{ "playback_mode", &::hilti::rt::type_info::uint16, offsetof(Spice::SpiceConversation, playback_mode), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint16_t>>() }, ::hilti::rt::type_info::struct_::Field{ "channel_type", &::hilti::rt::type_info::uint8, offsetof(Spice::SpiceConversation, channel_type), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint8_t>>() }, ::hilti::rt::type_info::struct_::Field{ "channel_id", &::hilti::rt::type_info::uint8, offsetof(Spice::SpiceConversation, channel_id), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint8_t>>() }, ::hilti::rt::type_info::struct_::Field{ "client_mini_header", &::hilti::rt::type_info::uint8, offsetof(Spice::SpiceConversation, client_mini_header), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint8_t>>() }, ::hilti::rt::type_info::struct_::Field{ "server_mini_header", &::hilti::rt::type_info::uint8, offsetof(Spice::SpiceConversation, server_mini_header), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint8_t>>() }, ::hilti::rt::type_info::struct_::Field{ "__error", &type_info::__ti_optional_spicy__RecoverableFailure__optionalx2anamex2ahilti__RecoverableFailurex2bx2b, offsetof(Spice::SpiceConversation, __error), true, false }})) };
} }

HILTI_PRE_INIT(__hlt_spice::Spice::__register_module)

auto __hlt_spice::Spice::ClientLink::__parse_Spice__ClientLink_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> {
    auto __self = ClientLink::__self();
    ::hilti::rt::detail::checkStack();
    __location__("spice.spicy:108:26-111:1");
    std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> __result;

    {
        __location__("spice.spicy:80:24-85:1");

        // Begin parsing production: Unit: Spice__SpiceLinkHeader_2 -> magic_2 major_version_2 minor_version_2 size_2;
        ::hilti::rt::optional::valueOrInit((*__self).header) = (__hlt_spice::Spice::SpiceLinkHeader());
        std::tie(__cur, __lah, __lahe, __error) = (*::hilti::rt::optional::value((*__self).header)).__parse_stage1(__data, __begin, __cur, __trim, __lah, __lahe, __error);
        // End parsing production: Unit: Spice__SpiceLinkHeader_2 -> magic_2 major_version_2 minor_version_2 size_2;
    }

    {
        __location__("spice.spicy:89:22-96:1");

        // Begin parsing production: Unit: Spice__SpiceLinkMess_2 -> connection_id_3 channel_type_3 channel_id_3 num_common_caps_3 num_channel_caps_4 caps_offset_3;
        ::hilti::rt::optional::valueOrInit((*__self).message) = (__hlt_spice::Spice::SpiceLinkMess());
        std::tie(__cur, __lah, __lahe, __error) = (*::hilti::rt::optional::value((*__self).message)).__parse_stage1(__data, __begin, __cur, __trim, __lah, __lahe, __error);
        // End parsing production: Unit: Spice__SpiceLinkMess_2 -> connection_id_3 channel_type_3 channel_id_3 num_common_caps_3 num_channel_caps_4 caps_offset_3;
    }

    ::hilti::rt::debug::dedent(std::string_view("spicy"));
    __result = std::make_tuple(__cur, __lah, __lahe, __error);
    return __result;
}

auto __hlt_spice::Spice::ClientLink::__parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> {
    auto __self = ClientLink::__self();
    ::hilti::rt::detail::checkStack();
    __location__("spice.spicy:108:26-111:1");
    std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> __result;

    {
        ::hilti::rt::debug::indent(std::string_view("spicy"));
        ::hilti::rt::stream::SafeConstIterator __begin = __cur.begin();
        ::hilti::rt::StrongReference<::hilti::rt::Stream> filtered = ::hilti::rt::StrongReference<::hilti::rt::Stream>();
        if ( ! (::hilti::rt::Bool(static_cast<bool>(filtered))) ) {
            __result = (*__self).__parse_Spice__ClientLink_stage2(__data, __begin, __cur, __trim, __lah, __lahe, __error);
        }
    }

    return __result;
}

extern auto __hlt_spice::Spice::ClientLink::parse1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::stream::View {
    ::hilti::rt::detail::checkStack();
    __location__("spice.spicy:108:26-111:1");
    ::hilti::rt::ValueReference<__hlt_spice::Spice::ClientLink> __unit = ::hilti::rt::reference::make_value<__hlt_spice::Spice::ClientLink>((__hlt_spice::Spice::ClientLink()));
    ::hilti::rt::stream::View __ncur = (__cur ? ::hilti::rt::optional::value(__cur) : (*__data).view());
    ::hilti::rt::integer::safe<int64_t> __lahead = ::hilti::rt::integer::safe<std::int64_t>{0};
    ::hilti::rt::stream::SafeConstIterator __lahead_end;
    std::optional<::hilti::rt::RecoverableFailure> __error = std::optional<::hilti::rt::RecoverableFailure>();
    __location__("spice.spicy:108:26-111:1");

    // Begin parsing production: Unit: Spice__ClientLink -> Resolved_6 Resolved_7;
    std::tie(__ncur, __lahead, __lahead_end, __error) = (*__unit).__parse_stage1(__data, __ncur.begin(), __ncur, ::hilti::rt::Bool(true), __lahead, __lahead_end, __error);
    // End parsing production: Unit: Spice__ClientLink -> Resolved_6 Resolved_7;

    if ( __error.has_value() ) {
        throw ::spicy::rt::ParseError(::hilti::rt::fmt(std::string_view("successful synchronization never confirmed: %s"), ::hilti::rt::exception::what(::hilti::rt::optional::value(__error))), ::hilti::rt::exception::where(::hilti::rt::optional::value(__error)));
    }

    return __ncur;
}

extern auto __hlt_spice::Spice::ClientLink::parse2(::hilti::rt::ValueReference<__hlt_spice::Spice::ClientLink>& __unit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::stream::View {
    ::hilti::rt::detail::checkStack();
    __location__("spice.spicy:108:26-111:1");
    ::hilti::rt::stream::View __ncur = (__cur ? ::hilti::rt::optional::value(__cur) : (*__data).view());
    ::hilti::rt::integer::safe<int64_t> __lahead = ::hilti::rt::integer::safe<std::int64_t>{0};
    ::hilti::rt::stream::SafeConstIterator __lahead_end;
    std::optional<::hilti::rt::RecoverableFailure> __error = std::optional<::hilti::rt::RecoverableFailure>();
    __location__("spice.spicy:108:26-111:1");

    // Begin parsing production: Unit: Spice__ClientLink -> Resolved_6 Resolved_7;
    std::tie(__ncur, __lahead, __lahead_end, __error) = (*__unit).__parse_stage1(__data, __ncur.begin(), __ncur, ::hilti::rt::Bool(true), __lahead, __lahead_end, __error);
    // End parsing production: Unit: Spice__ClientLink -> Resolved_6 Resolved_7;

    if ( __error.has_value() ) {
        throw ::spicy::rt::ParseError(::hilti::rt::fmt(std::string_view("successful synchronization never confirmed: %s"), ::hilti::rt::exception::what(::hilti::rt::optional::value(__error))), ::hilti::rt::exception::where(::hilti::rt::optional::value(__error)));
    }

    return __ncur;
}

extern auto __hlt_spice::Spice::ClientLink::parse3(::hilti::rt::ValueReference<::spicy::rt::ParsedUnit>& __gunit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::stream::View {
    ::hilti::rt::detail::checkStack();
    __location__("spice.spicy:108:26-111:1");
    ::hilti::rt::ValueReference<__hlt_spice::Spice::ClientLink> __unit = ::hilti::rt::reference::make_value<__hlt_spice::Spice::ClientLink>((__hlt_spice::Spice::ClientLink()));
    ::spicy::rt::ParsedUnit::initialize((*__gunit), __unit, &type_info::__ti_Spice__ClientLink_namex2aSpice__ClientLinkx2b);
    ::hilti::rt::stream::View __ncur = (__cur ? ::hilti::rt::optional::value(__cur) : (*__data).view());
    ::hilti::rt::integer::safe<int64_t> __lahead = ::hilti::rt::integer::safe<std::int64_t>{0};
    ::hilti::rt::stream::SafeConstIterator __lahead_end;
    std::optional<::hilti::rt::RecoverableFailure> __error = std::optional<::hilti::rt::RecoverableFailure>();
    __location__("spice.spicy:108:26-111:1");

    // Begin parsing production: Unit: Spice__ClientLink -> Resolved_6 Resolved_7;
    std::tie(__ncur, __lahead, __lahead_end, __error) = (*__unit).__parse_stage1(__data, __ncur.begin(), __ncur, ::hilti::rt::Bool(true), __lahead, __lahead_end, __error);
    // End parsing production: Unit: Spice__ClientLink -> Resolved_6 Resolved_7;

    if ( __error.has_value() ) {
        throw ::spicy::rt::ParseError(::hilti::rt::fmt(std::string_view("successful synchronization never confirmed: %s"), ::hilti::rt::exception::what(::hilti::rt::optional::value(__error))), ::hilti::rt::exception::where(::hilti::rt::optional::value(__error)));
    }

    return __ncur;
}

auto __hlt_spice::Spice::ServerLink::__parse_Spice__ServerLink_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> {
    auto __self = ServerLink::__self();
    ::hilti::rt::detail::checkStack();
    __location__("spice.spicy:113:26-116:1");
    std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> __result;

    {
        __location__("spice.spicy:80:24-85:1");

        // Begin parsing production: Unit: Spice__SpiceLinkHeader_3 -> magic_3 major_version_3 minor_version_3 size_3;
        ::hilti::rt::optional::valueOrInit((*__self).header) = (__hlt_spice::Spice::SpiceLinkHeader());
        std::tie(__cur, __lah, __lahe, __error) = (*::hilti::rt::optional::value((*__self).header)).__parse_stage1(__data, __begin, __cur, __trim, __lah, __lahe, __error);
        // End parsing production: Unit: Spice__SpiceLinkHeader_3 -> magic_3 major_version_3 minor_version_3 size_3;
    }

    {
        __location__("spice.spicy:99:23-105:1");

        // Begin parsing production: Unit: Spice__SpiceLinkReply_2 -> error_2 pub_key_2 num_common_caps_4 num_channel_caps_5 caps_offset_4;
        ::hilti::rt::optional::valueOrInit((*__self).message) = (__hlt_spice::Spice::SpiceLinkReply());
        std::tie(__cur, __lah, __lahe, __error) = (*::hilti::rt::optional::value((*__self).message)).__parse_stage1(__data, __begin, __cur, __trim, __lah, __lahe, __error);
        // End parsing production: Unit: Spice__SpiceLinkReply_2 -> error_2 pub_key_2 num_common_caps_4 num_channel_caps_5 caps_offset_4;
    }

    ::hilti::rt::debug::dedent(std::string_view("spicy"));
    __result = std::make_tuple(__cur, __lah, __lahe, __error);
    return __result;
}

auto __hlt_spice::Spice::ServerLink::__parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> {
    auto __self = ServerLink::__self();
    ::hilti::rt::detail::checkStack();
    __location__("spice.spicy:113:26-116:1");
    std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> __result;

    {
        ::hilti::rt::debug::indent(std::string_view("spicy"));
        ::hilti::rt::stream::SafeConstIterator __begin = __cur.begin();
        ::hilti::rt::StrongReference<::hilti::rt::Stream> filtered = ::hilti::rt::StrongReference<::hilti::rt::Stream>();
        if ( ! (::hilti::rt::Bool(static_cast<bool>(filtered))) ) {
            __result = (*__self).__parse_Spice__ServerLink_stage2(__data, __begin, __cur, __trim, __lah, __lahe, __error);
        }
    }

    return __result;
}

extern auto __hlt_spice::Spice::ServerLink::parse1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::stream::View {
    ::hilti::rt::detail::checkStack();
    __location__("spice.spicy:113:26-116:1");
    ::hilti::rt::ValueReference<__hlt_spice::Spice::ServerLink> __unit = ::hilti::rt::reference::make_value<__hlt_spice::Spice::ServerLink>((__hlt_spice::Spice::ServerLink()));
    ::hilti::rt::stream::View __ncur = (__cur ? ::hilti::rt::optional::value(__cur) : (*__data).view());
    ::hilti::rt::integer::safe<int64_t> __lahead = ::hilti::rt::integer::safe<std::int64_t>{0};
    ::hilti::rt::stream::SafeConstIterator __lahead_end;
    std::optional<::hilti::rt::RecoverableFailure> __error = std::optional<::hilti::rt::RecoverableFailure>();
    __location__("spice.spicy:113:26-116:1");

    // Begin parsing production: Unit: Spice__ServerLink -> Resolved_9 Resolved_10;
    std::tie(__ncur, __lahead, __lahead_end, __error) = (*__unit).__parse_stage1(__data, __ncur.begin(), __ncur, ::hilti::rt::Bool(true), __lahead, __lahead_end, __error);
    // End parsing production: Unit: Spice__ServerLink -> Resolved_9 Resolved_10;

    if ( __error.has_value() ) {
        throw ::spicy::rt::ParseError(::hilti::rt::fmt(std::string_view("successful synchronization never confirmed: %s"), ::hilti::rt::exception::what(::hilti::rt::optional::value(__error))), ::hilti::rt::exception::where(::hilti::rt::optional::value(__error)));
    }

    return __ncur;
}

extern auto __hlt_spice::Spice::ServerLink::parse2(::hilti::rt::ValueReference<__hlt_spice::Spice::ServerLink>& __unit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::stream::View {
    ::hilti::rt::detail::checkStack();
    __location__("spice.spicy:113:26-116:1");
    ::hilti::rt::stream::View __ncur = (__cur ? ::hilti::rt::optional::value(__cur) : (*__data).view());
    ::hilti::rt::integer::safe<int64_t> __lahead = ::hilti::rt::integer::safe<std::int64_t>{0};
    ::hilti::rt::stream::SafeConstIterator __lahead_end;
    std::optional<::hilti::rt::RecoverableFailure> __error = std::optional<::hilti::rt::RecoverableFailure>();
    __location__("spice.spicy:113:26-116:1");

    // Begin parsing production: Unit: Spice__ServerLink -> Resolved_9 Resolved_10;
    std::tie(__ncur, __lahead, __lahead_end, __error) = (*__unit).__parse_stage1(__data, __ncur.begin(), __ncur, ::hilti::rt::Bool(true), __lahead, __lahead_end, __error);
    // End parsing production: Unit: Spice__ServerLink -> Resolved_9 Resolved_10;

    if ( __error.has_value() ) {
        throw ::spicy::rt::ParseError(::hilti::rt::fmt(std::string_view("successful synchronization never confirmed: %s"), ::hilti::rt::exception::what(::hilti::rt::optional::value(__error))), ::hilti::rt::exception::where(::hilti::rt::optional::value(__error)));
    }

    return __ncur;
}

extern auto __hlt_spice::Spice::ServerLink::parse3(::hilti::rt::ValueReference<::spicy::rt::ParsedUnit>& __gunit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::stream::View {
    ::hilti::rt::detail::checkStack();
    __location__("spice.spicy:113:26-116:1");
    ::hilti::rt::ValueReference<__hlt_spice::Spice::ServerLink> __unit = ::hilti::rt::reference::make_value<__hlt_spice::Spice::ServerLink>((__hlt_spice::Spice::ServerLink()));
    ::spicy::rt::ParsedUnit::initialize((*__gunit), __unit, &type_info::__ti_Spice__ServerLink_namex2aSpice__ServerLinkx2b);
    ::hilti::rt::stream::View __ncur = (__cur ? ::hilti::rt::optional::value(__cur) : (*__data).view());
    ::hilti::rt::integer::safe<int64_t> __lahead = ::hilti::rt::integer::safe<std::int64_t>{0};
    ::hilti::rt::stream::SafeConstIterator __lahead_end;
    std::optional<::hilti::rt::RecoverableFailure> __error = std::optional<::hilti::rt::RecoverableFailure>();
    __location__("spice.spicy:113:26-116:1");

    // Begin parsing production: Unit: Spice__ServerLink -> Resolved_9 Resolved_10;
    std::tie(__ncur, __lahead, __lahead_end, __error) = (*__unit).__parse_stage1(__data, __ncur.begin(), __ncur, ::hilti::rt::Bool(true), __lahead, __lahead_end, __error);
    // End parsing production: Unit: Spice__ServerLink -> Resolved_9 Resolved_10;

    if ( __error.has_value() ) {
        throw ::spicy::rt::ParseError(::hilti::rt::fmt(std::string_view("successful synchronization never confirmed: %s"), ::hilti::rt::exception::what(::hilti::rt::optional::value(__error))), ::hilti::rt::exception::where(::hilti::rt::optional::value(__error)));
    }

    return __ncur;
}

auto __hlt_spice::Spice::SpiceConversation::__parse_Spice__SpiceConversation_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> {
    auto __self = SpiceConversation::__self();
    ::hilti::rt::detail::checkStack();
    __location__("spice.spicy:52:33-77:1");
    std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> __result;

    {
        __location__("spice.spicy:54:20-54:25");

        // Begin parsing production: Variable: connection_id -> uint<32>;
        ::spicy::rt::detail::waitForInput(__data, __cur, ::hilti::rt::integer::safe<std::uint64_t>{4U}, std::string_view("expecting 4 bytes for unpacking value"), std::string_view("spice.spicy:54:20-54:25"), ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>());
        std::tie(::hilti::rt::optional::valueOrInit((*__self).connection_id), __cur) = ::hilti::rt::integer::unpack<uint32_t>(__cur, ::hilti::rt::ByteOrder{::hilti::rt::ByteOrder::Network}).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: connection_id -> uint<32>;
    }

    {
        __location__("spice.spicy:56:23-56:28");

        // Begin parsing production: Variable: num_channel_caps -> uint<32>;
        ::spicy::rt::detail::waitForInput(__data, __cur, ::hilti::rt::integer::safe<std::uint64_t>{4U}, std::string_view("expecting 4 bytes for unpacking value"), std::string_view("spice.spicy:56:23-56:28"), ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>());
        std::tie(::hilti::rt::optional::valueOrInit((*__self).num_channel_caps), __cur) = ::hilti::rt::integer::unpack<uint32_t>(__cur, ::hilti::rt::ByteOrder{::hilti::rt::ByteOrder::Network}).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: num_channel_caps -> uint<32>;
    }

    {
        __location__("spice.spicy:58:15-58:20");

        // Begin parsing production: Variable: destport -> uint<32>;
        ::spicy::rt::detail::waitForInput(__data, __cur, ::hilti::rt::integer::safe<std::uint64_t>{4U}, std::string_view("expecting 4 bytes for unpacking value"), std::string_view("spice.spicy:58:15-58:20"), ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>());
        std::tie(::hilti::rt::optional::valueOrInit((*__self).destport), __cur) = ::hilti::rt::integer::unpack<uint32_t>(__cur, ::hilti::rt::ByteOrder{::hilti::rt::ByteOrder::Network}).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: destport -> uint<32>;
    }

    {
        __location__("spice.spicy:60:18-60:23");

        // Begin parsing production: Variable: client_auth -> uint<32>;
        ::spicy::rt::detail::waitForInput(__data, __cur, ::hilti::rt::integer::safe<std::uint64_t>{4U}, std::string_view("expecting 4 bytes for unpacking value"), std::string_view("spice.spicy:60:18-60:23"), ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>());
        std::tie(::hilti::rt::optional::valueOrInit((*__self).client_auth), __cur) = ::hilti::rt::integer::unpack<uint32_t>(__cur, ::hilti::rt::ByteOrder{::hilti::rt::ByteOrder::Network}).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: client_auth -> uint<32>;
    }

    {
        __location__("spice.spicy:62:18-62:23");

        // Begin parsing production: Variable: server_auth -> uint<32>;
        ::spicy::rt::detail::waitForInput(__data, __cur, ::hilti::rt::integer::safe<std::uint64_t>{4U}, std::string_view("expecting 4 bytes for unpacking value"), std::string_view("spice.spicy:62:18-62:23"), ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>());
        std::tie(::hilti::rt::optional::valueOrInit((*__self).server_auth), __cur) = ::hilti::rt::integer::unpack<uint32_t>(__cur, ::hilti::rt::ByteOrder{::hilti::rt::ByteOrder::Network}).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: server_auth -> uint<32>;
    }

    {
        __location__("spice.spicy:64:20-64:25");

        // Begin parsing production: Variable: auth_selected -> uint<32>;
        ::spicy::rt::detail::waitForInput(__data, __cur, ::hilti::rt::integer::safe<std::uint64_t>{4U}, std::string_view("expecting 4 bytes for unpacking value"), std::string_view("spice.spicy:64:20-64:25"), ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>());
        std::tie(::hilti::rt::optional::valueOrInit((*__self).auth_selected), __cur) = ::hilti::rt::integer::unpack<uint32_t>(__cur, ::hilti::rt::ByteOrder{::hilti::rt::ByteOrder::Network}).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: auth_selected -> uint<32>;
    }

    {
        __location__("spice.spicy:66:18-66:23");
        ::hilti::rt::integer::safe<uint16_t> __parsed_next_state;

        // Begin parsing production: Variable: next_state -> uint<16>;
        ::spicy::rt::detail::waitForInput(__data, __cur, ::hilti::rt::integer::safe<std::uint64_t>{2U}, std::string_view("expecting 2 bytes for unpacking value"), std::string_view("spice.spicy:66:18-66:23"), ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>());
        std::tie(__parsed_next_state, __cur) = ::hilti::rt::integer::unpack<uint16_t>(__cur, ::hilti::rt::ByteOrder{::hilti::rt::ByteOrder::Network}).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: next_state -> uint<16>;

        {
            ::hilti::rt::integer::safe<uint16_t> __dd = __parsed_next_state;
            ::hilti::rt::optional::valueOrInit((*__self).next_state) = Spice::SpiceSessionState{__dd};
        }

    }

    {
        __location__("spice.spicy:68:20-68:25");

        // Begin parsing production: Variable: playback_mode -> uint<16>;
        ::spicy::rt::detail::waitForInput(__data, __cur, ::hilti::rt::integer::safe<std::uint64_t>{2U}, std::string_view("expecting 2 bytes for unpacking value"), std::string_view("spice.spicy:68:20-68:25"), ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>());
        std::tie(::hilti::rt::optional::valueOrInit((*__self).playback_mode), __cur) = ::hilti::rt::integer::unpack<uint16_t>(__cur, ::hilti::rt::ByteOrder{::hilti::rt::ByteOrder::Network}).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: playback_mode -> uint<16>;
    }

    {
        __location__("spice.spicy:70:19-70:23");

        // Begin parsing production: Variable: channel_type -> uint<8>;
        ::spicy::rt::detail::waitForInput(__data, __cur, ::hilti::rt::integer::safe<std::uint64_t>{1U}, std::string_view("expecting 1 bytes for unpacking value"), std::string_view("spice.spicy:70:19-70:23"), ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>());
        std::tie(::hilti::rt::optional::valueOrInit((*__self).channel_type), __cur) = ::hilti::rt::integer::unpack<uint8_t>(__cur, ::hilti::rt::ByteOrder{::hilti::rt::ByteOrder::Network}).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: channel_type -> uint<8>;
    }

    {
        __location__("spice.spicy:72:17-72:21");

        // Begin parsing production: Variable: channel_id -> uint<8>;
        ::spicy::rt::detail::waitForInput(__data, __cur, ::hilti::rt::integer::safe<std::uint64_t>{1U}, std::string_view("expecting 1 bytes for unpacking value"), std::string_view("spice.spicy:72:17-72:21"), ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>());
        std::tie(::hilti::rt::optional::valueOrInit((*__self).channel_id), __cur) = ::hilti::rt::integer::unpack<uint8_t>(__cur, ::hilti::rt::ByteOrder{::hilti::rt::ByteOrder::Network}).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: channel_id -> uint<8>;
    }

    {
        __location__("spice.spicy:74:25-74:29");

        // Begin parsing production: Variable: client_mini_header -> uint<8>;
        ::spicy::rt::detail::waitForInput(__data, __cur, ::hilti::rt::integer::safe<std::uint64_t>{1U}, std::string_view("expecting 1 bytes for unpacking value"), std::string_view("spice.spicy:74:25-74:29"), ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>());
        std::tie(::hilti::rt::optional::valueOrInit((*__self).client_mini_header), __cur) = ::hilti::rt::integer::unpack<uint8_t>(__cur, ::hilti::rt::ByteOrder{::hilti::rt::ByteOrder::Network}).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: client_mini_header -> uint<8>;
    }

    {
        __location__("spice.spicy:76:25-76:29");

        // Begin parsing production: Variable: server_mini_header -> uint<8>;
        ::spicy::rt::detail::waitForInput(__data, __cur, ::hilti::rt::integer::safe<std::uint64_t>{1U}, std::string_view("expecting 1 bytes for unpacking value"), std::string_view("spice.spicy:76:25-76:29"), ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>());
        std::tie(::hilti::rt::optional::valueOrInit((*__self).server_mini_header), __cur) = ::hilti::rt::integer::unpack<uint8_t>(__cur, ::hilti::rt::ByteOrder{::hilti::rt::ByteOrder::Network}).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: server_mini_header -> uint<8>;
    }

    ::hilti::rt::debug::dedent(std::string_view("spicy"));
    __result = std::make_tuple(__cur, __lah, __lahe, __error);
    return __result;
}

auto __hlt_spice::Spice::SpiceConversation::__parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> {
    auto __self = SpiceConversation::__self();
    ::hilti::rt::detail::checkStack();
    __location__("spice.spicy:52:33-77:1");
    std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> __result;

    {
        ::hilti::rt::debug::indent(std::string_view("spicy"));
        ::hilti::rt::stream::SafeConstIterator __begin = __cur.begin();
        ::hilti::rt::StrongReference<::hilti::rt::Stream> filtered = ::hilti::rt::StrongReference<::hilti::rt::Stream>();
        if ( ! (::hilti::rt::Bool(static_cast<bool>(filtered))) ) {
            __result = (*__self).__parse_Spice__SpiceConversation_stage2(__data, __begin, __cur, __trim, __lah, __lahe, __error);
        }
    }

    return __result;
}

extern auto __hlt_spice::Spice::SpiceConversation::parse1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::stream::View {
    ::hilti::rt::detail::checkStack();
    __location__("spice.spicy:52:33-77:1");
    ::hilti::rt::ValueReference<__hlt_spice::Spice::SpiceConversation> __unit = ::hilti::rt::reference::make_value<__hlt_spice::Spice::SpiceConversation>((__hlt_spice::Spice::SpiceConversation()));
    ::hilti::rt::stream::View __ncur = (__cur ? ::hilti::rt::optional::value(__cur) : (*__data).view());
    ::hilti::rt::integer::safe<int64_t> __lahead = ::hilti::rt::integer::safe<std::int64_t>{0};
    ::hilti::rt::stream::SafeConstIterator __lahead_end;
    std::optional<::hilti::rt::RecoverableFailure> __error = std::optional<::hilti::rt::RecoverableFailure>();
    __location__("spice.spicy:52:33-77:1");

    // Begin parsing production: Unit: Spice__SpiceConversation -> connection_id num_channel_caps destport client_auth server_auth auth_selected next_state playback_mode channel_type channel_id client_mini_header server_mini_header;
    std::tie(__ncur, __lahead, __lahead_end, __error) = (*__unit).__parse_stage1(__data, __ncur.begin(), __ncur, ::hilti::rt::Bool(true), __lahead, __lahead_end, __error);
    // End parsing production: Unit: Spice__SpiceConversation -> connection_id num_channel_caps destport client_auth server_auth auth_selected next_state playback_mode channel_type channel_id client_mini_header server_mini_header;

    if ( __error.has_value() ) {
        throw ::spicy::rt::ParseError(::hilti::rt::fmt(std::string_view("successful synchronization never confirmed: %s"), ::hilti::rt::exception::what(::hilti::rt::optional::value(__error))), ::hilti::rt::exception::where(::hilti::rt::optional::value(__error)));
    }

    return __ncur;
}

extern auto __hlt_spice::Spice::SpiceConversation::parse2(::hilti::rt::ValueReference<__hlt_spice::Spice::SpiceConversation>& __unit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::stream::View {
    ::hilti::rt::detail::checkStack();
    __location__("spice.spicy:52:33-77:1");
    ::hilti::rt::stream::View __ncur = (__cur ? ::hilti::rt::optional::value(__cur) : (*__data).view());
    ::hilti::rt::integer::safe<int64_t> __lahead = ::hilti::rt::integer::safe<std::int64_t>{0};
    ::hilti::rt::stream::SafeConstIterator __lahead_end;
    std::optional<::hilti::rt::RecoverableFailure> __error = std::optional<::hilti::rt::RecoverableFailure>();
    __location__("spice.spicy:52:33-77:1");

    // Begin parsing production: Unit: Spice__SpiceConversation -> connection_id num_channel_caps destport client_auth server_auth auth_selected next_state playback_mode channel_type channel_id client_mini_header server_mini_header;
    std::tie(__ncur, __lahead, __lahead_end, __error) = (*__unit).__parse_stage1(__data, __ncur.begin(), __ncur, ::hilti::rt::Bool(true), __lahead, __lahead_end, __error);
    // End parsing production: Unit: Spice__SpiceConversation -> connection_id num_channel_caps destport client_auth server_auth auth_selected next_state playback_mode channel_type channel_id client_mini_header server_mini_header;

    if ( __error.has_value() ) {
        throw ::spicy::rt::ParseError(::hilti::rt::fmt(std::string_view("successful synchronization never confirmed: %s"), ::hilti::rt::exception::what(::hilti::rt::optional::value(__error))), ::hilti::rt::exception::where(::hilti::rt::optional::value(__error)));
    }

    return __ncur;
}

extern auto __hlt_spice::Spice::SpiceConversation::parse3(::hilti::rt::ValueReference<::spicy::rt::ParsedUnit>& __gunit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::stream::View {
    ::hilti::rt::detail::checkStack();
    __location__("spice.spicy:52:33-77:1");
    ::hilti::rt::ValueReference<__hlt_spice::Spice::SpiceConversation> __unit = ::hilti::rt::reference::make_value<__hlt_spice::Spice::SpiceConversation>((__hlt_spice::Spice::SpiceConversation()));
    ::spicy::rt::ParsedUnit::initialize((*__gunit), __unit, &type_info::__ti_Spice__SpiceConversation_namex2aSpice__SpiceConversationx2b);
    ::hilti::rt::stream::View __ncur = (__cur ? ::hilti::rt::optional::value(__cur) : (*__data).view());
    ::hilti::rt::integer::safe<int64_t> __lahead = ::hilti::rt::integer::safe<std::int64_t>{0};
    ::hilti::rt::stream::SafeConstIterator __lahead_end;
    std::optional<::hilti::rt::RecoverableFailure> __error = std::optional<::hilti::rt::RecoverableFailure>();
    __location__("spice.spicy:52:33-77:1");

    // Begin parsing production: Unit: Spice__SpiceConversation -> connection_id num_channel_caps destport client_auth server_auth auth_selected next_state playback_mode channel_type channel_id client_mini_header server_mini_header;
    std::tie(__ncur, __lahead, __lahead_end, __error) = (*__unit).__parse_stage1(__data, __ncur.begin(), __ncur, ::hilti::rt::Bool(true), __lahead, __lahead_end, __error);
    // End parsing production: Unit: Spice__SpiceConversation -> connection_id num_channel_caps destport client_auth server_auth auth_selected next_state playback_mode channel_type channel_id client_mini_header server_mini_header;

    if ( __error.has_value() ) {
        throw ::spicy::rt::ParseError(::hilti::rt::fmt(std::string_view("successful synchronization never confirmed: %s"), ::hilti::rt::exception::what(::hilti::rt::optional::value(__error))), ::hilti::rt::exception::where(::hilti::rt::optional::value(__error)));
    }

    return __ncur;
}

auto __hlt_spice::Spice::SpiceLinkHeader::__parse_Spice__SpiceLinkHeader_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> {
    auto __self = SpiceLinkHeader::__self();
    ::hilti::rt::detail::checkStack();
    __location__("spice.spicy:80:24-85:1");
    std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> __result;

    {
        __location__("spice.spicy:81:12-81:17");

        // Begin parsing production: Variable: magic -> uint<32>;
        ::spicy::rt::detail::waitForInput(__data, __cur, ::hilti::rt::integer::safe<std::uint64_t>{4U}, std::string_view("expecting 4 bytes for unpacking value"), std::string_view("spice.spicy:81:12-81:17"), ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>());
        std::tie(::hilti::rt::optional::valueOrInit((*__self).magic), __cur) = ::hilti::rt::integer::unpack<uint32_t>(__cur, ::hilti::rt::ByteOrder{::hilti::rt::ByteOrder::Network}).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: magic -> uint<32>;
    }

    {
        __location__("spice.spicy:82:20-82:25");

        // Begin parsing production: Variable: major_version -> uint<32>;
        ::spicy::rt::detail::waitForInput(__data, __cur, ::hilti::rt::integer::safe<std::uint64_t>{4U}, std::string_view("expecting 4 bytes for unpacking value"), std::string_view("spice.spicy:82:20-82:25"), ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>());
        std::tie(::hilti::rt::optional::valueOrInit((*__self).major_version), __cur) = ::hilti::rt::integer::unpack<uint32_t>(__cur, ::hilti::rt::ByteOrder{::hilti::rt::ByteOrder::Network}).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: major_version -> uint<32>;
    }

    {
        __location__("spice.spicy:83:20-83:25");

        // Begin parsing production: Variable: minor_version -> uint<32>;
        ::spicy::rt::detail::waitForInput(__data, __cur, ::hilti::rt::integer::safe<std::uint64_t>{4U}, std::string_view("expecting 4 bytes for unpacking value"), std::string_view("spice.spicy:83:20-83:25"), ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>());
        std::tie(::hilti::rt::optional::valueOrInit((*__self).minor_version), __cur) = ::hilti::rt::integer::unpack<uint32_t>(__cur, ::hilti::rt::ByteOrder{::hilti::rt::ByteOrder::Network}).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: minor_version -> uint<32>;
    }

    {
        __location__("spice.spicy:84:11-84:16");

        // Begin parsing production: Variable: size -> uint<32>;
        ::spicy::rt::detail::waitForInput(__data, __cur, ::hilti::rt::integer::safe<std::uint64_t>{4U}, std::string_view("expecting 4 bytes for unpacking value"), std::string_view("spice.spicy:84:11-84:16"), ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>());
        std::tie(::hilti::rt::optional::valueOrInit((*__self).size), __cur) = ::hilti::rt::integer::unpack<uint32_t>(__cur, ::hilti::rt::ByteOrder{::hilti::rt::ByteOrder::Network}).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: size -> uint<32>;
    }

    ::hilti::rt::debug::dedent(std::string_view("spicy"));
    __result = std::make_tuple(__cur, __lah, __lahe, __error);
    return __result;
}

auto __hlt_spice::Spice::SpiceLinkHeader::__parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> {
    auto __self = SpiceLinkHeader::__self();
    ::hilti::rt::detail::checkStack();
    __location__("spice.spicy:80:24-85:1");
    std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> __result;

    {
        ::hilti::rt::debug::indent(std::string_view("spicy"));
        ::hilti::rt::stream::SafeConstIterator __begin = __cur.begin();
        ::hilti::rt::StrongReference<::hilti::rt::Stream> filtered = ::hilti::rt::StrongReference<::hilti::rt::Stream>();
        if ( ! (::hilti::rt::Bool(static_cast<bool>(filtered))) ) {
            __result = (*__self).__parse_Spice__SpiceLinkHeader_stage2(__data, __begin, __cur, __trim, __lah, __lahe, __error);
        }
    }

    return __result;
}

auto __hlt_spice::Spice::SpiceLinkMess::__parse_Spice__SpiceLinkMess_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> {
    auto __self = SpiceLinkMess::__self();
    ::hilti::rt::detail::checkStack();
    __location__("spice.spicy:89:22-96:1");
    std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> __result;

    {
        __location__("spice.spicy:90:20-90:25");

        // Begin parsing production: Variable: connection_id_2 -> uint<32>;
        ::spicy::rt::detail::waitForInput(__data, __cur, ::hilti::rt::integer::safe<std::uint64_t>{4U}, std::string_view("expecting 4 bytes for unpacking value"), std::string_view("spice.spicy:90:20-90:25"), ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>());
        std::tie(::hilti::rt::optional::valueOrInit((*__self).connection_id), __cur) = ::hilti::rt::integer::unpack<uint32_t>(__cur, ::hilti::rt::ByteOrder{::hilti::rt::ByteOrder::Network}).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: connection_id_2 -> uint<32>;
    }

    {
        __location__("spice.spicy:91:19-91:23");

        // Begin parsing production: Variable: channel_type_2 -> uint<8>;
        ::spicy::rt::detail::waitForInput(__data, __cur, ::hilti::rt::integer::safe<std::uint64_t>{1U}, std::string_view("expecting 1 bytes for unpacking value"), std::string_view("spice.spicy:91:19-91:23"), ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>());
        std::tie(::hilti::rt::optional::valueOrInit((*__self).channel_type), __cur) = ::hilti::rt::integer::unpack<uint8_t>(__cur, ::hilti::rt::ByteOrder{::hilti::rt::ByteOrder::Network}).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: channel_type_2 -> uint<8>;
    }

    {
        __location__("spice.spicy:92:17-92:21");

        // Begin parsing production: Variable: channel_id_2 -> uint<8>;
        ::spicy::rt::detail::waitForInput(__data, __cur, ::hilti::rt::integer::safe<std::uint64_t>{1U}, std::string_view("expecting 1 bytes for unpacking value"), std::string_view("spice.spicy:92:17-92:21"), ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>());
        std::tie(::hilti::rt::optional::valueOrInit((*__self).channel_id), __cur) = ::hilti::rt::integer::unpack<uint8_t>(__cur, ::hilti::rt::ByteOrder{::hilti::rt::ByteOrder::Network}).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: channel_id_2 -> uint<8>;
    }

    {
        __location__("spice.spicy:93:22-93:27");

        // Begin parsing production: Variable: num_common_caps -> uint<32>;
        ::spicy::rt::detail::waitForInput(__data, __cur, ::hilti::rt::integer::safe<std::uint64_t>{4U}, std::string_view("expecting 4 bytes for unpacking value"), std::string_view("spice.spicy:93:22-93:27"), ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>());
        std::tie(::hilti::rt::optional::valueOrInit((*__self).num_common_caps), __cur) = ::hilti::rt::integer::unpack<uint32_t>(__cur, ::hilti::rt::ByteOrder{::hilti::rt::ByteOrder::Network}).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: num_common_caps -> uint<32>;
    }

    {
        __location__("spice.spicy:94:23-94:28");

        // Begin parsing production: Variable: num_channel_caps_2 -> uint<32>;
        ::spicy::rt::detail::waitForInput(__data, __cur, ::hilti::rt::integer::safe<std::uint64_t>{4U}, std::string_view("expecting 4 bytes for unpacking value"), std::string_view("spice.spicy:94:23-94:28"), ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>());
        std::tie(::hilti::rt::optional::valueOrInit((*__self).num_channel_caps), __cur) = ::hilti::rt::integer::unpack<uint32_t>(__cur, ::hilti::rt::ByteOrder{::hilti::rt::ByteOrder::Network}).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: num_channel_caps_2 -> uint<32>;
    }

    {
        __location__("spice.spicy:95:18-95:23");

        // Begin parsing production: Variable: caps_offset -> uint<32>;
        ::spicy::rt::detail::waitForInput(__data, __cur, ::hilti::rt::integer::safe<std::uint64_t>{4U}, std::string_view("expecting 4 bytes for unpacking value"), std::string_view("spice.spicy:95:18-95:23"), ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>());
        std::tie(::hilti::rt::optional::valueOrInit((*__self).caps_offset), __cur) = ::hilti::rt::integer::unpack<uint32_t>(__cur, ::hilti::rt::ByteOrder{::hilti::rt::ByteOrder::Network}).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: caps_offset -> uint<32>;
    }

    ::hilti::rt::debug::dedent(std::string_view("spicy"));
    __result = std::make_tuple(__cur, __lah, __lahe, __error);
    return __result;
}

auto __hlt_spice::Spice::SpiceLinkMess::__parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> {
    auto __self = SpiceLinkMess::__self();
    ::hilti::rt::detail::checkStack();
    __location__("spice.spicy:89:22-96:1");
    std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> __result;

    {
        ::hilti::rt::debug::indent(std::string_view("spicy"));
        ::hilti::rt::stream::SafeConstIterator __begin = __cur.begin();
        ::hilti::rt::StrongReference<::hilti::rt::Stream> filtered = ::hilti::rt::StrongReference<::hilti::rt::Stream>();
        if ( ! (::hilti::rt::Bool(static_cast<bool>(filtered))) ) {
            __result = (*__self).__parse_Spice__SpiceLinkMess_stage2(__data, __begin, __cur, __trim, __lah, __lahe, __error);
        }
    }

    return __result;
}

auto __hlt_spice::Spice::SpiceLinkReply::__parse_Spice__SpiceLinkReply_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> {
    auto __self = SpiceLinkReply::__self();
    ::hilti::rt::detail::checkStack();
    __location__("spice.spicy:99:23-105:1");
    std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> __result;

    {
        __location__("spice.spicy:100:12-100:17");

        // Begin parsing production: Variable: error -> uint<32>;
        ::spicy::rt::detail::waitForInput(__data, __cur, ::hilti::rt::integer::safe<std::uint64_t>{4U}, std::string_view("expecting 4 bytes for unpacking value"), std::string_view("spice.spicy:100:12-100:17"), ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>());
        std::tie(::hilti::rt::optional::valueOrInit((*__self).error), __cur) = ::hilti::rt::integer::unpack<uint32_t>(__cur, ::hilti::rt::ByteOrder{::hilti::rt::ByteOrder::Network}).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: error -> uint<32>;
    }

    {
        ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_1;
        __location__("spice.spicy:101:14-101:18");

        // Begin parsing production: Variable: pub_key -> bytes;
        ::hilti::rt::optional::valueOrInit((*__self).pub_key) = ::spicy::rt::detail::extractBytes(__data, __cur, __hlt_spice::Spice::SPICE_TICKET_PUBKEY_BYTES, ::hilti::rt::Bool(false), std::string_view("spice.spicy:101:5-101:51"), (__lhs_1=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>())));
        __cur = __cur.advance(__hlt_spice::Spice::SPICE_TICKET_PUBKEY_BYTES);
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: pub_key -> bytes;
    }

    {
        __location__("spice.spicy:102:22-102:27");

        // Begin parsing production: Variable: num_common_caps_2 -> uint<32>;
        ::spicy::rt::detail::waitForInput(__data, __cur, ::hilti::rt::integer::safe<std::uint64_t>{4U}, std::string_view("expecting 4 bytes for unpacking value"), std::string_view("spice.spicy:102:22-102:27"), ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>());
        std::tie(::hilti::rt::optional::valueOrInit((*__self).num_common_caps), __cur) = ::hilti::rt::integer::unpack<uint32_t>(__cur, ::hilti::rt::ByteOrder{::hilti::rt::ByteOrder::Network}).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: num_common_caps_2 -> uint<32>;
    }

    {
        __location__("spice.spicy:103:23-103:28");

        // Begin parsing production: Variable: num_channel_caps_3 -> uint<32>;
        ::spicy::rt::detail::waitForInput(__data, __cur, ::hilti::rt::integer::safe<std::uint64_t>{4U}, std::string_view("expecting 4 bytes for unpacking value"), std::string_view("spice.spicy:103:23-103:28"), ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>());
        std::tie(::hilti::rt::optional::valueOrInit((*__self).num_channel_caps), __cur) = ::hilti::rt::integer::unpack<uint32_t>(__cur, ::hilti::rt::ByteOrder{::hilti::rt::ByteOrder::Network}).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: num_channel_caps_3 -> uint<32>;
    }

    {
        __location__("spice.spicy:104:18-104:23");

        // Begin parsing production: Variable: caps_offset_2 -> uint<32>;
        ::spicy::rt::detail::waitForInput(__data, __cur, ::hilti::rt::integer::safe<std::uint64_t>{4U}, std::string_view("expecting 4 bytes for unpacking value"), std::string_view("spice.spicy:104:18-104:23"), ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>());
        std::tie(::hilti::rt::optional::valueOrInit((*__self).caps_offset), __cur) = ::hilti::rt::integer::unpack<uint32_t>(__cur, ::hilti::rt::ByteOrder{::hilti::rt::ByteOrder::Network}).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: caps_offset_2 -> uint<32>;
    }

    ::hilti::rt::debug::dedent(std::string_view("spicy"));
    __result = std::make_tuple(__cur, __lah, __lahe, __error);
    return __result;
}

auto __hlt_spice::Spice::SpiceLinkReply::__parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> {
    auto __self = SpiceLinkReply::__self();
    ::hilti::rt::detail::checkStack();
    __location__("spice.spicy:99:23-105:1");
    std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> __result;

    {
        ::hilti::rt::debug::indent(std::string_view("spicy"));
        ::hilti::rt::stream::SafeConstIterator __begin = __cur.begin();
        ::hilti::rt::StrongReference<::hilti::rt::Stream> filtered = ::hilti::rt::StrongReference<::hilti::rt::Stream>();
        if ( ! (::hilti::rt::Bool(static_cast<bool>(filtered))) ) {
            __result = (*__self).__parse_Spice__SpiceLinkReply_stage2(__data, __begin, __cur, __trim, __lah, __lahe, __error);
        }
    }

    return __result;
}

extern void __hlt_spice::Spice::__init_module() {
    __hlt_spice::Spice::__register_Spice_ClientLink();
    __hlt_spice::Spice::__register_Spice_ServerLink();
    __hlt_spice::Spice::__register_Spice_SpiceConversation();
    __hlt_spice::Spice::__register_Spice_SpiceLinkAuthMechanism();
    __hlt_spice::Spice::__register_Spice_SpiceLinkEncryptedTicket();
    __hlt_spice::Spice::__register_Spice_SpiceLinkHeader();
    __hlt_spice::Spice::__register_Spice_SpiceLinkMess();
    __hlt_spice::Spice::__register_Spice_SpiceLinkReply();
}

extern void __hlt_spice::Spice::__register_Spice_ClientLink() {
    ::hilti::rt::detail::checkStack();
    Spice::ClientLink::__parser = ::spicy::rt::Parser(std::string_view("Spice::ClientLink"), ::hilti::rt::Bool(true), hlt_spice::Spice::ClientLink::parse1, hlt_spice::Spice::ClientLink::parse2, hlt_spice::Spice::ClientLink::parse3, ::hilti::rt::Null(), &type_info::__ti_Spice__ClientLink_namex2aSpice__ClientLinkx2b, std::string(""), ::hilti::rt::Vector<::spicy::rt::MIMEType>({}), ::hilti::rt::Vector<::spicy::rt::ParserPort>({}));
    ::spicy::rt::detail::registerParser(Spice::ClientLink::__parser, std::string(__hlt_spice_hlto_scope), ::hilti::rt::StrongReference<__hlt_spice::Spice::ClientLink>());
}

extern void __hlt_spice::Spice::__register_Spice_ServerLink() {
    ::hilti::rt::detail::checkStack();
    Spice::ServerLink::__parser = ::spicy::rt::Parser(std::string_view("Spice::ServerLink"), ::hilti::rt::Bool(true), hlt_spice::Spice::ServerLink::parse1, hlt_spice::Spice::ServerLink::parse2, hlt_spice::Spice::ServerLink::parse3, ::hilti::rt::Null(), &type_info::__ti_Spice__ServerLink_namex2aSpice__ServerLinkx2b, std::string(""), ::hilti::rt::Vector<::spicy::rt::MIMEType>({}), ::hilti::rt::Vector<::spicy::rt::ParserPort>({}));
    ::spicy::rt::detail::registerParser(Spice::ServerLink::__parser, std::string(__hlt_spice_hlto_scope), ::hilti::rt::StrongReference<__hlt_spice::Spice::ServerLink>());
}

extern void __hlt_spice::Spice::__register_Spice_SpiceConversation() {
    ::hilti::rt::detail::checkStack();
    Spice::SpiceConversation::__parser = ::spicy::rt::Parser(std::string_view("Spice::SpiceConversation"), ::hilti::rt::Bool(true), hlt_spice::Spice::SpiceConversation::parse1, hlt_spice::Spice::SpiceConversation::parse2, hlt_spice::Spice::SpiceConversation::parse3, ::hilti::rt::Null(), &type_info::__ti_Spice__SpiceConversation_namex2aSpice__SpiceConversationx2b, std::string(""), ::hilti::rt::Vector<::spicy::rt::MIMEType>({}), ::hilti::rt::Vector<::spicy::rt::ParserPort>({}));
    ::spicy::rt::detail::registerParser(Spice::SpiceConversation::__parser, std::string(__hlt_spice_hlto_scope), ::hilti::rt::StrongReference<__hlt_spice::Spice::SpiceConversation>());
}

extern void __hlt_spice::Spice::__register_Spice_SpiceLinkAuthMechanism() { ::hilti::rt::detail::checkStack(); }

extern void __hlt_spice::Spice::__register_Spice_SpiceLinkEncryptedTicket() { ::hilti::rt::detail::checkStack(); }

extern void __hlt_spice::Spice::__register_Spice_SpiceLinkHeader() { ::hilti::rt::detail::checkStack(); }

extern void __hlt_spice::Spice::__register_Spice_SpiceLinkMess() { ::hilti::rt::detail::checkStack(); }

extern void __hlt_spice::Spice::__register_Spice_SpiceLinkReply() { ::hilti::rt::detail::checkStack(); }

extern void __hlt_spice::Spice::__register_module() { ::hilti::rt::detail::registerModule({ "Spice", __hlt_spice_hlto_scope, &__init_module, nullptr, nullptr, nullptr}); }

extern auto __hlt_spice::Spice::operator<<(std::ostream& o, const __hlt_spice::Spice::SpiceLinkHeader& x) -> std::ostream& { return o << ::hilti::rt::to_string(x);; }

extern auto __hlt_spice::Spice::operator<<(std::ostream& o, const __hlt_spice::Spice::SpiceLinkMess& x) -> std::ostream& { return o << ::hilti::rt::to_string(x);; }

extern auto __hlt_spice::Spice::operator<<(std::ostream& o, const __hlt_spice::Spice::ClientLink& x) -> std::ostream& { return o << ::hilti::rt::to_string(x);; }

extern auto __hlt_spice::Spice::operator<<(std::ostream& o, const __hlt_spice::Spice::SpiceLinkReply& x) -> std::ostream& { return o << ::hilti::rt::to_string(x);; }

extern auto __hlt_spice::Spice::operator<<(std::ostream& o, const __hlt_spice::Spice::ServerLink& x) -> std::ostream& { return o << ::hilti::rt::to_string(x);; }

inline auto __hlt_spice::Spice::operator<<(std::ostream& o, SpiceSessionState x) -> std::ostream& { o << ::hilti::rt::to_string(x); return o; }

extern auto __hlt_spice::Spice::operator<<(std::ostream& o, const __hlt_spice::Spice::SpiceConversation& x) -> std::ostream& { return o << ::hilti::rt::to_string(x);; }

inline auto hilti::rt::detail::adl::to_string(__hlt_spice::Spice::SpiceSessionState x, adl::tag) -> std::string {
    switch ( x.value() ) {
        case __hlt_spice::Spice::SpiceSessionState::SPICE_DATA: return "SpiceSessionState::SPICE_DATA";
        case __hlt_spice::Spice::SpiceSessionState::SPICE_SASL_DATA: return "SpiceSessionState::SPICE_SASL_DATA";
        case __hlt_spice::Spice::SpiceSessionState::SPICE_SASL_STEP_FROM_SERVER_CONT: return "SpiceSessionState::SPICE_SASL_STEP_FROM_SERVER_CONT";
        case __hlt_spice::Spice::SpiceSessionState::SPICE_SASL_STEP_FROM_SERVER: return "SpiceSessionState::SPICE_SASL_STEP_FROM_SERVER";
        case __hlt_spice::Spice::SpiceSessionState::SPICE_SASL_STEP_TO_SERVER: return "SpiceSessionState::SPICE_SASL_STEP_TO_SERVER";
        case __hlt_spice::Spice::SpiceSessionState::SPICE_SASL_START_FROM_SERVER_CONT: return "SpiceSessionState::SPICE_SASL_START_FROM_SERVER_CONT";
        case __hlt_spice::Spice::SpiceSessionState::SPICE_SASL_START_FROM_SERVER: return "SpiceSessionState::SPICE_SASL_START_FROM_SERVER";
        case __hlt_spice::Spice::SpiceSessionState::SPICE_SASL_START_TO_SERVER: return "SpiceSessionState::SPICE_SASL_START_TO_SERVER";
        case __hlt_spice::Spice::SpiceSessionState::SPICE_SASL_INIT_FROM_SERVER: return "SpiceSessionState::SPICE_SASL_INIT_FROM_SERVER";
        case __hlt_spice::Spice::SpiceSessionState::SPICE_CLIENT_AUTH_SELECT: return "SpiceSessionState::SPICE_CLIENT_AUTH_SELECT";
        case __hlt_spice::Spice::SpiceSessionState::SPICE_TICKET_SERVER: return "SpiceSessionState::SPICE_TICKET_SERVER";
        case __hlt_spice::Spice::SpiceSessionState::SPICE_TICKET_CLIENT: return "SpiceSessionState::SPICE_TICKET_CLIENT";
        case __hlt_spice::Spice::SpiceSessionState::SPICE_LINK_SERVER: return "SpiceSessionState::SPICE_LINK_SERVER";
        case __hlt_spice::Spice::SpiceSessionState::SPICE_LINK_CLIENT: return "SpiceSessionState::SPICE_LINK_CLIENT";
        case __hlt_spice::Spice::SpiceSessionState::Undef: return "SpiceSessionState::Undef";
        default: return ::hilti::rt::fmt("SpiceSessionState::<unknown-%" PRIu64 ">", x.value());
    }
}

extern auto hlt_spice::Spice::ClientLink::parse1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(__data), ::hilti::rt::resumable::detail::copyArg(__cur), ::hilti::rt::resumable::detail::copyArg(__context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap](::hilti::rt::resumable::Handle* r) -> ::hilti::rt::any {
        return __hlt_spice::Spice::ClientLink::parse1(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap));
    };

    auto r = std::make_unique<::hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

extern auto hlt_spice::Spice::ClientLink::parse2(::hilti::rt::ValueReference<__hlt_spice::Spice::ClientLink>& __unit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(__unit), ::hilti::rt::resumable::detail::copyArg(__data), ::hilti::rt::resumable::detail::copyArg(__cur), ::hilti::rt::resumable::detail::copyArg(__context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap](::hilti::rt::resumable::Handle* r) -> ::hilti::rt::any {
        return __hlt_spice::Spice::ClientLink::parse2(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap), std::get<3>(*args_on_heap));
    };

    auto r = std::make_unique<::hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

extern auto hlt_spice::Spice::ClientLink::parse3(::hilti::rt::ValueReference<::spicy::rt::ParsedUnit>& __gunit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(__gunit), ::hilti::rt::resumable::detail::copyArg(__data), ::hilti::rt::resumable::detail::copyArg(__cur), ::hilti::rt::resumable::detail::copyArg(__context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap](::hilti::rt::resumable::Handle* r) -> ::hilti::rt::any {
        return __hlt_spice::Spice::ClientLink::parse3(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap), std::get<3>(*args_on_heap));
    };

    auto r = std::make_unique<::hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

extern auto hlt_spice::Spice::ServerLink::parse1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(__data), ::hilti::rt::resumable::detail::copyArg(__cur), ::hilti::rt::resumable::detail::copyArg(__context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap](::hilti::rt::resumable::Handle* r) -> ::hilti::rt::any {
        return __hlt_spice::Spice::ServerLink::parse1(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap));
    };

    auto r = std::make_unique<::hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

extern auto hlt_spice::Spice::ServerLink::parse2(::hilti::rt::ValueReference<__hlt_spice::Spice::ServerLink>& __unit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(__unit), ::hilti::rt::resumable::detail::copyArg(__data), ::hilti::rt::resumable::detail::copyArg(__cur), ::hilti::rt::resumable::detail::copyArg(__context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap](::hilti::rt::resumable::Handle* r) -> ::hilti::rt::any {
        return __hlt_spice::Spice::ServerLink::parse2(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap), std::get<3>(*args_on_heap));
    };

    auto r = std::make_unique<::hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

extern auto hlt_spice::Spice::ServerLink::parse3(::hilti::rt::ValueReference<::spicy::rt::ParsedUnit>& __gunit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(__gunit), ::hilti::rt::resumable::detail::copyArg(__data), ::hilti::rt::resumable::detail::copyArg(__cur), ::hilti::rt::resumable::detail::copyArg(__context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap](::hilti::rt::resumable::Handle* r) -> ::hilti::rt::any {
        return __hlt_spice::Spice::ServerLink::parse3(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap), std::get<3>(*args_on_heap));
    };

    auto r = std::make_unique<::hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

extern auto hlt_spice::Spice::SpiceConversation::parse1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(__data), ::hilti::rt::resumable::detail::copyArg(__cur), ::hilti::rt::resumable::detail::copyArg(__context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap](::hilti::rt::resumable::Handle* r) -> ::hilti::rt::any {
        return __hlt_spice::Spice::SpiceConversation::parse1(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap));
    };

    auto r = std::make_unique<::hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

extern auto hlt_spice::Spice::SpiceConversation::parse2(::hilti::rt::ValueReference<__hlt_spice::Spice::SpiceConversation>& __unit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(__unit), ::hilti::rt::resumable::detail::copyArg(__data), ::hilti::rt::resumable::detail::copyArg(__cur), ::hilti::rt::resumable::detail::copyArg(__context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap](::hilti::rt::resumable::Handle* r) -> ::hilti::rt::any {
        return __hlt_spice::Spice::SpiceConversation::parse2(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap), std::get<3>(*args_on_heap));
    };

    auto r = std::make_unique<::hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

extern auto hlt_spice::Spice::SpiceConversation::parse3(::hilti::rt::ValueReference<::spicy::rt::ParsedUnit>& __gunit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(__gunit), ::hilti::rt::resumable::detail::copyArg(__data), ::hilti::rt::resumable::detail::copyArg(__cur), ::hilti::rt::resumable::detail::copyArg(__context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap](::hilti::rt::resumable::Handle* r) -> ::hilti::rt::any {
        return __hlt_spice::Spice::SpiceConversation::parse3(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap), std::get<3>(*args_on_heap));
    };

    auto r = std::make_unique<::hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

