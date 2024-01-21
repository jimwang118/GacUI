/***********************************************************************
This file is generated by : Vczh GacUI Remote Protocol Generator
Licensed under https ://github.com/vczh-libraries/License
***********************************************************************/

#include "GuiRemoteProtocolSchema.h"

namespace vl::presentation::remoteprotocol
{
	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<bool>(const bool& value)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<::vl::vint>(const ::vl::vint& value)
	{
		auto node = Ptr(new glr::json::JsonNumber);
		reflection::description::TypedValueSerializerProvider<::vl::vint>::Serialize(value, node->content.value);
		return node;
	}

	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<float>(const float& value)
	{
		auto node = Ptr(new glr::json::JsonNumber);
		reflection::description::TypedValueSerializerProvider<float>::Serialize(value, node->content.value);
		return node;
	}

	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<double>(const double& value)
	{
		auto node = Ptr(new glr::json::JsonNumber);
		reflection::description::TypedValueSerializerProvider<double>::Serialize(value, node->content.value);
		return node;
	}

	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<::vl::WString>(const ::vl::WString& value)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<::vl::presentation::INativeWindow::WindowSizeState>(const ::vl::presentation::INativeWindow::WindowSizeState& value)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<::vl::presentation::NativeCoordinate>(const ::vl::presentation::NativeCoordinate& value)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<::vl::presentation::NativePoint>(const ::vl::presentation::NativePoint& value)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<::vl::presentation::NativeSize>(const ::vl::presentation::NativeSize& value)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<::vl::presentation::NativeRect>(const ::vl::presentation::NativeRect& value)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<::vl::presentation::NativeMargin>(const ::vl::presentation::NativeMargin& value)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<::vl::presentation::FontProperties>(const ::vl::presentation::FontProperties& value)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<vl::presentation::remoteprotocol::FontConfig>(const vl::presentation::remoteprotocol::FontConfig& value)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<vl::presentation::remoteprotocol::ScreenConfig>(const vl::presentation::remoteprotocol::ScreenConfig& value)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<vl::presentation::remoteprotocol::WindowSizingConfig>(const vl::presentation::remoteprotocol::WindowSizingConfig& value)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<vl::presentation::remoteprotocol::WindowShowing>(const vl::presentation::remoteprotocol::WindowShowing& value)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> bool ConvertJsonToCustomType<bool>(vl::Ptr<vl::glr::json::JsonNode> node)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> vint ConvertJsonToCustomType<vint>(vl::Ptr<vl::glr::json::JsonNode> node)
	{
	#define ERROR_MESSAGE_PREFIX L"vl::presentation::remoteprotocol::ConvertJsonToCustomType<vint>(Ptr<JsonNode>)#"
		auto jsonNode = node.Cast<glr::json::JsonNumber>();
		CHECK_ERROR(jsonNode, ERROR_MESSAGE_PREFIX L"Json node does not match the expected type.");
		vint value;
		CHECK_ERROR(reflection::description::TypedValueSerializerProvider<vint>::Deserialize(jsonNode->content.value, value), ERROR_MESSAGE_PREFIX L"Json node does not match the expected type.");
		return value;
	#undef ERROR_MESSAGE_PREFIX
	}

	template<> float ConvertJsonToCustomType<float>(vl::Ptr<vl::glr::json::JsonNode> node)
	{
	#define ERROR_MESSAGE_PREFIX L"vl::presentation::remoteprotocol::ConvertJsonToCustomType<float>(Ptr<JsonNode>)#"
		auto jsonNode = node.Cast<glr::json::JsonNumber>();
		CHECK_ERROR(jsonNode, ERROR_MESSAGE_PREFIX L"Json node does not match the expected type.");
		float value;
		CHECK_ERROR(reflection::description::TypedValueSerializerProvider<float>::Deserialize(jsonNode->content.value, value), ERROR_MESSAGE_PREFIX L"Json node does not match the expected type.");
		return value;
	#undef ERROR_MESSAGE_PREFIX
	}

	template<> double ConvertJsonToCustomType<double>(vl::Ptr<vl::glr::json::JsonNode> node)
	{
	#define ERROR_MESSAGE_PREFIX L"vl::presentation::remoteprotocol::ConvertJsonToCustomType<double>(Ptr<JsonNode>)#"
		auto jsonNode = node.Cast<glr::json::JsonNumber>();
		CHECK_ERROR(jsonNode, ERROR_MESSAGE_PREFIX L"Json node does not match the expected type.");
		double value;
		CHECK_ERROR(reflection::description::TypedValueSerializerProvider<double>::Deserialize(jsonNode->content.value, value), ERROR_MESSAGE_PREFIX L"Json node does not match the expected type.");
		return value;
	#undef ERROR_MESSAGE_PREFIX
	}

	template<> ::vl::WString ConvertJsonToCustomType<::vl::WString>(vl::Ptr<vl::glr::json::JsonNode> node)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> ::vl::presentation::INativeWindow::WindowSizeState ConvertJsonToCustomType<::vl::presentation::INativeWindow::WindowSizeState>(vl::Ptr<vl::glr::json::JsonNode> node)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> ::vl::presentation::NativeCoordinate ConvertJsonToCustomType<::vl::presentation::NativeCoordinate>(vl::Ptr<vl::glr::json::JsonNode> node)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> ::vl::presentation::NativePoint ConvertJsonToCustomType<::vl::presentation::NativePoint>(vl::Ptr<vl::glr::json::JsonNode> node)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> ::vl::presentation::NativeSize ConvertJsonToCustomType<::vl::presentation::NativeSize>(vl::Ptr<vl::glr::json::JsonNode> node)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> ::vl::presentation::NativeRect ConvertJsonToCustomType<::vl::presentation::NativeRect>(vl::Ptr<vl::glr::json::JsonNode> node)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> ::vl::presentation::NativeMargin ConvertJsonToCustomType<::vl::presentation::NativeMargin>(vl::Ptr<vl::glr::json::JsonNode> node)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> ::vl::presentation::FontProperties ConvertJsonToCustomType<::vl::presentation::FontProperties>(vl::Ptr<vl::glr::json::JsonNode> node)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> vl::presentation::remoteprotocol::FontConfig ConvertJsonToCustomType<vl::presentation::remoteprotocol::FontConfig>(vl::Ptr<vl::glr::json::JsonNode> node)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> vl::presentation::remoteprotocol::ScreenConfig ConvertJsonToCustomType<vl::presentation::remoteprotocol::ScreenConfig>(vl::Ptr<vl::glr::json::JsonNode> node)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> vl::presentation::remoteprotocol::WindowSizingConfig ConvertJsonToCustomType<vl::presentation::remoteprotocol::WindowSizingConfig>(vl::Ptr<vl::glr::json::JsonNode> node)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> vl::presentation::remoteprotocol::WindowShowing ConvertJsonToCustomType<vl::presentation::remoteprotocol::WindowShowing>(vl::Ptr<vl::glr::json::JsonNode> node)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

}
