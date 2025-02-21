// Prototypes for module Spice

#ifndef HILTI_PROTOTYPES_SPICE_H

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
    struct SpiceMiniDataHeader;
    struct VDAgentClipboard;
    struct VDAgentClipboardGrab;
    struct VDAgentClipboardRequest;
    struct VDAgentFileXferDataMessage;
    struct VDAgentFileXferStartMessage;
    struct VDAgentFileXferStatusMessage;
    struct VDAgentMessage;
    struct SpiceMiniData;
    HILTI_RT_ENUM_WITH_DEFAULT(SpiceSessionState, Undef, SPICE_LINK_CLIENT = 0, SPICE_LINK_SERVER = 1, SPICE_TICKET_CLIENT = 2, SPICE_TICKET_SERVER = 3, SPICE_CLIENT_AUTH_SELECT = 4, SPICE_SASL_INIT_FROM_SERVER = 5, SPICE_SASL_START_TO_SERVER = 6, SPICE_SASL_START_FROM_SERVER = 7, SPICE_SASL_START_FROM_SERVER_CONT = 8, SPICE_SASL_STEP_TO_SERVER = 9, SPICE_SASL_STEP_FROM_SERVER = 10, SPICE_SASL_STEP_FROM_SERVER_CONT = 11, SPICE_SASL_DATA = 12, SPICE_DATA = 13, Undef = -1);;
    HILTI_RT_ENUM_WITH_DEFAULT(VD_AGENT_TYPE, Undef, VD_AGENT_MOUSE_STATE = 1, VD_AGENT_MONITORS_CONFIG = 2, VD_AGENT_REPLY = 3, VD_AGENT_CLIPBOARD = 4, VD_AGENT_DISPLAY_CONFIG = 5, VD_AGENT_ANNOUNCE_CAPABILITIES = 6, VD_AGENT_CLIPBOARD_GRAB = 7, VD_AGENT_CLIPBOARD_REQUEST = 8, VD_AGENT_CLIPBOARD_RELEASE = 9, VD_AGENT_FILE_XFER_START = 10, VD_AGENT_FILE_XFER_STATUS = 11, VD_AGENT_FILE_XFER_DATA = 12, VD_AGENT_CLIENT_DISCONNECTED = 13, VD_AGENT_MAX_CLIPBOARD = 14, VD_AGENT_AUDIO_VOLUME_SYNC = 15, VD_AGENT_GRAPHICS_DEVICE_INFO = 16, VD_AGENT_END_MESSAGE = 17, Undef = -1);;
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

    struct SpiceMiniDataHeader : ::hilti::rt::trait::isStruct, ::hilti::rt::Controllable<SpiceMiniDataHeader> {
        auto __self() { return ::hilti::rt::ValueReference<SpiceMiniDataHeader>::self(this); }
        std::optional<::hilti::rt::integer::safe<uint16_t>> msg_type{};
        std::optional<::hilti::rt::integer::safe<uint32_t>> msg_size{};
        auto __parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        auto __parse_Spice__SpiceMiniDataHeader_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        std::optional<::hilti::rt::RecoverableFailure> __error{};
        SpiceMiniDataHeader();
        SpiceMiniDataHeader(const SpiceMiniDataHeader&) = default;
        SpiceMiniDataHeader(SpiceMiniDataHeader&&) = default;
        SpiceMiniDataHeader& operator=(const SpiceMiniDataHeader&) = default;
        SpiceMiniDataHeader& operator=(SpiceMiniDataHeader&&) = default;
        SpiceMiniDataHeader(std::optional<std::optional<::hilti::rt::integer::safe<uint16_t>>> msg_type, std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> msg_size);
        template<typename F> void __visit(F _) const { _("msg_type", msg_type); _("msg_size", msg_size); }
    };

    struct VDAgentClipboard : ::hilti::rt::trait::isStruct, hilti::rt::trait::hasParameters, ::hilti::rt::Controllable<VDAgentClipboard> {
        auto __self() { return ::hilti::rt::ValueReference<VDAgentClipboard>::self(this); }
        std::optional<::hilti::rt::integer::safe<uint32_t>> cb_type{};
        std::optional<::hilti::rt::Bytes> data{};
        auto __parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        auto __parse_Spice__VDAgentClipboard_3_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        std::optional<::hilti::rt::RecoverableFailure> __error{};
        ::hilti::rt::integer::safe<uint32_t> __p_data_size{};
        VDAgentClipboard();
        VDAgentClipboard(const VDAgentClipboard&) = default;
        VDAgentClipboard(VDAgentClipboard&&) = default;
        VDAgentClipboard& operator=(const VDAgentClipboard&) = default;
        VDAgentClipboard& operator=(VDAgentClipboard&&) = default;
        VDAgentClipboard(std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> cb_type, std::optional<std::optional<::hilti::rt::Bytes>> data);
        VDAgentClipboard(const ::hilti::rt::integer::safe<uint32_t>& __p_data_size);
        template<typename F> void __visit(F _) const { _("cb_type", cb_type); _("data", data); }
    };

    struct VDAgentClipboardGrab : ::hilti::rt::trait::isStruct, hilti::rt::trait::hasParameters, ::hilti::rt::Controllable<VDAgentClipboardGrab> {
        auto __self() { return ::hilti::rt::ValueReference<VDAgentClipboardGrab>::self(this); }
        std::optional<::hilti::rt::Vector<::hilti::rt::integer::safe<uint32_t>>> types{};
        auto __parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        auto __parse_types_3_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error, ::hilti::rt::Vector<::hilti::rt::integer::safe<uint32_t>>& __dst) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        auto __parse_Spice__VDAgentClipboardGrab_3_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        std::optional<::hilti::rt::RecoverableFailure> __error{};
        ::hilti::rt::integer::safe<uint32_t> __p_data_size{};
        VDAgentClipboardGrab();
        VDAgentClipboardGrab(const VDAgentClipboardGrab&) = default;
        VDAgentClipboardGrab(VDAgentClipboardGrab&&) = default;
        VDAgentClipboardGrab& operator=(const VDAgentClipboardGrab&) = default;
        VDAgentClipboardGrab& operator=(VDAgentClipboardGrab&&) = default;
        VDAgentClipboardGrab(std::optional<std::optional<::hilti::rt::Vector<::hilti::rt::integer::safe<uint32_t>>>> types);
        VDAgentClipboardGrab(const ::hilti::rt::integer::safe<uint32_t>& __p_data_size);
        template<typename F> void __visit(F _) const { _("types", types); }
    };

    struct VDAgentClipboardRequest : ::hilti::rt::trait::isStruct, hilti::rt::trait::hasParameters, ::hilti::rt::Controllable<VDAgentClipboardRequest> {
        auto __self() { return ::hilti::rt::ValueReference<VDAgentClipboardRequest>::self(this); }
        std::optional<::hilti::rt::integer::safe<uint32_t>> cb_type{};
        auto __parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        auto __parse_Spice__VDAgentClipboardRequest_3_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        std::optional<::hilti::rt::RecoverableFailure> __error{};
        ::hilti::rt::integer::safe<uint32_t> __p_data_size{};
        VDAgentClipboardRequest();
        VDAgentClipboardRequest(const VDAgentClipboardRequest&) = default;
        VDAgentClipboardRequest(VDAgentClipboardRequest&&) = default;
        VDAgentClipboardRequest& operator=(const VDAgentClipboardRequest&) = default;
        VDAgentClipboardRequest& operator=(VDAgentClipboardRequest&&) = default;
        VDAgentClipboardRequest(std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> cb_type);
        VDAgentClipboardRequest(const ::hilti::rt::integer::safe<uint32_t>& __p_data_size);
        template<typename F> void __visit(F _) const { _("cb_type", cb_type); }
    };

    struct VDAgentFileXferDataMessage : ::hilti::rt::trait::isStruct, hilti::rt::trait::hasParameters, ::hilti::rt::Controllable<VDAgentFileXferDataMessage> {
        auto __self() { return ::hilti::rt::ValueReference<VDAgentFileXferDataMessage>::self(this); }
        std::optional<::hilti::rt::integer::safe<uint32_t>> id{};
        std::optional<::hilti::rt::integer::safe<uint64_t>> file_size{};
        std::optional<::hilti::rt::Bytes> data{};
        auto __parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        auto __parse_Spice__VDAgentFileXferDataMessage_3_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        std::optional<::hilti::rt::RecoverableFailure> __error{};
        ::hilti::rt::integer::safe<uint32_t> __p_data_size{};
        VDAgentFileXferDataMessage();
        VDAgentFileXferDataMessage(const VDAgentFileXferDataMessage&) = default;
        VDAgentFileXferDataMessage(VDAgentFileXferDataMessage&&) = default;
        VDAgentFileXferDataMessage& operator=(const VDAgentFileXferDataMessage&) = default;
        VDAgentFileXferDataMessage& operator=(VDAgentFileXferDataMessage&&) = default;
        VDAgentFileXferDataMessage(std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> id, std::optional<std::optional<::hilti::rt::integer::safe<uint64_t>>> file_size, std::optional<std::optional<::hilti::rt::Bytes>> data);
        VDAgentFileXferDataMessage(const ::hilti::rt::integer::safe<uint32_t>& __p_data_size);
        template<typename F> void __visit(F _) const { _("id", id); _("file_size", file_size); _("data", data); }
    };

    struct VDAgentFileXferStartMessage : ::hilti::rt::trait::isStruct, hilti::rt::trait::hasParameters, ::hilti::rt::Controllable<VDAgentFileXferStartMessage> {
        auto __self() { return ::hilti::rt::ValueReference<VDAgentFileXferStartMessage>::self(this); }
        std::optional<::hilti::rt::integer::safe<uint32_t>> id{};
        std::optional<::hilti::rt::Bytes> data{};
        auto __parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        auto __parse_Spice__VDAgentFileXferStartMessage_3_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        std::optional<::hilti::rt::RecoverableFailure> __error{};
        ::hilti::rt::integer::safe<uint32_t> __p_data_size{};
        VDAgentFileXferStartMessage();
        VDAgentFileXferStartMessage(const VDAgentFileXferStartMessage&) = default;
        VDAgentFileXferStartMessage(VDAgentFileXferStartMessage&&) = default;
        VDAgentFileXferStartMessage& operator=(const VDAgentFileXferStartMessage&) = default;
        VDAgentFileXferStartMessage& operator=(VDAgentFileXferStartMessage&&) = default;
        VDAgentFileXferStartMessage(std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> id, std::optional<std::optional<::hilti::rt::Bytes>> data);
        VDAgentFileXferStartMessage(const ::hilti::rt::integer::safe<uint32_t>& __p_data_size);
        template<typename F> void __visit(F _) const { _("id", id); _("data", data); }
    };

    struct VDAgentFileXferStatusMessage : ::hilti::rt::trait::isStruct, hilti::rt::trait::hasParameters, ::hilti::rt::Controllable<VDAgentFileXferStatusMessage> {
        auto __self() { return ::hilti::rt::ValueReference<VDAgentFileXferStatusMessage>::self(this); }
        std::optional<::hilti::rt::integer::safe<uint32_t>> id{};
        std::optional<::hilti::rt::integer::safe<uint32_t>> rv{};
        std::optional<::hilti::rt::Bytes> data{};
        auto __parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        auto __parse_Spice__VDAgentFileXferStatusMessage_3_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        std::optional<::hilti::rt::RecoverableFailure> __error{};
        ::hilti::rt::integer::safe<uint32_t> __p_data_size{};
        VDAgentFileXferStatusMessage();
        VDAgentFileXferStatusMessage(const VDAgentFileXferStatusMessage&) = default;
        VDAgentFileXferStatusMessage(VDAgentFileXferStatusMessage&&) = default;
        VDAgentFileXferStatusMessage& operator=(const VDAgentFileXferStatusMessage&) = default;
        VDAgentFileXferStatusMessage& operator=(VDAgentFileXferStatusMessage&&) = default;
        VDAgentFileXferStatusMessage(std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> id, std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> rv, std::optional<std::optional<::hilti::rt::Bytes>> data);
        VDAgentFileXferStatusMessage(const ::hilti::rt::integer::safe<uint32_t>& __p_data_size);
        template<typename F> void __visit(F _) const { _("id", id); _("rv", rv); _("data", data); }
    };

    struct VDAgentMessage : ::hilti::rt::trait::isStruct, ::hilti::rt::Controllable<VDAgentMessage> {
        auto __self() { return ::hilti::rt::ValueReference<VDAgentMessage>::self(this); }
        std::optional<::hilti::rt::integer::safe<uint32_t>> protocol_version{};
        std::optional<Spice::VD_AGENT_TYPE> msg_type{};
        std::optional<::hilti::rt::integer::safe<uint64_t>> opaque{};
        std::optional<::hilti::rt::integer::safe<uint32_t>> size{};
        std::optional<::hilti::rt::ValueReference<VDAgentClipboard>> clipboard_data{};
        std::optional<::hilti::rt::ValueReference<VDAgentClipboardGrab>> clipboard_grab{};
        std::optional<::hilti::rt::ValueReference<VDAgentClipboardRequest>> clipboard_request{};
        std::optional<::hilti::rt::ValueReference<VDAgentFileXferStartMessage>> file_xfer_start{};
        std::optional<::hilti::rt::ValueReference<VDAgentFileXferStatusMessage>> file_xfer_status{};
        std::optional<::hilti::rt::ValueReference<VDAgentFileXferDataMessage>> file_xfer_data{};
        auto __parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        auto __parse_switch_3_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        auto __parse_Spice__VDAgentMessage_2_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        std::optional<::hilti::rt::RecoverableFailure> __error{};
        VDAgentMessage();
        VDAgentMessage(const VDAgentMessage&) = default;
        VDAgentMessage(VDAgentMessage&&) = default;
        VDAgentMessage& operator=(const VDAgentMessage&) = default;
        VDAgentMessage& operator=(VDAgentMessage&&) = default;
        VDAgentMessage(std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> protocol_version, std::optional<std::optional<Spice::VD_AGENT_TYPE>> msg_type, std::optional<std::optional<::hilti::rt::integer::safe<uint64_t>>> opaque, std::optional<std::optional<::hilti::rt::integer::safe<uint32_t>>> size, std::optional<std::optional<::hilti::rt::ValueReference<VDAgentClipboard>>> clipboard_data, std::optional<std::optional<::hilti::rt::ValueReference<VDAgentClipboardGrab>>> clipboard_grab, std::optional<std::optional<::hilti::rt::ValueReference<VDAgentClipboardRequest>>> clipboard_request, std::optional<std::optional<::hilti::rt::ValueReference<VDAgentFileXferStartMessage>>> file_xfer_start, std::optional<std::optional<::hilti::rt::ValueReference<VDAgentFileXferStatusMessage>>> file_xfer_status, std::optional<std::optional<::hilti::rt::ValueReference<VDAgentFileXferDataMessage>>> file_xfer_data);
        template<typename F> void __visit(F _) const { _("protocol_version", protocol_version); _("msg_type", msg_type); _("opaque", opaque); _("size", size); _("clipboard_data", clipboard_data); _("clipboard_grab", clipboard_grab); _("clipboard_request", clipboard_request); _("file_xfer_start", file_xfer_start); _("file_xfer_status", file_xfer_status); _("file_xfer_data", file_xfer_data); }
    };

    struct SpiceMiniData : ::hilti::rt::trait::isStruct, ::hilti::rt::Controllable<SpiceMiniData> {
        auto __self() { return ::hilti::rt::ValueReference<SpiceMiniData>::self(this); }
        std::optional<::hilti::rt::ValueReference<SpiceMiniDataHeader>> header{};
        std::optional<::hilti::rt::ValueReference<VDAgentMessage>> agent_data{};
        inline static ::spicy::rt::Parser __parser{};
        auto __parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        static auto parse1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::stream::View;
        static auto parse2(::hilti::rt::ValueReference<SpiceMiniData>& __unit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::stream::View;
        static auto parse3(::hilti::rt::ValueReference<::spicy::rt::ParsedUnit>& __gunit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::stream::View;
        auto __parse_switch_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        auto __parse_Spice__SpiceMiniData_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const ::hilti::rt::stream::SafeConstIterator& __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        std::optional<::hilti::rt::RecoverableFailure> __error{};
        SpiceMiniData();
        SpiceMiniData(const SpiceMiniData&) = default;
        SpiceMiniData(SpiceMiniData&&) = default;
        SpiceMiniData& operator=(const SpiceMiniData&) = default;
        SpiceMiniData& operator=(SpiceMiniData&&) = default;
        SpiceMiniData(std::optional<std::optional<::hilti::rt::ValueReference<SpiceMiniDataHeader>>> header, std::optional<std::optional<::hilti::rt::ValueReference<VDAgentMessage>>> agent_data);
        template<typename F> void __visit(F _) const { _("header", header); _("agent_data", agent_data); }
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
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceDataHeader0x25is_filter = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceDataHeader0x25supports_filters = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceDataHeader0x25supports_sinks = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceDataHeader0x25synchronization = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceDataHeader0x25uses_offset = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceDataHeader0x25uses_random_access = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceDataHeader0x25uses_stream = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceDataHeader0x25uses_sync_advance = ::hilti::rt::Bool(false);
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
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceMiniData0x25is_filter = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceMiniData0x25supports_filters = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceMiniData0x25supports_sinks = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceMiniData0x25synchronization = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceMiniData0x25uses_offset = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceMiniData0x25uses_random_access = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceMiniData0x25uses_stream = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceMiniData0x25uses_sync_advance = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceMiniDataHeader0x25is_filter = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceMiniDataHeader0x25supports_filters = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceMiniDataHeader0x25supports_sinks = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceMiniDataHeader0x25synchronization = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceMiniDataHeader0x25uses_offset = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceMiniDataHeader0x25uses_random_access = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceMiniDataHeader0x25uses_stream = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceMiniDataHeader0x25uses_sync_advance = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceSubMessage0x25is_filter = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceSubMessage0x25supports_filters = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceSubMessage0x25supports_sinks = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceSubMessage0x25synchronization = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceSubMessage0x25uses_offset = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceSubMessage0x25uses_random_access = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceSubMessage0x25uses_stream = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceSubMessage0x25uses_sync_advance = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceSubMessageList0x25is_filter = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceSubMessageList0x25supports_filters = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceSubMessageList0x25supports_sinks = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceSubMessageList0x25synchronization = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceSubMessageList0x25uses_offset = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceSubMessageList0x25uses_random_access = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceSubMessageList0x25uses_stream = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40SpiceSubMessageList0x25uses_sync_advance = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentClipboard0x25is_filter = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentClipboard0x25supports_filters = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentClipboard0x25supports_sinks = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentClipboard0x25synchronization = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentClipboard0x25uses_offset = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentClipboard0x25uses_random_access = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentClipboard0x25uses_stream = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentClipboard0x25uses_sync_advance = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentClipboardGrab0x25is_filter = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentClipboardGrab0x25supports_filters = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentClipboardGrab0x25supports_sinks = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentClipboardGrab0x25synchronization = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentClipboardGrab0x25uses_offset = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentClipboardGrab0x25uses_random_access = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentClipboardGrab0x25uses_stream = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentClipboardGrab0x25uses_sync_advance = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentClipboardRequest0x25is_filter = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentClipboardRequest0x25supports_filters = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentClipboardRequest0x25supports_sinks = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentClipboardRequest0x25synchronization = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentClipboardRequest0x25uses_offset = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentClipboardRequest0x25uses_random_access = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentClipboardRequest0x25uses_stream = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentClipboardRequest0x25uses_sync_advance = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentFileXferDataMessage0x25is_filter = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentFileXferDataMessage0x25supports_filters = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentFileXferDataMessage0x25supports_sinks = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentFileXferDataMessage0x25synchronization = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentFileXferDataMessage0x25uses_offset = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentFileXferDataMessage0x25uses_random_access = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentFileXferDataMessage0x25uses_stream = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentFileXferDataMessage0x25uses_sync_advance = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentFileXferStartMessage0x25is_filter = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentFileXferStartMessage0x25supports_filters = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentFileXferStartMessage0x25supports_sinks = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentFileXferStartMessage0x25synchronization = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentFileXferStartMessage0x25uses_offset = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentFileXferStartMessage0x25uses_random_access = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentFileXferStartMessage0x25uses_stream = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentFileXferStartMessage0x25uses_sync_advance = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentFileXferStatusMessage0x25is_filter = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentFileXferStatusMessage0x25supports_filters = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentFileXferStatusMessage0x25supports_sinks = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentFileXferStatusMessage0x25synchronization = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentFileXferStatusMessage0x25uses_offset = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentFileXferStatusMessage0x25uses_random_access = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentFileXferStatusMessage0x25uses_stream = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentFileXferStatusMessage0x25uses_sync_advance = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentMessage0x25is_filter = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentMessage0x25supports_filters = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentMessage0x25supports_sinks = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentMessage0x25synchronization = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentMessage0x25uses_offset = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentMessage0x25uses_random_access = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentMessage0x25uses_stream = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25Spice0x400x40VDAgentMessage0x25uses_sync_advance = ::hilti::rt::Bool(false);
    extern auto operator<<(std::ostream& o, const __hlt_spice::Spice::SpiceLinkHeader& x) -> std::ostream&;
    extern auto operator<<(std::ostream& o, const __hlt_spice::Spice::SpiceLinkMess& x) -> std::ostream&;
    extern auto operator<<(std::ostream& o, const __hlt_spice::Spice::ClientLink& x) -> std::ostream&;
    extern auto operator<<(std::ostream& o, const __hlt_spice::Spice::SpiceLinkReply& x) -> std::ostream&;
    extern auto operator<<(std::ostream& o, const __hlt_spice::Spice::ServerLink& x) -> std::ostream&;
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
}

namespace hlt_spice::Spice::SpiceConversation {
    extern auto parse1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::Resumable;
    extern auto parse2(::hilti::rt::ValueReference<__hlt_spice::Spice::SpiceConversation>& __unit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::Resumable;
    extern auto parse3(::hilti::rt::ValueReference<::spicy::rt::ParsedUnit>& __gunit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::Resumable;
}

namespace __hlt_spice::Spice {
    extern auto operator<<(std::ostream& o, const __hlt_spice::Spice::SpiceMiniDataHeader& x) -> std::ostream&;
    extern auto operator<<(std::ostream& o, const __hlt_spice::Spice::VDAgentClipboard& x) -> std::ostream&;
    extern auto operator<<(std::ostream& o, const __hlt_spice::Spice::VDAgentClipboardGrab& x) -> std::ostream&;
    extern auto operator<<(std::ostream& o, const __hlt_spice::Spice::VDAgentClipboardRequest& x) -> std::ostream&;
    extern auto operator<<(std::ostream& o, const __hlt_spice::Spice::VDAgentFileXferDataMessage& x) -> std::ostream&;
    extern auto operator<<(std::ostream& o, const __hlt_spice::Spice::VDAgentFileXferStartMessage& x) -> std::ostream&;
    extern auto operator<<(std::ostream& o, const __hlt_spice::Spice::VDAgentFileXferStatusMessage& x) -> std::ostream&;
}

namespace hilti::rt::detail::adl {
    inline auto to_string(__hlt_spice::Spice::VD_AGENT_TYPE x, adl::tag) -> std::string;
}

namespace __hlt_spice::Spice {
    inline auto operator<<(std::ostream& o, VD_AGENT_TYPE x) -> std::ostream&;
    extern auto operator<<(std::ostream& o, const __hlt_spice::Spice::VDAgentMessage& x) -> std::ostream&;
    extern auto operator<<(std::ostream& o, const __hlt_spice::Spice::SpiceMiniData& x) -> std::ostream&;
}

namespace hlt_spice::Spice::SpiceMiniData {
    extern auto parse1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::Resumable;
    extern auto parse2(::hilti::rt::ValueReference<__hlt_spice::Spice::SpiceMiniData>& __unit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::Resumable;
    extern auto parse3(::hilti::rt::ValueReference<::spicy::rt::ParsedUnit>& __gunit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, const std::optional<::hilti::rt::stream::View>& __cur, const std::optional<::spicy::rt::UnitContext>& __context) -> ::hilti::rt::Resumable;
}

namespace __hlt_spice::Spice {
    extern void __register_Spice_ClientLink();
    extern void __register_Spice_ServerLink();
    extern void __register_Spice_SpiceConversation();
    extern void __register_Spice_SpiceDataHeader();
    extern void __register_Spice_SpiceLinkAuthMechanism();
    extern void __register_Spice_SpiceLinkEncryptedTicket();
    extern void __register_Spice_SpiceLinkHeader();
    extern void __register_Spice_SpiceLinkMess();
    extern void __register_Spice_SpiceLinkReply();
    extern void __register_Spice_SpiceMiniData();
    extern void __register_Spice_SpiceMiniDataHeader();
    extern void __register_Spice_SpiceSubMessage();
    extern void __register_Spice_SpiceSubMessageList();
    extern void __register_Spice_VDAgentClipboard();
    extern void __register_Spice_VDAgentClipboardGrab();
    extern void __register_Spice_VDAgentClipboardRequest();
    extern void __register_Spice_VDAgentFileXferDataMessage();
    extern void __register_Spice_VDAgentFileXferStartMessage();
    extern void __register_Spice_VDAgentFileXferStatusMessage();
    extern void __register_Spice_VDAgentMessage();
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
    extern const ::hilti::rt::TypeInfo __ti_Spice__SpiceMiniDataHeader_namex2aSpice__SpiceMiniDataHeaderx2b;
    const ::hilti::rt::TypeInfo __ti_Spice__SpiceMiniDataHeader_namex2aSpice__SpiceMiniDataHeaderx2b = { "Spice::SpiceMiniDataHeader", "Spice::SpiceMiniDataHeader", new ::hilti::rt::type_info::Struct(std::vector<::hilti::rt::type_info::struct_::Field>({::hilti::rt::type_info::struct_::Field{ "msg_type", &::hilti::rt::type_info::uint16, offsetof(Spice::SpiceMiniDataHeader, msg_type), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint16_t>>() }, ::hilti::rt::type_info::struct_::Field{ "msg_size", &::hilti::rt::type_info::uint32, offsetof(Spice::SpiceMiniDataHeader, msg_size), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint32_t>>() }, ::hilti::rt::type_info::struct_::Field{ "__error", &type_info::__ti_optional_spicy__RecoverableFailure__optionalx2anamex2ahilti__RecoverableFailurex2bx2b, offsetof(Spice::SpiceMiniDataHeader, __error), true, false }})) };
    extern const ::hilti::rt::TypeInfo __ti_Spice__VDAgentClipboard_namex2aSpice__VDAgentClipboardx2b;
    const ::hilti::rt::TypeInfo __ti_Spice__VDAgentClipboard_namex2aSpice__VDAgentClipboardx2b = { "Spice::VDAgentClipboard", "Spice::VDAgentClipboard", new ::hilti::rt::type_info::Struct(std::vector<::hilti::rt::type_info::struct_::Field>({::hilti::rt::type_info::struct_::Field{ "cb_type", &::hilti::rt::type_info::uint32, offsetof(Spice::VDAgentClipboard, cb_type), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint32_t>>() }, ::hilti::rt::type_info::struct_::Field{ "data", &::hilti::rt::type_info::bytes, offsetof(Spice::VDAgentClipboard, data), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::Bytes>() }, ::hilti::rt::type_info::struct_::Field{ "__error", &type_info::__ti_optional_spicy__RecoverableFailure__optionalx2anamex2ahilti__RecoverableFailurex2bx2b, offsetof(Spice::VDAgentClipboard, __error), true, false }})) };
    extern const ::hilti::rt::TypeInfo __ti_Spice__VDAgentClipboardGrab_namex2aSpice__VDAgentClipboardGrabx2b;
    extern const ::hilti::rt::TypeInfo __ti_vector_uint_32___vectorx2auint32x2b;
    const ::hilti::rt::TypeInfo __ti_vector_uint_32___vectorx2auint32x2b = { {}, "vector<uint<32>>", new ::hilti::rt::type_info::Vector(&::hilti::rt::type_info::uint32, ::hilti::rt::type_info::Vector::accessor<::hilti::rt::integer::safe<uint32_t>>()) };
    const ::hilti::rt::TypeInfo __ti_Spice__VDAgentClipboardGrab_namex2aSpice__VDAgentClipboardGrabx2b = { "Spice::VDAgentClipboardGrab", "Spice::VDAgentClipboardGrab", new ::hilti::rt::type_info::Struct(std::vector<::hilti::rt::type_info::struct_::Field>({::hilti::rt::type_info::struct_::Field{ "types", &type_info::__ti_vector_uint_32___vectorx2auint32x2b, offsetof(Spice::VDAgentClipboardGrab, types), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::Vector<::hilti::rt::integer::safe<uint32_t>>>() }, ::hilti::rt::type_info::struct_::Field{ "__error", &type_info::__ti_optional_spicy__RecoverableFailure__optionalx2anamex2ahilti__RecoverableFailurex2bx2b, offsetof(Spice::VDAgentClipboardGrab, __error), true, false }})) };
    extern const ::hilti::rt::TypeInfo __ti_Spice__VDAgentClipboardRequest_namex2aSpice__VDAgentClipboardRequestx2b;
    const ::hilti::rt::TypeInfo __ti_Spice__VDAgentClipboardRequest_namex2aSpice__VDAgentClipboardRequestx2b = { "Spice::VDAgentClipboardRequest", "Spice::VDAgentClipboardRequest", new ::hilti::rt::type_info::Struct(std::vector<::hilti::rt::type_info::struct_::Field>({::hilti::rt::type_info::struct_::Field{ "cb_type", &::hilti::rt::type_info::uint32, offsetof(Spice::VDAgentClipboardRequest, cb_type), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint32_t>>() }, ::hilti::rt::type_info::struct_::Field{ "__error", &type_info::__ti_optional_spicy__RecoverableFailure__optionalx2anamex2ahilti__RecoverableFailurex2bx2b, offsetof(Spice::VDAgentClipboardRequest, __error), true, false }})) };
    extern const ::hilti::rt::TypeInfo __ti_Spice__VDAgentFileXferDataMessage_namex2aSpice__VDAgentFileXferDataMessagex2b;
    const ::hilti::rt::TypeInfo __ti_Spice__VDAgentFileXferDataMessage_namex2aSpice__VDAgentFileXferDataMessagex2b = { "Spice::VDAgentFileXferDataMessage", "Spice::VDAgentFileXferDataMessage", new ::hilti::rt::type_info::Struct(std::vector<::hilti::rt::type_info::struct_::Field>({::hilti::rt::type_info::struct_::Field{ "id", &::hilti::rt::type_info::uint32, offsetof(Spice::VDAgentFileXferDataMessage, id), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint32_t>>() }, ::hilti::rt::type_info::struct_::Field{ "file_size", &::hilti::rt::type_info::uint64, offsetof(Spice::VDAgentFileXferDataMessage, file_size), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint64_t>>() }, ::hilti::rt::type_info::struct_::Field{ "data", &::hilti::rt::type_info::bytes, offsetof(Spice::VDAgentFileXferDataMessage, data), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::Bytes>() }, ::hilti::rt::type_info::struct_::Field{ "__error", &type_info::__ti_optional_spicy__RecoverableFailure__optionalx2anamex2ahilti__RecoverableFailurex2bx2b, offsetof(Spice::VDAgentFileXferDataMessage, __error), true, false }})) };
    extern const ::hilti::rt::TypeInfo __ti_Spice__VDAgentFileXferStartMessage_namex2aSpice__VDAgentFileXferStartMessagex2b;
    const ::hilti::rt::TypeInfo __ti_Spice__VDAgentFileXferStartMessage_namex2aSpice__VDAgentFileXferStartMessagex2b = { "Spice::VDAgentFileXferStartMessage", "Spice::VDAgentFileXferStartMessage", new ::hilti::rt::type_info::Struct(std::vector<::hilti::rt::type_info::struct_::Field>({::hilti::rt::type_info::struct_::Field{ "id", &::hilti::rt::type_info::uint32, offsetof(Spice::VDAgentFileXferStartMessage, id), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint32_t>>() }, ::hilti::rt::type_info::struct_::Field{ "data", &::hilti::rt::type_info::bytes, offsetof(Spice::VDAgentFileXferStartMessage, data), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::Bytes>() }, ::hilti::rt::type_info::struct_::Field{ "__error", &type_info::__ti_optional_spicy__RecoverableFailure__optionalx2anamex2ahilti__RecoverableFailurex2bx2b, offsetof(Spice::VDAgentFileXferStartMessage, __error), true, false }})) };
    extern const ::hilti::rt::TypeInfo __ti_Spice__VDAgentFileXferStatusMessage_namex2aSpice__VDAgentFileXferStatusMessagex2b;
    const ::hilti::rt::TypeInfo __ti_Spice__VDAgentFileXferStatusMessage_namex2aSpice__VDAgentFileXferStatusMessagex2b = { "Spice::VDAgentFileXferStatusMessage", "Spice::VDAgentFileXferStatusMessage", new ::hilti::rt::type_info::Struct(std::vector<::hilti::rt::type_info::struct_::Field>({::hilti::rt::type_info::struct_::Field{ "id", &::hilti::rt::type_info::uint32, offsetof(Spice::VDAgentFileXferStatusMessage, id), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint32_t>>() }, ::hilti::rt::type_info::struct_::Field{ "rv", &::hilti::rt::type_info::uint32, offsetof(Spice::VDAgentFileXferStatusMessage, rv), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint32_t>>() }, ::hilti::rt::type_info::struct_::Field{ "data", &::hilti::rt::type_info::bytes, offsetof(Spice::VDAgentFileXferStatusMessage, data), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::Bytes>() }, ::hilti::rt::type_info::struct_::Field{ "__error", &type_info::__ti_optional_spicy__RecoverableFailure__optionalx2anamex2ahilti__RecoverableFailurex2bx2b, offsetof(Spice::VDAgentFileXferStatusMessage, __error), true, false }})) };
    extern const ::hilti::rt::TypeInfo __ti_Spice__VD_AGENT_TYPE_namex2aSpice__VD_AGENT_TYPEx2b;
    const ::hilti::rt::TypeInfo __ti_Spice__VD_AGENT_TYPE_namex2aSpice__VD_AGENT_TYPEx2b = { "Spice::VD_AGENT_TYPE", "Spice::VD_AGENT_TYPE", new ::hilti::rt::type_info::Enum(std::vector<::hilti::rt::type_info::enum_::Label>({::hilti::rt::type_info::enum_::Label{ "VD_AGENT_MOUSE_STATE", 1 }, ::hilti::rt::type_info::enum_::Label{ "VD_AGENT_MONITORS_CONFIG", 2 }, ::hilti::rt::type_info::enum_::Label{ "VD_AGENT_REPLY", 3 }, ::hilti::rt::type_info::enum_::Label{ "VD_AGENT_CLIPBOARD", 4 }, ::hilti::rt::type_info::enum_::Label{ "VD_AGENT_DISPLAY_CONFIG", 5 }, ::hilti::rt::type_info::enum_::Label{ "VD_AGENT_ANNOUNCE_CAPABILITIES", 6 }, ::hilti::rt::type_info::enum_::Label{ "VD_AGENT_CLIPBOARD_GRAB", 7 }, ::hilti::rt::type_info::enum_::Label{ "VD_AGENT_CLIPBOARD_REQUEST", 8 }, ::hilti::rt::type_info::enum_::Label{ "VD_AGENT_CLIPBOARD_RELEASE", 9 }, ::hilti::rt::type_info::enum_::Label{ "VD_AGENT_FILE_XFER_START", 10 }, ::hilti::rt::type_info::enum_::Label{ "VD_AGENT_FILE_XFER_STATUS", 11 }, ::hilti::rt::type_info::enum_::Label{ "VD_AGENT_FILE_XFER_DATA", 12 }, ::hilti::rt::type_info::enum_::Label{ "VD_AGENT_CLIENT_DISCONNECTED", 13 }, ::hilti::rt::type_info::enum_::Label{ "VD_AGENT_MAX_CLIPBOARD", 14 }, ::hilti::rt::type_info::enum_::Label{ "VD_AGENT_AUDIO_VOLUME_SYNC", 15 }, ::hilti::rt::type_info::enum_::Label{ "VD_AGENT_GRAPHICS_DEVICE_INFO", 16 }, ::hilti::rt::type_info::enum_::Label{ "VD_AGENT_END_MESSAGE", 17 }, ::hilti::rt::type_info::enum_::Label{ "Undef", -1 }})) };
    extern const ::hilti::rt::TypeInfo __ti_Spice__VDAgentMessage_namex2aSpice__VDAgentMessagex2b;
    extern const ::hilti::rt::TypeInfo __ti_value_ref_VDAgentClipboard__value_refx2anamex2aSpice__VDAgentClipboardx2bx2b;
    const ::hilti::rt::TypeInfo __ti_value_ref_VDAgentClipboard__value_refx2anamex2aSpice__VDAgentClipboardx2bx2b = { {}, "value_ref<VDAgentClipboard>", new ::hilti::rt::type_info::ValueReference(&type_info::__ti_Spice__VDAgentClipboard_namex2aSpice__VDAgentClipboardx2b, ::hilti::rt::type_info::ValueReference::accessor<__hlt_spice::Spice::VDAgentClipboard>()) };
    extern const ::hilti::rt::TypeInfo __ti_value_ref_VDAgentClipboardGrab__value_refx2anamex2aSpice__VDAgentClipboardGrabx2bx2b;
    const ::hilti::rt::TypeInfo __ti_value_ref_VDAgentClipboardGrab__value_refx2anamex2aSpice__VDAgentClipboardGrabx2bx2b = { {}, "value_ref<VDAgentClipboardGrab>", new ::hilti::rt::type_info::ValueReference(&type_info::__ti_Spice__VDAgentClipboardGrab_namex2aSpice__VDAgentClipboardGrabx2b, ::hilti::rt::type_info::ValueReference::accessor<__hlt_spice::Spice::VDAgentClipboardGrab>()) };
    extern const ::hilti::rt::TypeInfo __ti_value_ref_VDAgentClipboardRequest__value_refx2anamex2aSpice__VDAgentClipboardRequestx2bx2b;
    const ::hilti::rt::TypeInfo __ti_value_ref_VDAgentClipboardRequest__value_refx2anamex2aSpice__VDAgentClipboardRequestx2bx2b = { {}, "value_ref<VDAgentClipboardRequest>", new ::hilti::rt::type_info::ValueReference(&type_info::__ti_Spice__VDAgentClipboardRequest_namex2aSpice__VDAgentClipboardRequestx2b, ::hilti::rt::type_info::ValueReference::accessor<__hlt_spice::Spice::VDAgentClipboardRequest>()) };
    extern const ::hilti::rt::TypeInfo __ti_value_ref_VDAgentFileXferStartMessage__value_refx2anamex2aSpice__VDAgentFileXferStartMessagex2bx2b;
    const ::hilti::rt::TypeInfo __ti_value_ref_VDAgentFileXferStartMessage__value_refx2anamex2aSpice__VDAgentFileXferStartMessagex2bx2b = { {}, "value_ref<VDAgentFileXferStartMessage>", new ::hilti::rt::type_info::ValueReference(&type_info::__ti_Spice__VDAgentFileXferStartMessage_namex2aSpice__VDAgentFileXferStartMessagex2b, ::hilti::rt::type_info::ValueReference::accessor<__hlt_spice::Spice::VDAgentFileXferStartMessage>()) };
    extern const ::hilti::rt::TypeInfo __ti_value_ref_VDAgentFileXferStatusMessage__value_refx2anamex2aSpice__VDAgentFileXferStatusMessagex2bx2b;
    const ::hilti::rt::TypeInfo __ti_value_ref_VDAgentFileXferStatusMessage__value_refx2anamex2aSpice__VDAgentFileXferStatusMessagex2bx2b = { {}, "value_ref<VDAgentFileXferStatusMessage>", new ::hilti::rt::type_info::ValueReference(&type_info::__ti_Spice__VDAgentFileXferStatusMessage_namex2aSpice__VDAgentFileXferStatusMessagex2b, ::hilti::rt::type_info::ValueReference::accessor<__hlt_spice::Spice::VDAgentFileXferStatusMessage>()) };
    extern const ::hilti::rt::TypeInfo __ti_value_ref_VDAgentFileXferDataMessage__value_refx2anamex2aSpice__VDAgentFileXferDataMessagex2bx2b;
    const ::hilti::rt::TypeInfo __ti_value_ref_VDAgentFileXferDataMessage__value_refx2anamex2aSpice__VDAgentFileXferDataMessagex2bx2b = { {}, "value_ref<VDAgentFileXferDataMessage>", new ::hilti::rt::type_info::ValueReference(&type_info::__ti_Spice__VDAgentFileXferDataMessage_namex2aSpice__VDAgentFileXferDataMessagex2b, ::hilti::rt::type_info::ValueReference::accessor<__hlt_spice::Spice::VDAgentFileXferDataMessage>()) };
    const ::hilti::rt::TypeInfo __ti_Spice__VDAgentMessage_namex2aSpice__VDAgentMessagex2b = { "Spice::VDAgentMessage", "Spice::VDAgentMessage", new ::hilti::rt::type_info::Struct(std::vector<::hilti::rt::type_info::struct_::Field>({::hilti::rt::type_info::struct_::Field{ "protocol_version", &::hilti::rt::type_info::uint32, offsetof(Spice::VDAgentMessage, protocol_version), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint32_t>>() }, ::hilti::rt::type_info::struct_::Field{ "msg_type", &type_info::__ti_Spice__VD_AGENT_TYPE_namex2aSpice__VD_AGENT_TYPEx2b, offsetof(Spice::VDAgentMessage, msg_type), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<Spice::VD_AGENT_TYPE>() }, ::hilti::rt::type_info::struct_::Field{ "opaque", &::hilti::rt::type_info::uint64, offsetof(Spice::VDAgentMessage, opaque), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint64_t>>() }, ::hilti::rt::type_info::struct_::Field{ "size", &::hilti::rt::type_info::uint32, offsetof(Spice::VDAgentMessage, size), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::integer::safe<uint32_t>>() }, ::hilti::rt::type_info::struct_::Field{ "clipboard_data", &type_info::__ti_value_ref_VDAgentClipboard__value_refx2anamex2aSpice__VDAgentClipboardx2bx2b, offsetof(Spice::VDAgentMessage, clipboard_data), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::ValueReference<__hlt_spice::Spice::VDAgentClipboard>>() }, ::hilti::rt::type_info::struct_::Field{ "clipboard_grab", &type_info::__ti_value_ref_VDAgentClipboardGrab__value_refx2anamex2aSpice__VDAgentClipboardGrabx2bx2b, offsetof(Spice::VDAgentMessage, clipboard_grab), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::ValueReference<__hlt_spice::Spice::VDAgentClipboardGrab>>() }, ::hilti::rt::type_info::struct_::Field{ "clipboard_request", &type_info::__ti_value_ref_VDAgentClipboardRequest__value_refx2anamex2aSpice__VDAgentClipboardRequestx2bx2b, offsetof(Spice::VDAgentMessage, clipboard_request), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::ValueReference<__hlt_spice::Spice::VDAgentClipboardRequest>>() }, ::hilti::rt::type_info::struct_::Field{ "file_xfer_start", &type_info::__ti_value_ref_VDAgentFileXferStartMessage__value_refx2anamex2aSpice__VDAgentFileXferStartMessagex2bx2b, offsetof(Spice::VDAgentMessage, file_xfer_start), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::ValueReference<__hlt_spice::Spice::VDAgentFileXferStartMessage>>() }, ::hilti::rt::type_info::struct_::Field{ "file_xfer_status", &type_info::__ti_value_ref_VDAgentFileXferStatusMessage__value_refx2anamex2aSpice__VDAgentFileXferStatusMessagex2bx2b, offsetof(Spice::VDAgentMessage, file_xfer_status), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::ValueReference<__hlt_spice::Spice::VDAgentFileXferStatusMessage>>() }, ::hilti::rt::type_info::struct_::Field{ "file_xfer_data", &type_info::__ti_value_ref_VDAgentFileXferDataMessage__value_refx2anamex2aSpice__VDAgentFileXferDataMessagex2bx2b, offsetof(Spice::VDAgentMessage, file_xfer_data), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::ValueReference<__hlt_spice::Spice::VDAgentFileXferDataMessage>>() }, ::hilti::rt::type_info::struct_::Field{ "__error", &type_info::__ti_optional_spicy__RecoverableFailure__optionalx2anamex2ahilti__RecoverableFailurex2bx2b, offsetof(Spice::VDAgentMessage, __error), true, false }})) };
    extern const ::hilti::rt::TypeInfo __ti_Spice__SpiceMiniData_namex2aSpice__SpiceMiniDatax2b;
    extern const ::hilti::rt::TypeInfo __ti_value_ref_SpiceMiniDataHeader__value_refx2anamex2aSpice__SpiceMiniDataHeaderx2bx2b;
    const ::hilti::rt::TypeInfo __ti_value_ref_SpiceMiniDataHeader__value_refx2anamex2aSpice__SpiceMiniDataHeaderx2bx2b = { {}, "value_ref<SpiceMiniDataHeader>", new ::hilti::rt::type_info::ValueReference(&type_info::__ti_Spice__SpiceMiniDataHeader_namex2aSpice__SpiceMiniDataHeaderx2b, ::hilti::rt::type_info::ValueReference::accessor<__hlt_spice::Spice::SpiceMiniDataHeader>()) };
    extern const ::hilti::rt::TypeInfo __ti_value_ref_VDAgentMessage__value_refx2anamex2aSpice__VDAgentMessagex2bx2b;
    const ::hilti::rt::TypeInfo __ti_value_ref_VDAgentMessage__value_refx2anamex2aSpice__VDAgentMessagex2bx2b = { {}, "value_ref<VDAgentMessage>", new ::hilti::rt::type_info::ValueReference(&type_info::__ti_Spice__VDAgentMessage_namex2aSpice__VDAgentMessagex2b, ::hilti::rt::type_info::ValueReference::accessor<__hlt_spice::Spice::VDAgentMessage>()) };
    const ::hilti::rt::TypeInfo __ti_Spice__SpiceMiniData_namex2aSpice__SpiceMiniDatax2b = { "Spice::SpiceMiniData", "Spice::SpiceMiniData", new ::hilti::rt::type_info::Struct(std::vector<::hilti::rt::type_info::struct_::Field>({::hilti::rt::type_info::struct_::Field{ "header", &type_info::__ti_value_ref_SpiceMiniDataHeader__value_refx2anamex2aSpice__SpiceMiniDataHeaderx2bx2b, offsetof(Spice::SpiceMiniData, header), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::ValueReference<__hlt_spice::Spice::SpiceMiniDataHeader>>() }, ::hilti::rt::type_info::struct_::Field{ "agent_data", &type_info::__ti_value_ref_VDAgentMessage__value_refx2anamex2aSpice__VDAgentMessagex2bx2b, offsetof(Spice::SpiceMiniData, agent_data), false, false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::ValueReference<__hlt_spice::Spice::VDAgentMessage>>() }, ::hilti::rt::type_info::struct_::Field{ "__error", &type_info::__ti_optional_spicy__RecoverableFailure__optionalx2anamex2ahilti__RecoverableFailurex2bx2b, offsetof(Spice::SpiceMiniData, __error), true, false }})) };
} }

#endif
