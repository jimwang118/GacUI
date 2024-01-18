/***********************************************************************
This file is generated by: Vczh Parser Generator
From parser definition:Ast
Licensed under https://github.com/vczh-libraries/License
***********************************************************************/

#include "GuiRemoteProtocolAst.h"

namespace vl::presentation::remoteprotocol
{
/***********************************************************************
Visitor Pattern Implementation
***********************************************************************/

	void GuiRpPrimitiveType::Accept(GuiRpType::IVisitor* visitor)
	{
		visitor->Visit(this);
	}

	void GuiRpReferenceType::Accept(GuiRpType::IVisitor* visitor)
	{
		visitor->Visit(this);
	}

	void GuiRpArrayType::Accept(GuiRpType::IVisitor* visitor)
	{
		visitor->Visit(this);
	}

	void GuiRpStructDecl::Accept(GuiRpDeclaration::IVisitor* visitor)
	{
		visitor->Visit(this);
	}

	void GuiRpMessageDecl::Accept(GuiRpDeclaration::IVisitor* visitor)
	{
		visitor->Visit(this);
	}

	void GuiRpEventDecl::Accept(GuiRpDeclaration::IVisitor* visitor)
	{
		visitor->Visit(this);
	}
}
namespace vl::reflection::description
{
#ifndef VCZH_DEBUG_NO_REFLECTION

	IMPL_TYPE_INFO_RENAME(vl::presentation::remoteprotocol::GuiRpType, presentation::remoteprotocol::GuiRpType)
	IMPL_TYPE_INFO_RENAME(vl::presentation::remoteprotocol::GuiRpType::IVisitor, presentation::remoteprotocol::GuiRpType::IVisitor)
	IMPL_TYPE_INFO_RENAME(vl::presentation::remoteprotocol::GuiRpPrimitiveTypes, presentation::remoteprotocol::GuiRpPrimitiveTypes)
	IMPL_TYPE_INFO_RENAME(vl::presentation::remoteprotocol::GuiRpPrimitiveType, presentation::remoteprotocol::GuiRpPrimitiveType)
	IMPL_TYPE_INFO_RENAME(vl::presentation::remoteprotocol::GuiRpReferenceType, presentation::remoteprotocol::GuiRpReferenceType)
	IMPL_TYPE_INFO_RENAME(vl::presentation::remoteprotocol::GuiRpArrayType, presentation::remoteprotocol::GuiRpArrayType)
	IMPL_TYPE_INFO_RENAME(vl::presentation::remoteprotocol::GuiRpAttribute, presentation::remoteprotocol::GuiRpAttribute)
	IMPL_TYPE_INFO_RENAME(vl::presentation::remoteprotocol::GuiRpDeclaration, presentation::remoteprotocol::GuiRpDeclaration)
	IMPL_TYPE_INFO_RENAME(vl::presentation::remoteprotocol::GuiRpDeclaration::IVisitor, presentation::remoteprotocol::GuiRpDeclaration::IVisitor)
	IMPL_TYPE_INFO_RENAME(vl::presentation::remoteprotocol::GuiRpStructMember, presentation::remoteprotocol::GuiRpStructMember)
	IMPL_TYPE_INFO_RENAME(vl::presentation::remoteprotocol::GuiRpStructDecl, presentation::remoteprotocol::GuiRpStructDecl)
	IMPL_TYPE_INFO_RENAME(vl::presentation::remoteprotocol::GuiRpMessageRequest, presentation::remoteprotocol::GuiRpMessageRequest)
	IMPL_TYPE_INFO_RENAME(vl::presentation::remoteprotocol::GuiRpMessageResponse, presentation::remoteprotocol::GuiRpMessageResponse)
	IMPL_TYPE_INFO_RENAME(vl::presentation::remoteprotocol::GuiRpMessageDecl, presentation::remoteprotocol::GuiRpMessageDecl)
	IMPL_TYPE_INFO_RENAME(vl::presentation::remoteprotocol::GuiRpEventRequest, presentation::remoteprotocol::GuiRpEventRequest)
	IMPL_TYPE_INFO_RENAME(vl::presentation::remoteprotocol::GuiRpEventDecl, presentation::remoteprotocol::GuiRpEventDecl)
	IMPL_TYPE_INFO_RENAME(vl::presentation::remoteprotocol::GuiRpSchema, presentation::remoteprotocol::GuiRpSchema)

#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA

