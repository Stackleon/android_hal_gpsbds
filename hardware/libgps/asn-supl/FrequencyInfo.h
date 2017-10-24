/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Components"
 * 	found in "../supl-common.asn"
 * 	`asn1c -fnative-types -gen-PER`
 */

#ifndef	_FrequencyInfo_H_
#define	_FrequencyInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FrequencyInfoFDD.h"
#include "FrequencyInfoTDD.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum fmodeSpecificInfo_PR {
	fmodeSpecificInfo_PR_NOTHING,	/* No components present */
	fmodeSpecificInfo_PR_fdd,
	fmodeSpecificInfo_PR_tdd,
	/* Extensions may appear below */
	
} fmodeSpecificInfo_PR;

/* FrequencyInfo */
typedef struct FrequencyInfo {
	struct fmodeSpecificInfo {
		fmodeSpecificInfo_PR present;
		union FrequencyInfo__fmodeSpecificInfo_u {
			FrequencyInfoFDD_t	 fdd;
			FrequencyInfoTDD_t	 tdd;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} fmodeSpecificInfo;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FrequencyInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FrequencyInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _FrequencyInfo_H_ */
#include <asn_internal.h>
