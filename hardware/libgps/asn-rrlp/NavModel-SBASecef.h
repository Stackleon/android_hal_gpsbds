/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_NavModel_SBASecef_H_
#define	_NavModel_SBASecef_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NavModel-SBASecef */
typedef struct NavModel_SBASecef {
	long	*sbasTo	/* OPTIONAL */;
	BIT_STRING_t	 sbasAccuracy;
	long	 sbasXg;
	long	 sbasYg;
	long	 sbasZg;
	long	 sbasXgDot;
	long	 sbasYgDot;
	long	 sbasZgDot;
	long	 sbasXgDotDot;
	long	 sbagYgDotDot;
	long	 sbasZgDotDot;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NavModel_SBASecef_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NavModel_SBASecef;

#ifdef __cplusplus
}
#endif

#endif	/* _NavModel_SBASecef_H_ */
#include <asn_internal.h>