	BEGIN_CLASS_MEMBER(vl::presentation::remoteprotocol::GuiRpType)
		CLASS_MEMBER_BASE(vl::glr::ParsingAstBase)

	END_CLASS_MEMBER(vl::presentation::remoteprotocol::GuiRpType)

	BEGIN_ENUM_ITEM(vl::presentation::remoteprotocol::GuiRpPrimitiveTypes)
		ENUM_ITEM_NAMESPACE(vl::presentation::remoteprotocol::GuiRpPrimitiveTypes)
		ENUM_NAMESPACE_ITEM(Boolean)
		ENUM_NAMESPACE_ITEM(Integer)
		ENUM_NAMESPACE_ITEM(Float)
		ENUM_NAMESPACE_ITEM(Double)
		ENUM_NAMESPACE_ITEM(String)
	END_ENUM_ITEM(vl::presentation::remoteprotocol::GuiRpPrimitiveTypes)

	BEGIN_CLASS_MEMBER(vl::presentation::remoteprotocol::GuiRpPrimitiveType)
		CLASS_MEMBER_BASE(vl::presentation::remoteprotocol::GuiRpType)

		CLASS_MEMBER_CONSTRUCTOR(vl::Ptr<vl::presentation::remoteprotocol::GuiRpPrimitiveType>(), NO_PARAMETER)

		CLASS_MEMBER_FIELD(type)
	END_CLASS_MEMBER(vl::presentation::remoteprotocol::GuiRpPrimitiveType)

	BEGIN_CLASS_MEMBER(vl::presentation::remoteprotocol::GuiRpReferenceType)
		CLASS_MEMBER_BASE(vl::presentation::remoteprotocol::GuiRpType)

		CLASS_MEMBER_CONSTRUCTOR(vl::Ptr<vl::presentation::remoteprotocol::GuiRpReferenceType>(), NO_PARAMETER)

		CLASS_MEMBER_FIELD(name)
	END_CLASS_MEMBER(vl::presentation::remoteprotocol::GuiRpReferenceType)

	BEGIN_CLASS_MEMBER(vl::presentation::remoteprotocol::GuiRpArrayType)
		CLASS_MEMBER_BASE(vl::presentation::remoteprotocol::GuiRpType)

		CLASS_MEMBER_CONSTRUCTOR(vl::Ptr<vl::presentation::remoteprotocol::GuiRpArrayType>(), NO_PARAMETER)

		CLASS_MEMBER_FIELD(element)
	END_CLASS_MEMBER(vl::presentation::remoteprotocol::GuiRpArrayType)

	BEGIN_CLASS_MEMBER(vl::presentation::remoteprotocol::GuiRpAttribute)
		CLASS_MEMBER_BASE(vl::glr::ParsingAstBase)

		CLASS_MEMBER_CONSTRUCTOR(vl::Ptr<vl::presentation::remoteprotocol::GuiRpAttribute>(), NO_PARAMETER)

		CLASS_MEMBER_FIELD(name)
		CLASS_MEMBER_FIELD(cppType)
	END_CLASS_MEMBER(vl::presentation::remoteprotocol::GuiRpAttribute)

	BEGIN_CLASS_MEMBER(vl::presentation::remoteprotocol::GuiRpDeclaration)
		CLASS_MEMBER_BASE(vl::glr::ParsingAstBase)

		CLASS_MEMBER_FIELD(attributes)
		CLASS_MEMBER_FIELD(name)
	END_CLASS_MEMBER(vl::presentation::remoteprotocol::GuiRpDeclaration)

	BEGIN_CLASS_MEMBER(vl::presentation::remoteprotocol::GuiRpStructMember)
		CLASS_MEMBER_BASE(vl::glr::ParsingAstBase)

		CLASS_MEMBER_CONSTRUCTOR(vl::Ptr<vl::presentation::remoteprotocol::GuiRpStructMember>(), NO_PARAMETER)

