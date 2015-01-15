﻿// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'EsSrMgr.pas' rev: 28.00 (Windows)

#ifndef EssrmgrHPP
#define EssrmgrHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Essrmgr
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS ETpsStringResourceError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION ETpsStringResourceError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ETpsStringResourceError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ETpsStringResourceError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ETpsStringResourceError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ETpsStringResourceError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ETpsStringResourceError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ETpsStringResourceError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ETpsStringResourceError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ETpsStringResourceError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ETpsStringResourceError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ETpsStringResourceError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ETpsStringResourceError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ETpsStringResourceError(NativeUInt Ident, System::TVarRec const *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ETpsStringResourceError(void) { }
	
};

#pragma pack(pop)

typedef int TInt32;

struct TIndexRec;
typedef TIndexRec *PIndexRec;

struct DECLSPEC_DRECORD TIndexRec
{
public:
	int id;
	int ofs;
	int len;
};


typedef System::StaticArray<TIndexRec, 178956969> TIndexArray;

struct TResourceRec;
typedef TResourceRec *PResourceRec;

struct DECLSPEC_DRECORD TResourceRec
{
public:
	System::StaticArray<char, 4> id;
	int count;
	TIndexArray index;
};


class DELPHICLASS TEsStringResource;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TEsStringResource : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	System::UnicodeString operator[](int Ident) { return Strings[Ident]; }
	
private:
	bool FReportError;
	NativeUInt srHandle;
	TResourceRec *srP;
	void __fastcall srCloseResource(void);
	PIndexRec __fastcall srFindIdent(int Ident);
	void __fastcall srLock(void);
	void __fastcall srLoadResource(NativeUInt Instance, const System::UnicodeString ResourceName);
	void __fastcall srOpenResource(NativeUInt Instance, const System::UnicodeString ResourceName);
	void __fastcall srUnLock(void);
	
public:
	__fastcall virtual TEsStringResource(NativeUInt Instance, const System::UnicodeString ResourceName);
	__fastcall virtual ~TEsStringResource(void);
	void __fastcall ChangeResource(NativeUInt Instance, const System::UnicodeString ResourceName);
	char * __fastcall GetAsciiZ(int Ident, char * Buffer, int BufChars);
	System::UnicodeString __fastcall GetString(int Ident);
	__property System::UnicodeString Strings[int Ident] = {read=GetString/*, default*/};
	System::WideChar * __fastcall GetWideChar(int Ident, System::WideChar * Buffer, int BufChars);
	__property bool ReportError = {read=FReportError, write=FReportError, nodefault};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const bool DefReportError = false;
extern DELPHI_PACKAGE System::StaticArray<char, 4> ResID;
extern DELPHI_PACKAGE TEsStringResource* TpsResStrings;
}	/* namespace Essrmgr */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ESSRMGR)
using namespace Essrmgr;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// EssrmgrHPP
