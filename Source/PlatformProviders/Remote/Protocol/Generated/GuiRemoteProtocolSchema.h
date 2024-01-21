/***********************************************************************
This file is generated by : Vczh GacUI Remote Protocol Generator
Licensed under https ://github.com/vczh-libraries/License
***********************************************************************/

#ifndef VCZH_PRESENTATION_GUIREMOTECONTROLLER_REMOTEPROTOCOLSCHEMA
#define VCZH_PRESENTATION_GUIREMOTECONTROLLER_REMOTEPROTOCOLSCHEMA

#include <VlppGlrParser.h>
#include "../../../../NativeWindow/GuiNativeWindow.h"

namespace vl::presentation::remoteprotocol
{
	struct FontConfig
	{
		::vl::presentation::FontProperties defaultFont;
		::vl::Ptr<::vl::collections::List<::vl::WString>> supportedFonts;
	};

	struct ScreenConfig
	{
		::vl::presentation::NativeRect bounds;
		::vl::presentation::NativeRect clientBounds;
		double scalingX;
		double scalingY;
	};

	struct WindowSizingConfig
	{
		::vl::presentation::NativeRect bounds;
		::vl::presentation::NativeRect clientBounds;
		::vl::presentation::INativeWindow::WindowSizeState sizeState;
		::vl::presentation::NativeMargin customFramePadding;
	};

	struct WindowShowing
	{
		bool activate;
		::vl::presentation::INativeWindow::WindowSizeState sizeState;
	};

	template<typename T> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson(const T&) = delete;
	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<bool>(const bool& value);
	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<::vl::vint>(const ::vl::vint& value);
	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<float>(const float& value);
	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<double>(const double& value);
	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<::vl::WString>(const ::vl::WString& value);
	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<::vl::presentation::INativeWindow::WindowSizeState>(const ::vl::presentation::INativeWindow::WindowSizeState& value);
	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<::vl::presentation::NativeCoordinate>(const ::vl::presentation::NativeCoordinate& value);
	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<::vl::presentation::NativePoint>(const ::vl::presentation::NativePoint& value);
	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<::vl::presentation::NativeSize>(const ::vl::presentation::NativeSize& value);
	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<::vl::presentation::NativeRect>(const ::vl::presentation::NativeRect& value);
	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<::vl::presentation::NativeMargin>(const ::vl::presentation::NativeMargin& value);
	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<::vl::presentation::FontProperties>(const ::vl::presentation::FontProperties& value);
	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<vl::presentation::remoteprotocol::FontConfig>(const vl::presentation::remoteprotocol::FontConfig& value);
	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<vl::presentation::remoteprotocol::ScreenConfig>(const vl::presentation::remoteprotocol::ScreenConfig& value);
	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<vl::presentation::remoteprotocol::WindowSizingConfig>(const vl::presentation::remoteprotocol::WindowSizingConfig& value);
	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<vl::presentation::remoteprotocol::WindowShowing>(const vl::presentation::remoteprotocol::WindowShowing& value);

