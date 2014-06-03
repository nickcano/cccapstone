#pragma once

#include "X86.hpp"

class CIntelDisasm64 :
	public CX86Arch
{
public:
	CIntelDisasm64(
		__in unsigned int mode = cs_mode::CS_MODE_64 + cs_mode::CS_MODE_LITTLE_ENDIAN,
		__in cs_opt_type optType = cs_opt_type::CS_OPT_DETAIL,
		__in cs_opt_value optValue = cs_opt_value::CS_OPT_ON,
		__in const char* comment = "X86 64 (Intel syntax)",
		__in cs_opt_type skipDataType = static_cast<cs_opt_type>(0),
		__in cs_opt_skipdata skipData = { nullptr, nullptr, nullptr }
		) : CX86Arch(mode, optType, optValue, comment, skipDataType, skipData)
	{
	}
};

class CIntelDisasm86 :
	public CX86Arch
{
public:
	CIntelDisasm86(
		__in unsigned int mode = cs_mode::CS_MODE_32 + cs_mode::CS_MODE_LITTLE_ENDIAN,
		__in cs_opt_type optType = cs_opt_type::CS_OPT_DETAIL,
		__in cs_opt_value optValue = cs_opt_value::CS_OPT_ON,
		__in const char* comment = "X86 32 (Intel syntax)",
		__in cs_opt_type skipDataType = static_cast<cs_opt_type>(0),
		__in cs_opt_skipdata skipData = { nullptr, nullptr, nullptr }
		) : CX86Arch(mode, optType, optValue, comment, skipDataType, skipData)
	{
	}
};

class CIntelDisasm16 :
	public CX86Arch
{
public:
	CIntelDisasm16(
		__in unsigned int mode = cs_mode::CS_MODE_16 + cs_mode::CS_MODE_LITTLE_ENDIAN,
		__in cs_opt_type optType = cs_opt_type::CS_OPT_DETAIL,
		__in cs_opt_value optValue = cs_opt_value::CS_OPT_ON,
		__in const char* comment = "X86 16 (Intel syntax)",
		__in cs_opt_type skipDataType = static_cast<cs_opt_type>(0),
		__in cs_opt_skipdata skipData = { nullptr, nullptr, nullptr }
		) : CX86Arch(mode, optType, optValue, comment, skipDataType, skipData)
	{
	}
};