/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_SeqOfGPSRefOrbit_H_
#define	_SeqOfGPSRefOrbit_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GPSReferenceOrbit;

/* SeqOfGPSRefOrbit */
typedef struct SeqOfGPSRefOrbit {
	A_SEQUENCE_OF(struct GPSReferenceOrbit) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SeqOfGPSRefOrbit_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SeqOfGPSRefOrbit;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GPSReferenceOrbit.h"

#endif	/* _SeqOfGPSRefOrbit_H_ */
#include <asn_internal.h>
