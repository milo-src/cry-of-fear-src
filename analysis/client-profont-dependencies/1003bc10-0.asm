
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\client.dll:     file format pei-i386


Disassembly of section .text:

1003bc10 <.text+0x3ac10>:
1003bc10:	55                   	push   ebp
1003bc11:	8b ec                	mov    ebp,esp
1003bc13:	83 ec 08             	sub    esp,0x8
1003bc16:	83 3d b4 2b 54 10 00 	cmp    DWORD PTR ds:0x10542bb4,0x0
1003bc1d:	53                   	push   ebx
1003bc1e:	8b d9                	mov    ebx,ecx
1003bc20:	0f 84 b3 02 00 00    	je     0x1003bed9
1003bc26:	6a 04                	push   0x4
1003bc28:	6a 01                	push   0x1
1003bc2a:	ff 15 18 27 1b 10    	call   DWORD PTR ds:0x101b2718
1003bc30:	48                   	dec    eax
1003bc31:	83 c4 08             	add    esp,0x8
1003bc34:	83 f8 03             	cmp    eax,0x3
1003bc37:	0f 87 9c 02 00 00    	ja     0x1003bed9
1003bc3d:	56                   	push   esi
1003bc3e:	57                   	push   edi
1003bc3f:	ff 24 85 ec be 03 10 	jmp    DWORD PTR [eax*4+0x1003beec]
1003bc46:	8b 03                	mov    eax,DWORD PTR [ebx]
1003bc48:	8b cb                	mov    ecx,ebx
1003bc4a:	ff b3 54 0f 00 00    	push   DWORD PTR [ebx+0xf54]
1003bc50:	ff 90 88 01 00 00    	call   DWORD PTR [eax+0x188]
1003bc56:	8b 03                	mov    eax,DWORD PTR [ebx]
1003bc58:	8b cb                	mov    ecx,ebx
1003bc5a:	6a 01                	push   0x1
1003bc5c:	6a 00                	push   0x0
1003bc5e:	68 ff 00 00 00       	push   0xff
1003bc63:	68 ff 00 00 00       	push   0xff
1003bc68:	ff 90 90 01 00 00    	call   DWORD PTR [eax+0x190]
1003bc6e:	8b 8b 54 0f 00 00    	mov    ecx,DWORD PTR [ebx+0xf54]
1003bc74:	8d 55 f8             	lea    edx,[ebp-0x8]
1003bc77:	52                   	push   edx
1003bc78:	8d 55 fc             	lea    edx,[ebp-0x4]
1003bc7b:	52                   	push   edx
1003bc7c:	8b 01                	mov    eax,DWORD PTR [ecx]
1003bc7e:	68 bc 67 14 10       	push   0x101467bc
1003bc83:	ff 50 0c             	call   DWORD PTR [eax+0xc]
1003bc86:	6a 32                	push   0x32
1003bc88:	6a 00                	push   0x0
1003bc8a:	ff 15 18 27 1b 10    	call   DWORD PTR ds:0x101b2718
1003bc90:	8b f8                	mov    edi,eax
1003bc92:	a1 30 f4 18 10       	mov    eax,ds:0x1018f430
1003bc97:	99                   	cdq
1003bc98:	2b c2                	sub    eax,edx
1003bc9a:	8b c8                	mov    ecx,eax
1003bc9c:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1003bc9f:	99                   	cdq
1003bca0:	2b c2                	sub    eax,edx
1003bca2:	d1 f9                	sar    ecx,1
1003bca4:	d1 f8                	sar    eax,1
1003bca6:	2b c8                	sub    ecx,eax
1003bca8:	6a 32                	push   0x32
1003bcaa:	6a 00                	push   0x0
1003bcac:	03 f9                	add    edi,ecx
1003bcae:	ff 15 18 27 1b 10    	call   DWORD PTR ds:0x101b2718
1003bcb4:	8b f0                	mov    esi,eax
1003bcb6:	83 c4 10             	add    esp,0x10
1003bcb9:	a1 34 f4 18 10       	mov    eax,ds:0x1018f434
1003bcbe:	99                   	cdq
1003bcbf:	2b c2                	sub    eax,edx
1003bcc1:	8b c8                	mov    ecx,eax
1003bcc3:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
1003bcc6:	99                   	cdq
1003bcc7:	2b c2                	sub    eax,edx
1003bcc9:	d1 f9                	sar    ecx,1
1003bccb:	d1 f8                	sar    eax,1
1003bccd:	2b c8                	sub    ecx,eax
1003bccf:	8b 03                	mov    eax,DWORD PTR [ebx]
1003bcd1:	03 f1                	add    esi,ecx
1003bcd3:	8b cb                	mov    ecx,ebx
1003bcd5:	56                   	push   esi
1003bcd6:	57                   	push   edi
1003bcd7:	ff 90 98 01 00 00    	call   DWORD PTR [eax+0x198]
1003bcdd:	6a 05                	push   0x5
1003bcdf:	68 bc 67 14 10       	push   0x101467bc
1003bce4:	e9 e4 01 00 00       	jmp    0x1003becd
1003bce9:	8b 03                	mov    eax,DWORD PTR [ebx]
1003bceb:	8b cb                	mov    ecx,ebx
1003bced:	ff b3 54 0f 00 00    	push   DWORD PTR [ebx+0xf54]
1003bcf3:	ff 90 88 01 00 00    	call   DWORD PTR [eax+0x188]
1003bcf9:	8b 03                	mov    eax,DWORD PTR [ebx]
1003bcfb:	8b cb                	mov    ecx,ebx
1003bcfd:	6a 01                	push   0x1
1003bcff:	6a 00                	push   0x0
1003bd01:	68 ff 00 00 00       	push   0xff
1003bd06:	68 ff 00 00 00       	push   0xff
1003bd0b:	ff 90 90 01 00 00    	call   DWORD PTR [eax+0x190]
1003bd11:	8b 8b 54 0f 00 00    	mov    ecx,DWORD PTR [ebx+0xf54]
1003bd17:	8d 55 f8             	lea    edx,[ebp-0x8]
1003bd1a:	52                   	push   edx
1003bd1b:	8d 55 fc             	lea    edx,[ebp-0x4]
1003bd1e:	52                   	push   edx
1003bd1f:	8b 01                	mov    eax,DWORD PTR [ecx]
1003bd21:	68 c4 67 14 10       	push   0x101467c4
1003bd26:	ff 50 0c             	call   DWORD PTR [eax+0xc]
1003bd29:	6a 32                	push   0x32
1003bd2b:	6a 00                	push   0x0
1003bd2d:	ff 15 18 27 1b 10    	call   DWORD PTR ds:0x101b2718
1003bd33:	8b f8                	mov    edi,eax
1003bd35:	a1 30 f4 18 10       	mov    eax,ds:0x1018f430
1003bd3a:	99                   	cdq
1003bd3b:	2b c2                	sub    eax,edx
1003bd3d:	8b c8                	mov    ecx,eax
1003bd3f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1003bd42:	99                   	cdq
1003bd43:	2b c2                	sub    eax,edx
1003bd45:	d1 f9                	sar    ecx,1
1003bd47:	d1 f8                	sar    eax,1
1003bd49:	2b c8                	sub    ecx,eax
1003bd4b:	6a 32                	push   0x32
1003bd4d:	6a 00                	push   0x0
1003bd4f:	03 f9                	add    edi,ecx
1003bd51:	ff 15 18 27 1b 10    	call   DWORD PTR ds:0x101b2718
1003bd57:	8b f0                	mov    esi,eax
1003bd59:	83 c4 10             	add    esp,0x10
1003bd5c:	a1 34 f4 18 10       	mov    eax,ds:0x1018f434
1003bd61:	99                   	cdq
1003bd62:	2b c2                	sub    eax,edx
1003bd64:	8b c8                	mov    ecx,eax
1003bd66:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
1003bd69:	99                   	cdq
1003bd6a:	2b c2                	sub    eax,edx
1003bd6c:	d1 f9                	sar    ecx,1
1003bd6e:	d1 f8                	sar    eax,1
1003bd70:	2b c8                	sub    ecx,eax
1003bd72:	8b 03                	mov    eax,DWORD PTR [ebx]
1003bd74:	03 f1                	add    esi,ecx
1003bd76:	8b cb                	mov    ecx,ebx
1003bd78:	56                   	push   esi
1003bd79:	57                   	push   edi
1003bd7a:	ff 90 98 01 00 00    	call   DWORD PTR [eax+0x198]
1003bd80:	6a 05                	push   0x5
1003bd82:	68 c4 67 14 10       	push   0x101467c4
1003bd87:	e9 41 01 00 00       	jmp    0x1003becd
1003bd8c:	8b 03                	mov    eax,DWORD PTR [ebx]
1003bd8e:	8b cb                	mov    ecx,ebx
1003bd90:	ff b3 54 0f 00 00    	push   DWORD PTR [ebx+0xf54]
1003bd96:	ff 90 88 01 00 00    	call   DWORD PTR [eax+0x188]
1003bd9c:	8b 03                	mov    eax,DWORD PTR [ebx]
1003bd9e:	8b cb                	mov    ecx,ebx
1003bda0:	6a 01                	push   0x1
1003bda2:	6a 00                	push   0x0
1003bda4:	68 ff 00 00 00       	push   0xff
1003bda9:	68 ff 00 00 00       	push   0xff
1003bdae:	ff 90 90 01 00 00    	call   DWORD PTR [eax+0x190]
1003bdb4:	8b 8b 54 0f 00 00    	mov    ecx,DWORD PTR [ebx+0xf54]
1003bdba:	8d 55 f8             	lea    edx,[ebp-0x8]
1003bdbd:	52                   	push   edx
1003bdbe:	8d 55 fc             	lea    edx,[ebp-0x4]
1003bdc1:	52                   	push   edx
1003bdc2:	8b 01                	mov    eax,DWORD PTR [ecx]
1003bdc4:	68 cc 67 14 10       	push   0x101467cc
1003bdc9:	ff 50 0c             	call   DWORD PTR [eax+0xc]
1003bdcc:	6a 32                	push   0x32
1003bdce:	6a 00                	push   0x0
1003bdd0:	ff 15 18 27 1b 10    	call   DWORD PTR ds:0x101b2718
1003bdd6:	8b f8                	mov    edi,eax
1003bdd8:	a1 30 f4 18 10       	mov    eax,ds:0x1018f430
1003bddd:	99                   	cdq
1003bdde:	2b c2                	sub    eax,edx
1003bde0:	8b c8                	mov    ecx,eax
1003bde2:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1003bde5:	99                   	cdq
1003bde6:	2b c2                	sub    eax,edx
1003bde8:	d1 f9                	sar    ecx,1
1003bdea:	d1 f8                	sar    eax,1
1003bdec:	2b c8                	sub    ecx,eax
1003bdee:	6a 32                	push   0x32
1003bdf0:	6a 00                	push   0x0
1003bdf2:	03 f9                	add    edi,ecx
1003bdf4:	ff 15 18 27 1b 10    	call   DWORD PTR ds:0x101b2718
1003bdfa:	8b f0                	mov    esi,eax
1003bdfc:	83 c4 10             	add    esp,0x10
1003bdff:	a1 34 f4 18 10       	mov    eax,ds:0x1018f434
1003be04:	99                   	cdq
1003be05:	2b c2                	sub    eax,edx
1003be07:	8b c8                	mov    ecx,eax
1003be09:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
1003be0c:	99                   	cdq
1003be0d:	2b c2                	sub    eax,edx
1003be0f:	d1 f9                	sar    ecx,1
1003be11:	d1 f8                	sar    eax,1
1003be13:	2b c8                	sub    ecx,eax
1003be15:	8b 03                	mov    eax,DWORD PTR [ebx]
1003be17:	03 f1                	add    esi,ecx
1003be19:	8b cb                	mov    ecx,ebx
1003be1b:	56                   	push   esi
1003be1c:	57                   	push   edi
1003be1d:	ff 90 98 01 00 00    	call   DWORD PTR [eax+0x198]
1003be23:	6a 05                	push   0x5
1003be25:	68 cc 67 14 10       	push   0x101467cc
1003be2a:	e9 9e 00 00 00       	jmp    0x1003becd
1003be2f:	8b 03                	mov    eax,DWORD PTR [ebx]
1003be31:	8b cb                	mov    ecx,ebx
1003be33:	ff b3 54 0f 00 00    	push   DWORD PTR [ebx+0xf54]
1003be39:	ff 90 88 01 00 00    	call   DWORD PTR [eax+0x188]
1003be3f:	8b 03                	mov    eax,DWORD PTR [ebx]
1003be41:	8b cb                	mov    ecx,ebx
1003be43:	6a 01                	push   0x1
1003be45:	6a 00                	push   0x0
1003be47:	68 ff 00 00 00       	push   0xff
1003be4c:	68 ff 00 00 00       	push   0xff
1003be51:	ff 90 90 01 00 00    	call   DWORD PTR [eax+0x190]
1003be57:	8b 8b 54 0f 00 00    	mov    ecx,DWORD PTR [ebx+0xf54]
1003be5d:	8d 55 f8             	lea    edx,[ebp-0x8]
1003be60:	52                   	push   edx
1003be61:	8d 55 fc             	lea    edx,[ebp-0x4]
1003be64:	52                   	push   edx
1003be65:	8b 01                	mov    eax,DWORD PTR [ecx]
1003be67:	68 d4 67 14 10       	push   0x101467d4
1003be6c:	ff 50 0c             	call   DWORD PTR [eax+0xc]
1003be6f:	6a 32                	push   0x32
1003be71:	6a 00                	push   0x0
1003be73:	ff 15 18 27 1b 10    	call   DWORD PTR ds:0x101b2718
1003be79:	8b f8                	mov    edi,eax
1003be7b:	a1 30 f4 18 10       	mov    eax,ds:0x1018f430
1003be80:	99                   	cdq
1003be81:	2b c2                	sub    eax,edx
1003be83:	8b c8                	mov    ecx,eax
1003be85:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1003be88:	99                   	cdq
1003be89:	2b c2                	sub    eax,edx
1003be8b:	d1 f9                	sar    ecx,1
1003be8d:	d1 f8                	sar    eax,1
1003be8f:	2b c8                	sub    ecx,eax
1003be91:	6a 32                	push   0x32
1003be93:	6a 00                	push   0x0
1003be95:	03 f9                	add    edi,ecx
1003be97:	ff 15 18 27 1b 10    	call   DWORD PTR ds:0x101b2718
1003be9d:	8b f0                	mov    esi,eax
1003be9f:	83 c4 10             	add    esp,0x10
1003bea2:	a1 34 f4 18 10       	mov    eax,ds:0x1018f434
1003bea7:	99                   	cdq
1003bea8:	2b c2                	sub    eax,edx
1003beaa:	8b c8                	mov    ecx,eax
1003beac:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
1003beaf:	99                   	cdq
1003beb0:	2b c2                	sub    eax,edx
1003beb2:	d1 f9                	sar    ecx,1
1003beb4:	d1 f8                	sar    eax,1
1003beb6:	2b c8                	sub    ecx,eax
1003beb8:	8b 03                	mov    eax,DWORD PTR [ebx]
1003beba:	03 f1                	add    esi,ecx
1003bebc:	8b cb                	mov    ecx,ebx
1003bebe:	56                   	push   esi
1003bebf:	57                   	push   edi
1003bec0:	ff 90 98 01 00 00    	call   DWORD PTR [eax+0x198]
1003bec6:	6a 05                	push   0x5
1003bec8:	68 d4 67 14 10       	push   0x101467d4
1003becd:	8b 03                	mov    eax,DWORD PTR [ebx]
1003becf:	8b cb                	mov    ecx,ebx
1003bed1:	ff 90 a0 01 00 00    	call   DWORD PTR [eax+0x1a0]
1003bed7:	5f                   	pop    edi
1003bed8:	5e                   	pop    esi
1003bed9:	8b cb                	mov    ecx,ebx
1003bedb:	e8 e0 f1 ff ff       	call   0x1003b0c0
1003bee0:	8b cb                	mov    ecx,ebx
1003bee2:	e8 23 78 07 00       	call   0x100b370a
1003bee7:	5b                   	pop    ebx
1003bee8:	8b e5                	mov    esp,ebp
1003beea:	5d                   	pop    ebp
1003beeb:	c3                   	ret
1003beec:	46                   	inc    esi
1003beed:	bc 03 10 e9 bc       	mov    esp,0xbce91003
1003bef2:	03 10                	add    edx,DWORD PTR [eax]
1003bef4:	8c bd 03 10 2f be    	mov    WORD PTR [ebp-0x41d0effd],?
1003befa:	03 10                	add    edx,DWORD PTR [eax]
1003befc:	cc                   	int3
1003befd:	cc                   	int3
1003befe:	cc                   	int3
1003beff:	cc                   	int3
