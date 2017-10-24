/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_Almanac_ReducedKeplerianSet_H_
#define	_Almanac_ReducedKeplerianSet_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SVID.h"
#include <NativeInteger.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Almanac-ReducedKeplerianSet */
typedef struct Almanac_ReducedKeplerianSet {
	SVID_t	 svID;
	long	 redAlmDeltaA;
	long	 redAlmOmega0;
	long	 redAlmPhi0;
	BOOLEAN_t	 redAlmL1Health;
	BOOLEAN_t	 redAlmL2Health;
	BOOLEAN_t	 redAlmL5Health;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Almanac_ReducedKeplerianSet_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Almanac_ReducedKeplerianSet;

#ifdef __cplusplus
}
#endif

#endif	/* _Almanac_ReducedKeplerianSet_H_ */
#include <asn_internal.h>
