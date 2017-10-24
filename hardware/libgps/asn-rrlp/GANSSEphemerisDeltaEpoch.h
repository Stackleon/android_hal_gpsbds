/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_GANSSEphemerisDeltaEpoch_H_
#define	_GANSSEphemerisDeltaEpoch_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GANSSDeltaElementList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GANSSDeltaEpochHeader;

/* GANSSEphemerisDeltaEpoch */
typedef struct GANSSEphemerisDeltaEpoch {
	struct GANSSDeltaEpochHeader	*ganssDeltaEpochHeader	/* OPTIONAL */;
	GANSSDeltaElementList_t	 ganssDeltaElementList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GANSSEphemerisDeltaEpoch_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GANSSEphemerisDeltaEpoch;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GANSSDeltaEpochHeader.h"

#endif	/* _GANSSEphemerisDeltaEpoch_H_ */
#include <asn_internal.h>
