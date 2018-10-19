/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/lionel/EURECOM/CODE/openair-cn.prose.clean/src/s1ap/messages/asn1/r15/s1ap-15.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/lionel/EURECOM/CODE/openair-cn.prose.clean/src/s1ap/messages/asn1/r15/GENERATED_S1AP`
 */

#ifndef	_S1AP_ManagementBasedMDTAllowed_H_
#define	_S1AP_ManagementBasedMDTAllowed_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_ManagementBasedMDTAllowed {
	S1AP_ManagementBasedMDTAllowed_allowed	= 0
	/*
	 * Enumeration is extensible
	 */
} e_S1AP_ManagementBasedMDTAllowed;

/* S1AP_ManagementBasedMDTAllowed */
typedef long	 S1AP_ManagementBasedMDTAllowed_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ManagementBasedMDTAllowed;
asn_struct_free_f S1AP_ManagementBasedMDTAllowed_free;
asn_struct_print_f S1AP_ManagementBasedMDTAllowed_print;
asn_constr_check_f S1AP_ManagementBasedMDTAllowed_constraint;
ber_type_decoder_f S1AP_ManagementBasedMDTAllowed_decode_ber;
der_type_encoder_f S1AP_ManagementBasedMDTAllowed_encode_der;
xer_type_decoder_f S1AP_ManagementBasedMDTAllowed_decode_xer;
xer_type_encoder_f S1AP_ManagementBasedMDTAllowed_encode_xer;
per_type_decoder_f S1AP_ManagementBasedMDTAllowed_decode_uper;
per_type_encoder_f S1AP_ManagementBasedMDTAllowed_encode_uper;
per_type_decoder_f S1AP_ManagementBasedMDTAllowed_decode_aper;
per_type_encoder_f S1AP_ManagementBasedMDTAllowed_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_ManagementBasedMDTAllowed_H_ */
#include <asn_internal.h>