		CLASS_MEMBER_FIELD(name)
		CLASS_MEMBER_FIELD(type)
	END_CLASS_MEMBER(vl::presentation::remoteprotocol::GuiRpStructMember)

	BEGIN_CLASS_MEMBER(vl::presentation::remoteprotocol::GuiRpStructDecl)
		CLASS_MEMBER_BASE(vl::presentation::remoteprotocol::GuiRpDeclaration)

		CLASS_MEMBER_CONSTRUCTOR(vl::Ptr<vl::presentation::remoteprotocol::GuiRpStructDecl>(), NO_PARAMETER)

		CLASS_MEMBER_FIELD(members)
	END_CLASS_MEMBER(vl::presentation::remoteprotocol::GuiRpStructDecl)

	BEGIN_CLASS_MEMBER(vl::presentation::remoteprotocol::GuiRpMessageRequest)
		CLASS_MEMBER_BASE(vl::glr::ParsingAstBase)

		CLASS_MEMBER_CONSTRUCTOR(vl::Ptr<vl::presentation::remoteprotocol::GuiRpMessageRequest>(), NO_PARAMETER)

		CLASS_MEMBER_FIELD(type)
	END_CLASS_MEMBER(vl::presentation::remoteprotocol::GuiRpMessageRequest)

	BEGIN_CLASS_MEMBER(vl::presentation::remoteprotocol::GuiRpMessageResponse)
		CLASS_MEMBER_BASE(vl::glr::ParsingAstBase)

		CLASS_MEMBER_CONSTRUCTOR(vl::Ptr<vl::presentation::remoteprotocol::GuiRpMessageResponse>(), NO_PARAMETER)

		CLASS_MEMBER_FIELD(type)
	END_CLASS_MEMBER(vl::presentation::remoteprotocol::GuiRpMessageResponse)

	BEGIN_CLASS_MEMBER(vl::presentation::remoteprotocol::GuiRpMessageDecl)
		CLASS_MEMBER_BASE(vl::presentation::remoteprotocol::GuiRpDeclaration)

		CLASS_MEMBER_CONSTRUCTOR(vl::Ptr<vl::presentation::remoteprotocol::GuiRpMessageDecl>(), NO_PARAMETER)

		CLASS_MEMBER_FIELD(request)
		CLASS_MEMBER_FIELD(response)
	END_CLASS_MEMBER(vl::presentation::remoteprotocol::GuiRpMessageDecl)

	BEGIN_CLASS_MEMBER(vl::presentation::remoteprotocol::GuiRpEventRequest)
		CLASS_MEMBER_BASE(vl::glr::ParsingAstBase)

		CLASS_MEMBER_CONSTRUCTOR(vl::Ptr<vl::presentation::remoteprotocol::GuiRpEventRequest>(), NO_PARAMETER)

		CLASS_MEMBER_FIELD(type)
	END_CLASS_MEMBER(vl::presentation::remoteprotocol::GuiRpEventRequest)

	BEGIN_CLASS_MEMBER(vl::presentation::remoteprotocol::GuiRpEventDecl)
		CLASS_MEMBER_BASE(vl::presentation::remoteprotocol::GuiRpDeclaration)

		CLASS_MEMBER_CONSTRUCTOR(vl::Ptr<vl::presentation::remoteprotocol::GuiRpEventDecl>(), NO_PARAMETER)

		CLASS_MEMBER_FIELD(request)
	END_CLASS_MEMBER(vl::presentation::remoteprotocol::GuiRpEventDecl)

	BEGIN_CLASS_MEMBER(vl::presentation::remoteprotocol::GuiRpSchema)
		CLASS_MEMBER_BASE(vl::glr::ParsingAstBase)

		CLASS_MEMBER_CONSTRUCTOR(vl::Ptr<vl::presentation::remoteprotocol::GuiRpSchema>(), NO_PARAMETER)

		CLASS_MEMBER_FIELD(declarations)
	END_CLASS_MEMBER(vl::presentation::remoteprotocol::GuiRpSchema)

