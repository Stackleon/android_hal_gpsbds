/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Components"
 * 	found in "../supl-common.asn"
 * 	`asn1c -fnative-types -gen-PER`
 */

#include "Velocity.h"

static asn_per_constraints_t asn_PER_type_Velocity_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_Velocity_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Velocity, choice.horvel),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Horvel,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"horvel"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Velocity, choice.horandvervel),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Horandvervel,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"horandvervel"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Velocity, choice.horveluncert),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Horveluncert,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"horveluncert"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Velocity, choice.horandveruncert),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Horandveruncert,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"horandveruncert"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_Velocity_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* horvel */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* horandvervel */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* horveluncert */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* horandveruncert */
};
static asn_CHOICE_specifics_t asn_SPC_Velocity_specs_1 = {
	sizeof(struct Velocity),
	offsetof(struct Velocity, _asn_ctx),
	offsetof(struct Velocity, present),
	sizeof(((struct Velocity *)0)->present),
	asn_MAP_Velocity_tag2el_1,
	4,	/* Count of tags in the map */
	0,
	4	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_Velocity = {
	"Velocity",
	"Velocity",
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
	&asn_PER_type_Velocity_constr_1,
	asn_MBR_Velocity_1,
	4,	/* Elements count */
	&asn_SPC_Velocity_specs_1	/* Additional specs */
};

