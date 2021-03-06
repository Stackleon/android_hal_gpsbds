/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-TRIGGERED-START"
 * 	found in "../supl-triggered-start.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#include "GeographicTargetArea.h"

static asn_per_constraints_t asn_PER_type_GeographicTargetArea_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_GeographicTargetArea_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GeographicTargetArea, choice.circularArea),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CircularArea,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"circularArea"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GeographicTargetArea, choice.ellipticalArea),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EllipticalArea,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ellipticalArea"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GeographicTargetArea, choice.polygonArea),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PolygonArea,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"polygonArea"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_GeographicTargetArea_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* circularArea */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ellipticalArea */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* polygonArea */
};
static asn_CHOICE_specifics_t asn_SPC_GeographicTargetArea_specs_1 = {
	sizeof(struct GeographicTargetArea),
	offsetof(struct GeographicTargetArea, _asn_ctx),
	offsetof(struct GeographicTargetArea, present),
	sizeof(((struct GeographicTargetArea *)0)->present),
	asn_MAP_GeographicTargetArea_tag2el_1,
	3,	/* Count of tags in the map */
	0,
	3	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_GeographicTargetArea = {
	"GeographicTargetArea",
	"GeographicTargetArea",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_GeographicTargetArea_constr_1,
	asn_MBR_GeographicTargetArea_1,
	3,	/* Elements count */
	&asn_SPC_GeographicTargetArea_specs_1	/* Additional specs */
};

