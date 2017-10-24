/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#include "Add-GPS-ControlHeader.h"

static asn_TYPE_member_t asn_MBR_Add_GPS_ControlHeader_1[] = {
	{ ATF_POINTER, 7, offsetof(struct Add_GPS_ControlHeader, gpsEphemerisExtension),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GPSEphemerisExtension,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gpsEphemerisExtension"
		},
	{ ATF_POINTER, 6, offsetof(struct Add_GPS_ControlHeader, gpsEphemerisExtensionCheck),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GPSEphemerisExtensionCheck,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gpsEphemerisExtensionCheck"
		},
	{ ATF_POINTER, 5, offsetof(struct Add_GPS_ControlHeader, dgpsCorrectionsValidityPeriod),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DGPSCorrectionsValidityPeriod,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dgpsCorrectionsValidityPeriod"
		},
	{ ATF_POINTER, 4, offsetof(struct Add_GPS_ControlHeader, gpsReferenceTime_R10_Ext),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GPSReferenceTime_R10_Ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gpsReferenceTime-R10-Ext"
		},
	{ ATF_POINTER, 3, offsetof(struct Add_GPS_ControlHeader, gpsAcquisAssist_R10_Ext),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GPSAcquisAssist_R10_Ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gpsAcquisAssist-R10-Ext"
		},
	{ ATF_POINTER, 2, offsetof(struct Add_GPS_ControlHeader, gpsAlmanac_R10_Ext),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GPSAlmanac_R10_Ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gpsAlmanac-R10-Ext"
		},
	{ ATF_POINTER, 1, offsetof(struct Add_GPS_ControlHeader, gpsAcquisAssist_R12_Ext),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GPSAcquisAssist_R12_Ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gpsAcquisAssist-R12-Ext"
		},
};
static const int asn_MAP_Add_GPS_ControlHeader_oms_1[] = { 0, 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_Add_GPS_ControlHeader_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Add_GPS_ControlHeader_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gpsEphemerisExtension */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* gpsEphemerisExtensionCheck */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dgpsCorrectionsValidityPeriod */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* gpsReferenceTime-R10-Ext */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* gpsAcquisAssist-R10-Ext */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* gpsAlmanac-R10-Ext */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* gpsAcquisAssist-R12-Ext */
};
static asn_SEQUENCE_specifics_t asn_SPC_Add_GPS_ControlHeader_specs_1 = {
	sizeof(struct Add_GPS_ControlHeader),
	offsetof(struct Add_GPS_ControlHeader, _asn_ctx),
	asn_MAP_Add_GPS_ControlHeader_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_Add_GPS_ControlHeader_oms_1,	/* Optional members */
	2, 5,	/* Root/Additions */
	1,	/* Start extensions */
	8	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Add_GPS_ControlHeader = {
	"Add-GPS-ControlHeader",
	"Add-GPS-ControlHeader",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Add_GPS_ControlHeader_tags_1,
	sizeof(asn_DEF_Add_GPS_ControlHeader_tags_1)
		/sizeof(asn_DEF_Add_GPS_ControlHeader_tags_1[0]), /* 1 */
	asn_DEF_Add_GPS_ControlHeader_tags_1,	/* Same as above */
	sizeof(asn_DEF_Add_GPS_ControlHeader_tags_1)
		/sizeof(asn_DEF_Add_GPS_ControlHeader_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Add_GPS_ControlHeader_1,
	7,	/* Elements count */
	&asn_SPC_Add_GPS_ControlHeader_specs_1	/* Additional specs */
};