	template<typename T> T ConvertJsonToCustomType(vl::Ptr<vl::glr::json::JsonNode>) = delete;
	template<> bool ConvertJsonToCustomType<bool>(vl::Ptr<vl::glr::json::JsonNode> node);
	template<> ::vl::vint ConvertJsonToCustomType<::vl::vint>(vl::Ptr<vl::glr::json::JsonNode> node);
	template<> float ConvertJsonToCustomType<float>(vl::Ptr<vl::glr::json::JsonNode> node);
	template<> double ConvertJsonToCustomType<double>(vl::Ptr<vl::glr::json::JsonNode> node);
	template<> ::vl::WString ConvertJsonToCustomType<::vl::WString>(vl::Ptr<vl::glr::json::JsonNode> node);
	template<> ::vl::presentation::INativeWindow::WindowSizeState ConvertJsonToCustomType<::vl::presentation::INativeWindow::WindowSizeState>(vl::Ptr<vl::glr::json::JsonNode> node);
	template<> ::vl::presentation::NativeCoordinate ConvertJsonToCustomType<::vl::presentation::NativeCoordinate>(vl::Ptr<vl::glr::json::JsonNode> node);
	template<> ::vl::presentation::NativePoint ConvertJsonToCustomType<::vl::presentation::NativePoint>(vl::Ptr<vl::glr::json::JsonNode> node);
	template<> ::vl::presentation::NativeSize ConvertJsonToCustomType<::vl::presentation::NativeSize>(vl::Ptr<vl::glr::json::JsonNode> node);
	template<> ::vl::presentation::NativeRect ConvertJsonToCustomType<::vl::presentation::NativeRect>(vl::Ptr<vl::glr::json::JsonNode> node);
	template<> ::vl::presentation::NativeMargin ConvertJsonToCustomType<::vl::presentation::NativeMargin>(vl::Ptr<vl::glr::json::JsonNode> node);
	template<> ::vl::presentation::FontProperties ConvertJsonToCustomType<::vl::presentation::FontProperties>(vl::Ptr<vl::glr::json::JsonNode> node);
	template<> vl::presentation::remoteprotocol::FontConfig ConvertJsonToCustomType<vl::presentation::remoteprotocol::FontConfig>(vl::Ptr<vl::glr::json::JsonNode> node);
	template<> vl::presentation::remoteprotocol::ScreenConfig ConvertJsonToCustomType<vl::presentation::remoteprotocol::ScreenConfig>(vl::Ptr<vl::glr::json::JsonNode> node);
	template<> vl::presentation::remoteprotocol::WindowSizingConfig ConvertJsonToCustomType<vl::presentation::remoteprotocol::WindowSizingConfig>(vl::Ptr<vl::glr::json::JsonNode> node);
	template<> vl::presentation::remoteprotocol::WindowShowing ConvertJsonToCustomType<vl::presentation::remoteprotocol::WindowShowing>(vl::Ptr<vl::glr::json::JsonNode> node);

#define GACUI_REMOTEPROTOCOL_MESSAGES(HANDLER)\
	HANDLER(ControllerGetFontConfig, void, vl::presentation::remoteprotocol::FontConfig, NOREQ, RES)\
	HANDLER(ControllerGetScreenConfig, void, vl::presentation::remoteprotocol::ScreenConfig, NOREQ, RES)\
	HANDLER(ControllerConnectionEstablished, void, void, NOREQ, NORES)\
	HANDLER(ControllerConnectionStopped, void, void, NOREQ, NORES)\
	HANDLER(WindowGetBounds, void, vl::presentation::remoteprotocol::WindowSizingConfig, NOREQ, RES)\
	HANDLER(WindowNotifySetTitle, ::vl::WString, void, REQ, NORES)\
	HANDLER(WindowNotifySetEnabled, bool, void, REQ, NORES)\
	HANDLER(WindowNotifySetTopMost, bool, void, REQ, NORES)\
	HANDLER(WindowNotifySetShowInTaskBar, bool, void, REQ, NORES)\
	HANDLER(WindowNotifySetCustomFrameMode, bool, void, REQ, NORES)\
	HANDLER(WindowNotifySetMaximizedBox, bool, void, REQ, NORES)\
	HANDLER(WindowNotifySetMinimizedBox, bool, void, REQ, NORES)\
	HANDLER(WindowNotifySetBorder, bool, void, REQ, NORES)\
	HANDLER(WindowNotifySetSizeBox, bool, void, REQ, NORES)\
	HANDLER(WindowNotifySetIconVisible, bool, void, REQ, NORES)\
	HANDLER(WindowNotifySetTitleBar, bool, void, REQ, NORES)\
	HANDLER(WindowSetBounds, ::vl::presentation::NativeRect, vl::presentation::remoteprotocol::WindowSizingConfig, REQ, RES)\
	HANDLER(WindowSetClientSize, ::vl::presentation::NativeSize, vl::presentation::remoteprotocol::WindowSizingConfig, REQ, RES)\
	HANDLER(WindowNotifyActivate, void, void, NOREQ, NORES)\
	HANDLER(WindowNotifyShow, vl::presentation::remoteprotocol::WindowShowing, void, REQ, NORES)\

#define GACUI_REMOTEPROTOCOL_EVENTS(HANDLER)\
	HANDLER(ControllerConnect, void, NOREQ)\
	HANDLER(ControllerDisconnect, void, NOREQ)\
	HANDLER(ControllerRequestExit, void, NOREQ)\
	HANDLER(ControllerForceExit, void, NOREQ)\
	HANDLER(ControllerScreenUpdated, vl::presentation::remoteprotocol::ScreenConfig, REQ)\
	HANDLER(WindowBoundsUpdated, vl::presentation::remoteprotocol::WindowSizingConfig, REQ)\
	HANDLER(WindowActivatedUpdated, bool, REQ)\

}

#endif
