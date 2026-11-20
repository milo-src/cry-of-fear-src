
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000abf0 <.text+0x9bf0>:
1000abf0:	55                   	push   ebp
1000abf1:	8b ec                	mov    ebp,esp
1000abf3:	51                   	push   ecx
1000abf4:	56                   	push   esi
1000abf5:	8b f1                	mov    esi,ecx
1000abf7:	8b 86 24 02 00 00    	mov    eax,DWORD PTR [esi+0x224]
1000abfd:	83 f8 08             	cmp    eax,0x8
1000ac00:	0f 87 9c 03 00 00    	ja     0x1000afa2
1000ac06:	ff 24 85 bc af 00 10 	jmp    DWORD PTR [eax*4+0x1000afbc]
1000ac0d:	8b 06                	mov    eax,DWORD PTR [esi]
1000ac0f:	6a 26                	push   0x26
1000ac11:	8b 80 8c 01 00 00    	mov    eax,DWORD PTR [eax+0x18c]
1000ac17:	ff d0                	call   eax
1000ac19:	5e                   	pop    esi
1000ac1a:	8b e5                	mov    esp,ebp
1000ac1c:	5d                   	pop    ebp
1000ac1d:	c3                   	ret
1000ac1e:	68 3c 22 1a 10       	push   0x101a223c
1000ac23:	e9 7f 03 00 00       	jmp    0x1000afa7
1000ac28:	8b 8e 58 03 00 00    	mov    ecx,DWORD PTR [esi+0x358]
1000ac2e:	85 c9                	test   ecx,ecx
1000ac30:	74 6b                	je     0x1000ac9d
1000ac32:	8b 15 88 31 22 10    	mov    edx,DWORD PTR ds:0x10223188
1000ac38:	f3 0f 10 8e 64 03 00 	movss  xmm1,DWORD PTR [esi+0x364]
1000ac3f:	00 
1000ac40:	f3 0f 10 02          	movss  xmm0,DWORD PTR [edx]
1000ac44:	0f 2f c1             	comiss xmm0,xmm1
1000ac47:	76 54                	jbe    0x1000ac9d
1000ac49:	0f 2e 0d d0 13 1a 10 	ucomiss xmm1,DWORD PTR ds:0x101a13d0
1000ac50:	9f                   	lahf
1000ac51:	f6 c4 44             	test   ah,0x44
1000ac54:	7b 47                	jnp    0x1000ac9d
1000ac56:	8b 82 98 00 00 00    	mov    eax,DWORD PTR [edx+0x98]
1000ac5c:	03 c1                	add    eax,ecx
1000ac5e:	50                   	push   eax
1000ac5f:	6a 00                	push   0x0
1000ac61:	e8 2a d9 10 00       	call   0x10118590
1000ac66:	83 c4 08             	add    esp,0x8
1000ac69:	85 c0                	test   eax,eax
1000ac6b:	74 26                	je     0x1000ac93
1000ac6d:	8b c8                	mov    ecx,eax
1000ac6f:	e8 cc 08 10 00       	call   0x1010b540
1000ac74:	50                   	push   eax
1000ac75:	8d 8e 8c 01 00 00    	lea    ecx,[esi+0x18c]
1000ac7b:	e8 c0 ca 00 00       	call   0x10017740
1000ac80:	8b 06                	mov    eax,DWORD PTR [esi]
1000ac82:	8b ce                	mov    ecx,esi
1000ac84:	6a 2a                	push   0x2a
1000ac86:	8b 80 8c 01 00 00    	mov    eax,DWORD PTR [eax+0x18c]
1000ac8c:	ff d0                	call   eax
1000ac8e:	5e                   	pop    esi
1000ac8f:	8b e5                	mov    esp,ebp
1000ac91:	5d                   	pop    ebp
1000ac92:	c3                   	ret
1000ac93:	c7 86 64 03 00 00 00 	mov    DWORD PTR [esi+0x364],0xbf800000
1000ac9a:	00 80 bf 
1000ac9d:	f7 86 80 01 00 00 00 	test   DWORD PTR [esi+0x180],0x20000
1000aca4:	00 02 00 
1000aca7:	8b ce                	mov    ecx,esi
1000aca9:	74 11                	je     0x1000acbc
1000acab:	8b 06                	mov    eax,DWORD PTR [esi]
1000acad:	6a 05                	push   0x5
1000acaf:	8b 80 8c 01 00 00    	mov    eax,DWORD PTR [eax+0x18c]
1000acb5:	ff d0                	call   eax
1000acb7:	5e                   	pop    esi
1000acb8:	8b e5                	mov    esp,ebp
1000acba:	5d                   	pop    ebp
1000acbb:	c3                   	ret
1000acbc:	e8 6f 32 0b 00       	call   0x100bdf30
1000acc1:	8b 0e                	mov    ecx,DWORD PTR [esi]
1000acc3:	8b 91 8c 01 00 00    	mov    edx,DWORD PTR [ecx+0x18c]
1000acc9:	8b ce                	mov    ecx,esi
1000accb:	85 c0                	test   eax,eax
1000accd:	74 09                	je     0x1000acd8
1000accf:	6a 01                	push   0x1
1000acd1:	ff d2                	call   edx
1000acd3:	5e                   	pop    esi
1000acd4:	8b e5                	mov    esp,ebp
1000acd6:	5d                   	pop    ebp
1000acd7:	c3                   	ret
1000acd8:	6a 02                	push   0x2
1000acda:	ff d2                	call   edx
1000acdc:	5e                   	pop    esi
1000acdd:	8b e5                	mov    esp,ebp
1000acdf:	5d                   	pop    ebp
1000ace0:	c3                   	ret
1000ace1:	8b 8e 58 03 00 00    	mov    ecx,DWORD PTR [esi+0x358]
1000ace7:	85 c9                	test   ecx,ecx
1000ace9:	74 49                	je     0x1000ad34
1000aceb:	8b 15 88 31 22 10    	mov    edx,DWORD PTR ds:0x10223188
1000acf1:	f3 0f 10 8e 64 03 00 	movss  xmm1,DWORD PTR [esi+0x364]
1000acf8:	00 
1000acf9:	f3 0f 10 02          	movss  xmm0,DWORD PTR [edx]
1000acfd:	0f 2f c1             	comiss xmm0,xmm1
1000ad00:	76 32                	jbe    0x1000ad34
1000ad02:	0f 2e 0d d0 13 1a 10 	ucomiss xmm1,DWORD PTR ds:0x101a13d0
1000ad09:	9f                   	lahf
1000ad0a:	f6 c4 44             	test   ah,0x44
1000ad0d:	7b 25                	jnp    0x1000ad34
1000ad0f:	8b 82 98 00 00 00    	mov    eax,DWORD PTR [edx+0x98]
1000ad15:	03 c1                	add    eax,ecx
1000ad17:	50                   	push   eax
1000ad18:	6a 00                	push   0x0
1000ad1a:	e8 71 d8 10 00       	call   0x10118590
1000ad1f:	83 c4 08             	add    esp,0x8
1000ad22:	85 c0                	test   eax,eax
1000ad24:	0f 85 43 ff ff ff    	jne    0x1000ac6d
1000ad2a:	c7 86 64 03 00 00 00 	mov    DWORD PTR [esi+0x364],0xbf800000
1000ad31:	00 80 bf 
1000ad34:	f7 86 80 01 00 00 00 	test   DWORD PTR [esi+0x180],0x100000
1000ad3b:	00 10 00 
1000ad3e:	74 21                	je     0x1000ad61
1000ad40:	6a 41                	push   0x41
1000ad42:	8b ce                	mov    ecx,esi
1000ad44:	e8 07 3c 00 00       	call   0x1000e950
1000ad49:	83 f8 ff             	cmp    eax,0xffffffff
1000ad4c:	74 13                	je     0x1000ad61
1000ad4e:	8b 06                	mov    eax,DWORD PTR [esi]
1000ad50:	8b ce                	mov    ecx,esi
1000ad52:	6a 0e                	push   0xe
1000ad54:	8b 80 8c 01 00 00    	mov    eax,DWORD PTR [eax+0x18c]
1000ad5a:	ff d0                	call   eax
1000ad5c:	5e                   	pop    esi
1000ad5d:	8b e5                	mov    esp,ebp
1000ad5f:	5d                   	pop    ebp
1000ad60:	c3                   	ret
1000ad61:	8b 86 80 01 00 00    	mov    eax,DWORD PTR [esi+0x180]
1000ad67:	8b ce                	mov    ecx,esi
1000ad69:	a9 00 03 00 00       	test   eax,0x300
1000ad6e:	74 58                	je     0x1000adc8
1000ad70:	e8 ab 3f 0b 00       	call   0x100bed20
1000ad75:	f2 0f 10 0d 78 1e 1a 	movsd  xmm1,QWORD PTR ds:0x101a1e78
1000ad7c:	10 
1000ad7d:	8b ce                	mov    ecx,esi
1000ad7f:	8b 06                	mov    eax,DWORD PTR [esi]
1000ad81:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
1000ad84:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
1000ad89:	0f 54 05 80 1f 1a 10 	andps  xmm0,XMMWORD PTR ds:0x101a1f80
1000ad90:	8b 80 8c 01 00 00    	mov    eax,DWORD PTR [eax+0x18c]
1000ad96:	0f 5a d0             	cvtps2pd xmm2,xmm0
1000ad99:	f3 0f 10 86 08 02 00 	movss  xmm0,DWORD PTR [esi+0x208]
1000ada0:	00 
1000ada1:	0f 5a c0             	cvtps2pd xmm0,xmm0
1000ada4:	f2 0f 5c c8          	subsd  xmm1,xmm0
1000ada8:	f2 0f 59 0d b0 22 1a 	mulsd  xmm1,QWORD PTR ds:0x101a22b0
1000adaf:	10 
1000adb0:	66 0f 2f ca          	comisd xmm1,xmm2
1000adb4:	76 09                	jbe    0x1000adbf
1000adb6:	6a 14                	push   0x14
1000adb8:	ff d0                	call   eax
1000adba:	5e                   	pop    esi
1000adbb:	8b e5                	mov    esp,ebp
1000adbd:	5d                   	pop    ebp
1000adbe:	c3                   	ret
1000adbf:	6a 06                	push   0x6
1000adc1:	ff d0                	call   eax
1000adc3:	5e                   	pop    esi
1000adc4:	8b e5                	mov    esp,ebp
1000adc6:	5d                   	pop    ebp
1000adc7:	c3                   	ret
1000adc8:	a9 00 00 02 00       	test   eax,0x20000
1000adcd:	8b 06                	mov    eax,DWORD PTR [esi]
1000adcf:	8b 80 8c 01 00 00    	mov    eax,DWORD PTR [eax+0x18c]
1000add5:	74 09                	je     0x1000ade0
1000add7:	6a 05                	push   0x5
1000add9:	ff d0                	call   eax
1000addb:	5e                   	pop    esi
1000addc:	8b e5                	mov    esp,ebp
1000adde:	5d                   	pop    ebp
1000addf:	c3                   	ret
1000ade0:	6a 08                	push   0x8
1000ade2:	ff d0                	call   eax
1000ade4:	5e                   	pop    esi
1000ade5:	8b e5                	mov    esp,ebp
1000ade7:	5d                   	pop    ebp
1000ade8:	c3                   	ret
1000ade9:	8b 86 80 01 00 00    	mov    eax,DWORD PTR [esi+0x180]
1000adef:	a9 00 00 10 00       	test   eax,0x100000
1000adf4:	74 50                	je     0x1000ae46
1000adf6:	6a 00                	push   0x0
1000adf8:	8d 8e 84 01 00 00    	lea    ecx,[esi+0x184]
1000adfe:	e8 3d c9 00 00       	call   0x10017740
1000ae03:	8b 06                	mov    eax,DWORD PTR [esi]
1000ae05:	8b ce                	mov    ecx,esi
1000ae07:	8b 80 08 02 00 00    	mov    eax,DWORD PTR [eax+0x208]
1000ae0d:	ff d0                	call   eax
1000ae0f:	8b ce                	mov    ecx,esi
1000ae11:	85 c0                	test   eax,eax
1000ae13:	74 19                	je     0x1000ae2e
1000ae15:	8b 06                	mov    eax,DWORD PTR [esi]
1000ae17:	81 a6 80 01 00 00 ff 	and    DWORD PTR [esi+0x180],0xffefffff
1000ae1e:	ff ef ff 
1000ae21:	8b 80 90 01 00 00    	mov    eax,DWORD PTR [eax+0x190]
1000ae27:	ff d0                	call   eax
1000ae29:	5e                   	pop    esi
1000ae2a:	8b e5                	mov    esp,ebp
1000ae2c:	5d                   	pop    ebp
1000ae2d:	c3                   	ret
1000ae2e:	6a 03                	push   0x3
1000ae30:	e8 3b 7c 0b 00       	call   0x100c2a70
1000ae35:	8b 06                	mov    eax,DWORD PTR [esi]
1000ae37:	8b ce                	mov    ecx,esi
1000ae39:	8b 80 90 01 00 00    	mov    eax,DWORD PTR [eax+0x190]
1000ae3f:	ff d0                	call   eax
1000ae41:	5e                   	pop    esi
1000ae42:	8b e5                	mov    esp,ebp
1000ae44:	5d                   	pop    ebp
1000ae45:	c3                   	ret
1000ae46:	a9 00 00 01 00       	test   eax,0x10000
1000ae4b:	74 11                	je     0x1000ae5e
1000ae4d:	8b 06                	mov    eax,DWORD PTR [esi]
1000ae4f:	6a 03                	push   0x3
1000ae51:	8b 80 8c 01 00 00    	mov    eax,DWORD PTR [eax+0x18c]
1000ae57:	ff d0                	call   eax
1000ae59:	5e                   	pop    esi
1000ae5a:	8b e5                	mov    esp,ebp
1000ae5c:	5d                   	pop    ebp
1000ae5d:	c3                   	ret
1000ae5e:	a9 00 01 00 00       	test   eax,0x100
1000ae63:	74 1a                	je     0x1000ae7f
1000ae65:	f6 86 ec 02 00 00 40 	test   BYTE PTR [esi+0x2ec],0x40
1000ae6c:	75 11                	jne    0x1000ae7f
1000ae6e:	8b 06                	mov    eax,DWORD PTR [esi]
1000ae70:	6a 11                	push   0x11
1000ae72:	8b 80 8c 01 00 00    	mov    eax,DWORD PTR [eax+0x18c]
1000ae78:	ff d0                	call   eax
1000ae7a:	5e                   	pop    esi
1000ae7b:	8b e5                	mov    esp,ebp
1000ae7d:	5d                   	pop    ebp
1000ae7e:	c3                   	ret
1000ae7f:	a8 10                	test   al,0x10
1000ae81:	75 1e                	jne    0x1000aea1
1000ae83:	a8 20                	test   al,0x20
1000ae85:	8b 06                	mov    eax,DWORD PTR [esi]
1000ae87:	8b 80 8c 01 00 00    	mov    eax,DWORD PTR [eax+0x18c]
1000ae8d:	74 09                	je     0x1000ae98
1000ae8f:	6a 0c                	push   0xc
1000ae91:	ff d0                	call   eax
1000ae93:	5e                   	pop    esi
1000ae94:	8b e5                	mov    esp,ebp
1000ae96:	5d                   	pop    ebp
1000ae97:	c3                   	ret
1000ae98:	6a 0a                	push   0xa
1000ae9a:	ff d0                	call   eax
1000ae9c:	5e                   	pop    esi
1000ae9d:	8b e5                	mov    esp,ebp
1000ae9f:	5d                   	pop    ebp
1000aea0:	c3                   	ret
1000aea1:	a9 00 04 00 00       	test   eax,0x400
1000aea6:	74 11                	je     0x1000aeb9
1000aea8:	8b 06                	mov    eax,DWORD PTR [esi]
1000aeaa:	6a 18                	push   0x18
1000aeac:	8b 80 8c 01 00 00    	mov    eax,DWORD PTR [eax+0x18c]
1000aeb2:	ff d0                	call   eax
1000aeb4:	5e                   	pop    esi
1000aeb5:	8b e5                	mov    esp,ebp
1000aeb7:	5d                   	pop    ebp
1000aeb8:	c3                   	ret
1000aeb9:	a9 00 10 00 00       	test   eax,0x1000
1000aebe:	74 11                	je     0x1000aed1
1000aec0:	8b 06                	mov    eax,DWORD PTR [esi]
1000aec2:	6a 19                	push   0x19
1000aec4:	8b 80 8c 01 00 00    	mov    eax,DWORD PTR [eax+0x18c]
1000aeca:	ff d0                	call   eax
1000aecc:	5e                   	pop    esi
1000aecd:	8b e5                	mov    esp,ebp
1000aecf:	5d                   	pop    ebp
1000aed0:	c3                   	ret
1000aed1:	a9 00 08 00 00       	test   eax,0x800
1000aed6:	74 11                	je     0x1000aee9
1000aed8:	8b 06                	mov    eax,DWORD PTR [esi]
1000aeda:	6a 16                	push   0x16
1000aedc:	8b 80 8c 01 00 00    	mov    eax,DWORD PTR [eax+0x18c]
1000aee2:	ff d0                	call   eax
1000aee4:	5e                   	pop    esi
1000aee5:	8b e5                	mov    esp,ebp
1000aee7:	5d                   	pop    ebp
1000aee8:	c3                   	ret
1000aee9:	a9 00 20 00 00       	test   eax,0x2000
1000aeee:	74 11                	je     0x1000af01
1000aef0:	8b 06                	mov    eax,DWORD PTR [esi]
1000aef2:	6a 17                	push   0x17
1000aef4:	8b 80 8c 01 00 00    	mov    eax,DWORD PTR [eax+0x18c]
1000aefa:	ff d0                	call   eax
1000aefc:	5e                   	pop    esi
1000aefd:	8b e5                	mov    esp,ebp
1000aeff:	5d                   	pop    ebp
1000af00:	c3                   	ret
1000af01:	a9 00 0c 00 00       	test   eax,0xc00
1000af06:	75 11                	jne    0x1000af19
1000af08:	8b 06                	mov    eax,DWORD PTR [esi]
1000af0a:	6a 0c                	push   0xc
1000af0c:	8b 80 8c 01 00 00    	mov    eax,DWORD PTR [eax+0x18c]
1000af12:	ff d0                	call   eax
1000af14:	5e                   	pop    esi
1000af15:	8b e5                	mov    esp,ebp
1000af17:	5d                   	pop    ebp
1000af18:	c3                   	ret
1000af19:	e8 92 36 0b 00       	call   0x100be5b0
1000af1e:	85 c0                	test   eax,eax
1000af20:	75 13                	jne    0x1000af35
1000af22:	8b 06                	mov    eax,DWORD PTR [esi]
1000af24:	8b ce                	mov    ecx,esi
1000af26:	6a 0a                	push   0xa
1000af28:	8b 80 8c 01 00 00    	mov    eax,DWORD PTR [eax+0x18c]
1000af2e:	ff d0                	call   eax
1000af30:	5e                   	pop    esi
1000af31:	8b e5                	mov    esp,ebp
1000af33:	5d                   	pop    ebp
1000af34:	c3                   	ret
1000af35:	68 54 22 1a 10       	push   0x101a2254
1000af3a:	eb 6b                	jmp    0x1000afa7
1000af3c:	8b 06                	mov    eax,DWORD PTR [esi]
1000af3e:	6a 21                	push   0x21
1000af40:	8b 80 8c 01 00 00    	mov    eax,DWORD PTR [eax+0x18c]
1000af46:	ff d0                	call   eax
1000af48:	5e                   	pop    esi
1000af49:	8b e5                	mov    esp,ebp
1000af4b:	5d                   	pop    ebp
1000af4c:	c3                   	ret
1000af4d:	83 be 4c 03 00 00 00 	cmp    DWORD PTR [esi+0x34c],0x0
1000af54:	75 3b                	jne    0x1000af91
1000af56:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1000af59:	8b 08                	mov    ecx,DWORD PTR [eax]
1000af5b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000af60:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1000af66:	51                   	push   ecx
1000af67:	68 74 22 1a 10       	push   0x101a2274
1000af6c:	6a 02                	push   0x2
1000af6e:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1000af74:	83 c4 0c             	add    esp,0xc
1000af77:	8b ce                	mov    ecx,esi
1000af79:	e8 b2 f5 0e 00       	call   0x100fa530
1000af7e:	8b 06                	mov    eax,DWORD PTR [esi]
1000af80:	8b ce                	mov    ecx,esi
1000af82:	6a 01                	push   0x1
1000af84:	8b 80 8c 01 00 00    	mov    eax,DWORD PTR [eax+0x18c]
1000af8a:	ff d0                	call   eax
1000af8c:	5e                   	pop    esi
1000af8d:	8b e5                	mov    esp,ebp
1000af8f:	5d                   	pop    ebp
1000af90:	c3                   	ret
1000af91:	8b 06                	mov    eax,DWORD PTR [esi]
1000af93:	6a 28                	push   0x28
1000af95:	8b 80 8c 01 00 00    	mov    eax,DWORD PTR [eax+0x18c]
1000af9b:	ff d0                	call   eax
1000af9d:	5e                   	pop    esi
1000af9e:	8b e5                	mov    esp,ebp
1000afa0:	5d                   	pop    ebp
1000afa1:	c3                   	ret
1000afa2:	68 8c 22 1a 10       	push   0x101a228c
1000afa7:	6a 02                	push   0x2
1000afa9:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1000afaf:	83 c4 08             	add    esp,0x8
1000afb2:	b8 10 33 21 10       	mov    eax,0x10213310
1000afb7:	5e                   	pop    esi
1000afb8:	8b e5                	mov    esp,ebp
1000afba:	5d                   	pop    ebp
1000afbb:	c3                   	ret
