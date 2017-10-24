/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-START"
 * 	found in "../supl-start.asn"
 * 	`asn1c -fnative-types -gen-PER`
 */

#ifndef	_PosTechnology_H_
#define	_PosTechnology_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PosTechnology */
typedef struct PosTechnology {
	BOOLEAN_t	 agpsSETassisted;
	BOOLEAN_t	 agpsSETBased;
	BOOLEAN_t	 autonomousGPS;
	BOOLEAN_t	 aFLT;
	BOOLEAN_t	 eCID;
	BOOLEAN_t	 eOTD;
	BOOLEAN_t	 oTDOA;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PosTechnology_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PosTechnology;

#ifdef __cplusplus
}
#endif

#endif	/* _PosTechnology_H_ */
#include <asn_internal.h>
