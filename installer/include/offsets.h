#ifndef __OFFSETS_H
#define __OFFSETS_H

// 5.05
#define	Xfast_syscall_addr              0x1C0
                                        
// Names - Data                         
#define PRISON0_addr                    0x10986A0
#define ROOTVNODE_addr                  0x22C1A70
#define PMAP_STORE_addr                 0x22CB570
#define DT_HASH_SEGMENT_addr            0xB5EF30
                                        
// Functions                            
#define pmap_protect_addr               0x2E3090
#define pmap_protect_p_addr             0x2E30D4
                                        
// Patches                              
// debug settings                       
#define debug_settings_patch1           0x1CD0686
#define debug_settings_patch2           0x1CD06A9
#define debug_settings_patch3           0x1CD06AA
#define debug_settings_patch4           0x1CD06C8

// debug menu error
#define debug_menu_error_patch1         0x4F9048
#define debug_menu_error_patch2         0x4FA15C

// disable signature check
#define disable_signature_check_patch   0x6A2700

// enable debug RIFs
#define enable_debug_rifs_patch1        0x64B2B0
#define enable_debug_rifs_patch2        0x64B2D0

// enable VR
#define enable_vr_patch                 0x14A63F1

#endif
