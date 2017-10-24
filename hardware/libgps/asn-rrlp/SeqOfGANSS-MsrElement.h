/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_SeqOfGANSS_MsrElement_H_
#define	_SeqOfGANSS_MsrElement_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GANSS_MsrElement;

/* SeqOfGANSS-MsrElement */
typedef struct SeqOfGANSS_MsrElement {
	A_SEQUENCE_OF(struct GANSS_MsrElement) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SeqOfGANSS_MsrElement_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SeqOfGANSS_MsrElement;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GANSS-MsrElement.h"

#endif	/* _SeqOfGANSS_MsrElement_H_ */
#include <asn_internal.h>