	BEGIN_INTERFACE_MEMBER(vl::presentation::remoteprotocol::GuiRpType::IVisitor)
		CLASS_MEMBER_METHOD_OVERLOAD(Visit, {L"node"}, void(vl::presentation::remoteprotocol::GuiRpType::IVisitor::*)(vl::presentation::remoteprotocol::GuiRpPrimitiveType* node))
		CLASS_MEMBER_METHOD_OVERLOAD(Visit, {L"node"}, void(vl::presentation::remoteprotocol::GuiRpType::IVisitor::*)(vl::presentation::remoteprotocol::GuiRpReferenceType* node))
		CLASS_MEMBER_METHOD_OVERLOAD(Visit, {L"node"}, void(vl::presentation::remoteprotocol::GuiRpType::IVisitor::*)(vl::presentation::remoteprotocol::GuiRpArrayType* node))
	END_INTERFACE_MEMBER(vl::presentation::remoteprotocol::GuiRpType)

	BEGIN_INTERFACE_MEMBER(vl::presentation::remoteprotocol::GuiRpDeclaration::IVisitor)
		CLASS_MEMBER_METHOD_OVERLOAD(Visit, {L"node"}, void(vl::presentation::remoteprotocol::GuiRpDeclaration::IVisitor::*)(vl::presentation::remoteprotocol::GuiRpStructDecl* node))
		CLASS_MEMBER_METHOD_OVERLOAD(Visit, {L"node"}, void(vl::presentation::remoteprotocol::GuiRpDeclaration::IVisitor::*)(vl::presentation::remoteprotocol::GuiRpMessageDecl* node))
		CLASS_MEMBER_METHOD_OVERLOAD(Visit, {L"node"}, void(vl::presentation::remoteprotocol::GuiRpDeclaration::IVisitor::*)(vl::presentation::remoteprotocol::GuiRpEventDecl* node))
	END_INTERFACE_MEMBER(vl::presentation::remoteprotocol::GuiRpDeclaration)

#endif

#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
	class GuiRemoteProtocolAstTypeLoader : public vl::Object, public ITypeLoader
	{
	public:
		void Load(ITypeManager* manager)
		{
			ADD_TYPE_INFO(vl::presentation::remoteprotocol::GuiRpType)
			ADD_TYPE_INFO(vl::presentation::remoteprotocol::GuiRpType::IVisitor)
			ADD_TYPE_INFO(vl::presentation::remoteprotocol::GuiRpPrimitiveTypes)
			ADD_TYPE_INFO(vl::presentation::remoteprotocol::GuiRpPrimitiveType)
			ADD_TYPE_INFO(vl::presentation::remoteprotocol::GuiRpReferenceType)
			ADD_TYPE_INFO(vl::presentation::remoteprotocol::GuiRpArrayType)
			ADD_TYPE_INFO(vl::presentation::remoteprotocol::GuiRpAttribute)
			ADD_TYPE_INFO(vl::presentation::remoteprotocol::GuiRpDeclaration)
			ADD_TYPE_INFO(vl::presentation::remoteprotocol::GuiRpDeclaration::IVisitor)
			ADD_TYPE_INFO(vl::presentation::remoteprotocol::GuiRpStructMember)
			ADD_TYPE_INFO(vl::presentation::remoteprotocol::GuiRpStructDecl)
			ADD_TYPE_INFO(vl::presentation::remoteprotocol::GuiRpMessageRequest)
			ADD_TYPE_INFO(vl::presentation::remoteprotocol::GuiRpMessageResponse)
			ADD_TYPE_INFO(vl::presentation::remoteprotocol::GuiRpMessageDecl)
			ADD_TYPE_INFO(vl::presentation::remoteprotocol::GuiRpEventRequest)
			ADD_TYPE_INFO(vl::presentation::remoteprotocol::GuiRpEventDecl)
			ADD_TYPE_INFO(vl::presentation::remoteprotocol::GuiRpSchema)
		}

		void Unload(ITypeManager* manager)
		{
		}
	};
#endif
#endif

	bool GuiRemoteProtocolAstLoadTypes()
	{
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		if (auto manager = GetGlobalTypeManager())
		{
			auto loader = Ptr(new GuiRemoteProtocolAstTypeLoader);
			return manager->AddTypeLoader(loader);
		}
#endif
		return false;
	}
}
