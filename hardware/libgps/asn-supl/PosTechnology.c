/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-START"
 * 	found in "../supl-start.asn"
 * 	`asn1c -fnative-types -gen-PER`
 */

#include "PosTechnology.h"

static asn_TYPE_member_t asn_MBR_PosTechnology_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PosTechnology, agpsSETassisted),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"agpsSETassisted"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosTechnology, agpsSETBased),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"agpsSETBased"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosTechnology, autonomousGPS),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"autonomousGPS"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosTechnology, aFLT),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"aFLT"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosTechnology, eCID),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"eCID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosTechnology, eOTD),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"eOTD"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PosTechnology, oTDOA),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"oTDOA"
		},
};
static const ber_tlv_tag_t asn_DEF_PosTechnology_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PosTechnology_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* agpsSETassisted */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* agpsSETBased */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* autonomousGPS */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* aFLT */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* eCID */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* eOTD */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* oTDOA */
};
static asn_SEQUENCE_specifics_t asn_SPC_PosTechnology_specs_1 = {
	sizeof(struct PosTechnology),
	offsetof(struct PosTechnology, _asn_ctx),
	asn_MAP_PosTechnology_tag2el_1,
	7,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	6,	/* Start extensions */
	8	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PosTechnology = {
	"PosTechnology",
	"PosTechnology",
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
	asn_DEF_PosTechnology_tags_1,
	sizeof(asn_DEF_PosTechnology_tags_1)
		/sizeof(asn_DEF_PosTechnology_tags_1[0]), /* 1 */
	asn_DEF_PosTechnology_tags_1,	/* Same as above */
	sizeof(asn_DEF_PosTechnology_tags_1)
		/sizeof(asn_DEF_PosTechnology_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PosTechnology_1,
	7,	/* Elements count */
	&asn_SPC_PosTechnology_specs_1	/* Additional specs */
};

