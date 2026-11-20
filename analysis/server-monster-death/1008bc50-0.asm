
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008bc50 <.text+0x8ac50>:
1008bc50:	53                   	push   ebx
1008bc51:	8b dc                	mov    ebx,esp
1008bc53:	83 ec 08             	sub    esp,0x8
1008bc56:	83 e4 f0             	and    esp,0xfffffff0
1008bc59:	83 c4 04             	add    esp,0x4
1008bc5c:	55                   	push   ebp
1008bc5d:	8b 6b 04             	mov    ebp,DWORD PTR [ebx+0x4]
1008bc60:	89 6c 24 04          	mov    DWORD PTR [esp+0x4],ebp
1008bc64:	8b ec                	mov    ebp,esp
1008bc66:	83 ec 58             	sub    esp,0x58
1008bc69:	56                   	push   esi
1008bc6a:	8b f1                	mov    esi,ecx
1008bc6c:	57                   	push   edi
1008bc6d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008bc70:	f3 0f 10 80 70 01 00 	movss  xmm0,DWORD PTR [eax+0x170]
1008bc77:	00 
1008bc78:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
1008bc7f:	9f                   	lahf
1008bc80:	f6 c4 44             	test   ah,0x44
1008bc83:	0f 8b 5d 01 00 00    	jnp    0x1008bde6
1008bc89:	8b 06                	mov    eax,DWORD PTR [esi]
1008bc8b:	8b 80 bc 00 00 00    	mov    eax,DWORD PTR [eax+0xbc]
1008bc91:	ff d0                	call   eax
1008bc93:	85 c0                	test   eax,eax
1008bc95:	75 26                	jne    0x1008bcbd
1008bc97:	ff 73 14             	push   DWORD PTR [ebx+0x14]
1008bc9a:	f3 0f 10 43 10       	movss  xmm0,DWORD PTR [ebx+0x10]
1008bc9f:	51                   	push   ecx
1008bca0:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1008bca5:	8b ce                	mov    ecx,esi
1008bca7:	ff 73 0c             	push   DWORD PTR [ebx+0xc]
1008bcaa:	ff 73 08             	push   DWORD PTR [ebx+0x8]
1008bcad:	e8 5e c1 ff ff       	call   0x10087e10
1008bcb2:	5f                   	pop    edi
1008bcb3:	5e                   	pop    esi
1008bcb4:	8b e5                	mov    esp,ebp
1008bcb6:	5d                   	pop    ebp
1008bcb7:	8b e3                	mov    esp,ebx
1008bcb9:	5b                   	pop    ebx
1008bcba:	c2 10 00             	ret    0x10
1008bcbd:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008bcc0:	83 b8 74 01 00 00 00 	cmp    DWORD PTR [eax+0x174],0x0
1008bcc7:	75 16                	jne    0x1008bcdf
1008bcc9:	80 be fc 01 00 00 00 	cmp    BYTE PTR [esi+0x1fc],0x0
1008bcd0:	75 0d                	jne    0x1008bcdf
1008bcd2:	8b 06                	mov    eax,DWORD PTR [esi]
1008bcd4:	8b ce                	mov    ecx,esi
1008bcd6:	ff 90 38 02 00 00    	call   DWORD PTR [eax+0x238]
1008bcdc:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008bcdf:	f6 80 a8 01 00 00 20 	test   BYTE PTR [eax+0x1a8],0x20
1008bce6:	74 6d                	je     0x1008bd55
1008bce8:	8b 06                	mov    eax,DWORD PTR [esi]
1008bcea:	8b ce                	mov    ecx,esi
1008bcec:	8b 80 bc 00 00 00    	mov    eax,DWORD PTR [eax+0xbc]
1008bcf2:	ff d0                	call   eax
1008bcf4:	8b 7b 14             	mov    edi,DWORD PTR [ebx+0x14]
1008bcf7:	85 c0                	test   eax,eax
1008bcf9:	74 5d                	je     0x1008bd58
1008bcfb:	83 be 4c 03 00 00 00 	cmp    DWORD PTR [esi+0x34c],0x0
1008bd02:	75 54                	jne    0x1008bd58
1008bd04:	f7 c7 00 00 00 01    	test   edi,0x1000000
1008bd0a:	74 4c                	je     0x1008bd58
1008bd0c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008bd0f:	f3 0f 10 80 64 01 00 	movss  xmm0,DWORD PTR [eax+0x164]
1008bd16:	00 
1008bd17:	0f 2f 43 10          	comiss xmm0,DWORD PTR [ebx+0x10]
1008bd1b:	76 3b                	jbe    0x1008bd58
1008bd1d:	80 7e 0a 00          	cmp    BYTE PTR [esi+0xa],0x0
1008bd21:	75 35                	jne    0x1008bd58
1008bd23:	83 b8 74 01 00 00 00 	cmp    DWORD PTR [eax+0x174],0x0
1008bd2a:	75 2c                	jne    0x1008bd58
1008bd2c:	8b 06                	mov    eax,DWORD PTR [esi]
1008bd2e:	8b ce                	mov    ecx,esi
1008bd30:	ff 90 6c 01 00 00    	call   DWORD PTR [eax+0x16c]
1008bd36:	8b ce                	mov    ecx,esi
1008bd38:	e8 33 5d 03 00       	call   0x100c1a70
1008bd3d:	8b 06                	mov    eax,DWORD PTR [esi]
1008bd3f:	8b ce                	mov    ecx,esi
1008bd41:	6a 06                	push   0x6
1008bd43:	8b 80 8c 01 00 00    	mov    eax,DWORD PTR [eax+0x18c]
1008bd49:	ff d0                	call   eax
1008bd4b:	50                   	push   eax
1008bd4c:	8b ce                	mov    ecx,esi
1008bd4e:	e8 fd ec f7 ff       	call   0x1000aa50
1008bd53:	eb 03                	jmp    0x1008bd58
1008bd55:	8b 7b 14             	mov    edi,DWORD PTR [ebx+0x14]
1008bd58:	f7 c7 00 00 00 10    	test   edi,0x10000000
1008bd5e:	0f 84 8f 00 00 00    	je     0x1008bdf3
1008bd64:	80 7e 09 00          	cmp    BYTE PTR [esi+0x9],0x0
1008bd68:	75 7c                	jne    0x1008bde6
1008bd6a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008bd6d:	f6 80 a8 01 00 00 20 	test   BYTE PTR [eax+0x1a8],0x20
1008bd74:	74 70                	je     0x1008bde6
1008bd76:	f3 0f 10 80 70 01 00 	movss  xmm0,DWORD PTR [eax+0x170]
1008bd7d:	00 
1008bd7e:	0f 2e 05 80 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1380
1008bd85:	9f                   	lahf
1008bd86:	f6 c4 44             	test   ah,0x44
1008bd89:	7a 5b                	jp     0x1008bde6
1008bd8b:	8b 06                	mov    eax,DWORD PTR [esi]
1008bd8d:	8b ce                	mov    ecx,esi
1008bd8f:	8b 80 bc 00 00 00    	mov    eax,DWORD PTR [eax+0xbc]
1008bd95:	ff d0                	call   eax
1008bd97:	85 c0                	test   eax,eax
1008bd99:	74 4b                	je     0x1008bde6
1008bd9b:	83 be 4c 03 00 00 00 	cmp    DWORD PTR [esi+0x34c],0x0
1008bda2:	75 42                	jne    0x1008bde6
1008bda4:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008bda7:	f3 0f 10 80 64 01 00 	movss  xmm0,DWORD PTR [eax+0x164]
1008bdae:	00 
1008bdaf:	0f 2f 43 10          	comiss xmm0,DWORD PTR [ebx+0x10]
1008bdb3:	76 31                	jbe    0x1008bde6
1008bdb5:	80 7e 0a 00          	cmp    BYTE PTR [esi+0xa],0x0
1008bdb9:	75 2b                	jne    0x1008bde6
1008bdbb:	83 b8 74 01 00 00 00 	cmp    DWORD PTR [eax+0x174],0x0
1008bdc2:	75 22                	jne    0x1008bde6
1008bdc4:	c6 46 09 01          	mov    BYTE PTR [esi+0x9],0x1
1008bdc8:	c7 80 38 01 00 00 00 	mov    DWORD PTR [eax+0x138],0x0
1008bdcf:	00 00 00 
1008bdd2:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008bdd5:	c7 80 3c 01 00 00 00 	mov    DWORD PTR [eax+0x13c],0x0
1008bddc:	00 00 00 
1008bddf:	c7 46 78 00 00 00 00 	mov    DWORD PTR [esi+0x78],0x0
1008bde6:	33 c0                	xor    eax,eax
1008bde8:	5f                   	pop    edi
1008bde9:	5e                   	pop    esi
1008bdea:	8b e5                	mov    esp,ebp
1008bdec:	5d                   	pop    ebp
1008bded:	8b e3                	mov    esp,ebx
1008bdef:	5b                   	pop    ebx
1008bdf0:	c2 10 00             	ret    0x10
1008bdf3:	09 be 0c 03 00 00    	or     DWORD PTR [esi+0x30c],edi
1008bdf9:	0f 57 c9             	xorps  xmm1,xmm1
1008bdfc:	89 be 00 02 00 00    	mov    DWORD PTR [esi+0x200],edi
1008be02:	0f 57 c0             	xorps  xmm0,xmm0
1008be05:	8b 7b 08             	mov    edi,DWORD PTR [ebx+0x8]
1008be08:	0f 29 4d b0          	movaps XMMWORD PTR [ebp-0x50],xmm1
1008be0c:	f3 0f 11 4d f8       	movss  DWORD PTR [ebp-0x8],xmm1
1008be11:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
1008be16:	85 ff                	test   edi,edi
1008be18:	0f 84 3a 01 00 00    	je     0x1008bf58
1008be1e:	ff b7 0c 02 00 00    	push   DWORD PTR [edi+0x20c]
1008be24:	ff 15 60 30 22 10    	call   DWORD PTR ds:0x10223060
1008be2a:	83 c4 04             	add    esp,0x4
1008be2d:	85 c0                	test   eax,eax
1008be2f:	0f 84 23 01 00 00    	je     0x1008bf58
1008be35:	57                   	push   edi
1008be36:	e8 a5 e4 ff ff       	call   0x1008a2e0
1008be3b:	83 c4 04             	add    esp,0x4
1008be3e:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
1008be41:	85 c0                	test   eax,eax
1008be43:	0f 84 0f 01 00 00    	je     0x1008bf58
1008be49:	8b 10                	mov    edx,DWORD PTR [eax]
1008be4b:	8b c8                	mov    ecx,eax
1008be4d:	8b 92 d0 00 00 00    	mov    edx,DWORD PTR [edx+0xd0]
1008be53:	ff d2                	call   edx
1008be55:	85 c0                	test   eax,eax
1008be57:	74 1a                	je     0x1008be73
1008be59:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1008be5c:	56                   	push   esi
1008be5d:	ff 70 04             	push   DWORD PTR [eax+0x4]
1008be60:	e8 7b 67 f8 ff       	call   0x100125e0
1008be65:	83 c4 04             	add    esp,0x4
1008be68:	8d 88 0c 1f 00 00    	lea    ecx,[eax+0x1f0c]
1008be6e:	e8 cd b8 f8 ff       	call   0x10017740
1008be73:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1008be76:	8d 55 d8             	lea    edx,[ebp-0x28]
1008be79:	52                   	push   edx
1008be7a:	8b 01                	mov    eax,DWORD PTR [ecx]
1008be7c:	8b 80 fc 00 00 00    	mov    eax,DWORD PTR [eax+0xfc]
1008be82:	ff d0                	call   eax
1008be84:	8d 4d cc             	lea    ecx,[ebp-0x34]
1008be87:	51                   	push   ecx
1008be88:	8b ce                	mov    ecx,esi
1008be8a:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1008be8e:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
1008be93:	f3 0f 10 40 04       	movss  xmm0,DWORD PTR [eax+0x4]
1008be98:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
1008be9d:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
1008bea2:	8b 06                	mov    eax,DWORD PTR [esi]
1008bea4:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
1008bea9:	8b 80 fc 00 00 00    	mov    eax,DWORD PTR [eax+0xfc]
1008beaf:	ff d0                	call   eax
1008beb1:	f3 0f 10 45 f4       	movss  xmm0,DWORD PTR [ebp-0xc]
1008beb6:	8d 4d e4             	lea    ecx,[ebp-0x1c]
1008beb9:	0f 57 c9             	xorps  xmm1,xmm1
1008bebc:	f3 0f 5c c1          	subss  xmm0,xmm1
1008bec0:	f3 0f 5c 00          	subss  xmm0,DWORD PTR [eax]
1008bec4:	f3 0f 11 45 e4       	movss  DWORD PTR [ebp-0x1c],xmm0
1008bec9:	f3 0f 10 45 f8       	movss  xmm0,DWORD PTR [ebp-0x8]
1008bece:	f3 0f 5c c1          	subss  xmm0,xmm1
1008bed2:	f3 0f 5c 40 04       	subss  xmm0,DWORD PTR [eax+0x4]
1008bed7:	f3 0f 11 45 e8       	movss  DWORD PTR [ebp-0x18],xmm0
1008bedc:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
1008bee1:	f3 0f 5c 05 e0 1e 1a 	subss  xmm0,DWORD PTR ds:0x101a1ee0
1008bee8:	10 
1008bee9:	f3 0f 5c 40 08       	subss  xmm0,DWORD PTR [eax+0x8]
1008beee:	8d 45 b4             	lea    eax,[ebp-0x4c]
1008bef1:	50                   	push   eax
1008bef2:	f3 0f 11 45 ec       	movss  DWORD PTR [ebp-0x14],xmm0
1008bef7:	e8 74 bf f8 ff       	call   0x10017e70
1008befc:	8d 4d e4             	lea    ecx,[ebp-0x1c]
1008beff:	f3 0f 7e 00          	movq   xmm0,QWORD PTR [eax]
1008bf03:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
1008bf06:	89 45 ec             	mov    DWORD PTR [ebp-0x14],eax
1008bf09:	8d 45 b4             	lea    eax,[ebp-0x4c]
1008bf0c:	50                   	push   eax
1008bf0d:	66 0f d6 45 e4       	movq   QWORD PTR [ebp-0x1c],xmm0
1008bf12:	e8 59 bf f8 ff       	call   0x10017e70
1008bf17:	f3 0f 7e 00          	movq   xmm0,QWORD PTR [eax]
1008bf1b:	66 0f d6 05 28 2f 22 	movq   QWORD PTR ds:0x10222f28,xmm0
1008bf22:	10 
1008bf23:	8b 48 08             	mov    ecx,DWORD PTR [eax+0x8]
1008bf26:	89 0d 30 2f 22 10    	mov    DWORD PTR ds:0x10222f30,ecx
1008bf2c:	f3 0f 7e 00          	movq   xmm0,QWORD PTR [eax]
1008bf30:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
1008bf33:	66 0f d6 45 e4       	movq   QWORD PTR [ebp-0x1c],xmm0
1008bf38:	f3 0f 10 4d e8       	movss  xmm1,DWORD PTR [ebp-0x18]
1008bf3d:	89 45 ec             	mov    DWORD PTR [ebp-0x14],eax
1008bf40:	f3 0f 10 45 ec       	movss  xmm0,DWORD PTR [ebp-0x14]
1008bf45:	f3 0f 11 4d f8       	movss  DWORD PTR [ebp-0x8],xmm1
1008bf4a:	f3 0f 10 4d e4       	movss  xmm1,DWORD PTR [ebp-0x1c]
1008bf4f:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
1008bf54:	0f 29 4d b0          	movaps XMMWORD PTR [ebp-0x50],xmm1
1008bf58:	8b 06                	mov    eax,DWORD PTR [esi]
1008bf5a:	8b ce                	mov    ecx,esi
1008bf5c:	8b 80 d0 00 00 00    	mov    eax,DWORD PTR [eax+0xd0]
1008bf62:	ff d0                	call   eax
1008bf64:	85 c0                	test   eax,eax
1008bf66:	74 55                	je     0x1008bfbd
1008bf68:	85 ff                	test   edi,edi
1008bf6a:	74 0f                	je     0x1008bf7b
1008bf6c:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1008bf6f:	8b 87 0c 02 00 00    	mov    eax,DWORD PTR [edi+0x20c]
1008bf75:	89 81 90 01 00 00    	mov    DWORD PTR [ecx+0x190],eax
1008bf7b:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008bf7e:	f3 0f 10 43 10       	movss  xmm0,DWORD PTR [ebx+0x10]
1008bf83:	f3 0f 58 80 dc 01 00 	addss  xmm0,DWORD PTR [eax+0x1dc]
1008bf8a:	00 
1008bf8b:	f3 0f 11 80 dc 01 00 	movss  DWORD PTR [eax+0x1dc],xmm0
1008bf92:	00 
1008bf93:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008bf96:	f6 80 a8 01 00 00 40 	test   BYTE PTR [eax+0x1a8],0x40
1008bf9d:	0f 85 43 fe ff ff    	jne    0x1008bde6
1008bfa3:	50                   	push   eax
1008bfa4:	e8 37 66 f8 ff       	call   0x100125e0
1008bfa9:	83 c4 04             	add    esp,0x4
1008bfac:	85 c0                	test   eax,eax
1008bfae:	74 0d                	je     0x1008bfbd
1008bfb0:	80 b8 e9 21 00 00 00 	cmp    BYTE PTR [eax+0x21e9],0x0
1008bfb7:	0f 85 29 fe ff ff    	jne    0x1008bde6
1008bfbd:	85 ff                	test   edi,edi
1008bfbf:	0f 84 8f 00 00 00    	je     0x1008c054
1008bfc5:	ff b7 0c 02 00 00    	push   DWORD PTR [edi+0x20c]
1008bfcb:	ff 15 60 30 22 10    	call   DWORD PTR ds:0x10223060
1008bfd1:	83 c4 04             	add    esp,0x4
1008bfd4:	85 c0                	test   eax,eax
1008bfd6:	74 7c                	je     0x1008c054
1008bfd8:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008bfdb:	83 b8 08 01 00 00 03 	cmp    DWORD PTR [eax+0x108],0x3
1008bfe2:	75 70                	jne    0x1008c054
1008bfe4:	8b 43 0c             	mov    eax,DWORD PTR [ebx+0xc]
1008bfe7:	85 c0                	test   eax,eax
1008bfe9:	74 09                	je     0x1008bff4
1008bfeb:	83 b8 0c 01 00 00 01 	cmp    DWORD PTR [eax+0x10c],0x1
1008bff2:	74 60                	je     0x1008c054
1008bff4:	f3 0f 10 43 10       	movss  xmm0,DWORD PTR [ebx+0x10]
1008bff9:	51                   	push   ecx
1008bffa:	8b ce                	mov    ecx,esi
1008bffc:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1008c001:	e8 9a bd ff ff       	call   0x10087da0
1008c006:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1008c009:	0f 28 4d b0          	movaps xmm1,XMMWORD PTR [ebp-0x50]
1008c00d:	f3 0f 10 5d f8       	movss  xmm3,DWORD PTR [ebp-0x8]
1008c012:	f3 0f 10 55 f4       	movss  xmm2,DWORD PTR [ebp-0xc]
1008c017:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
1008c01a:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
1008c01f:	0f 57 05 e0 13 1a 10 	xorps  xmm0,XMMWORD PTR ds:0x101a13e0
1008c026:	f3 0f 59 c8          	mulss  xmm1,xmm0
1008c02a:	f3 0f 59 d8          	mulss  xmm3,xmm0
1008c02e:	f3 0f 58 49 20       	addss  xmm1,DWORD PTR [ecx+0x20]
1008c033:	f3 0f 59 d0          	mulss  xmm2,xmm0
1008c037:	f3 0f 58 59 24       	addss  xmm3,DWORD PTR [ecx+0x24]
1008c03c:	f3 0f 58 51 28       	addss  xmm2,DWORD PTR [ecx+0x28]
1008c041:	0f 14 cb             	unpcklps xmm1,xmm3
1008c044:	66 0f d6 49 20       	movq   QWORD PTR [ecx+0x20],xmm1
1008c049:	f3 0f 11 55 ec       	movss  DWORD PTR [ebp-0x14],xmm2
1008c04e:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
1008c051:	89 41 28             	mov    DWORD PTR [ecx+0x28],eax
1008c054:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008c057:	f3 0f 10 80 64 01 00 	movss  xmm0,DWORD PTR [eax+0x164]
1008c05e:	00 
1008c05f:	f3 0f 5c 43 10       	subss  xmm0,DWORD PTR [ebx+0x10]
1008c064:	f3 0f 11 80 64 01 00 	movss  DWORD PTR [eax+0x164],xmm0
1008c06b:	00 
1008c06c:	83 be 24 02 00 00 06 	cmp    DWORD PTR [esi+0x224],0x6
1008c073:	75 17                	jne    0x1008c08c
1008c075:	81 8e 80 01 00 00 00 	or     DWORD PTR [esi+0x180],0x100
1008c07c:	01 00 00 
1008c07f:	33 c0                	xor    eax,eax
1008c081:	5f                   	pop    edi
1008c082:	5e                   	pop    esi
1008c083:	8b e5                	mov    esp,ebp
1008c085:	5d                   	pop    ebp
1008c086:	8b e3                	mov    esp,ebx
1008c088:	5b                   	pop    ebx
1008c089:	c2 10 00             	ret    0x10
1008c08c:	8b ce                	mov    ecx,esi
1008c08e:	e8 1d b7 f8 ff       	call   0x100177b0
1008c093:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008c096:	0f 57 c0             	xorps  xmm0,xmm0
1008c099:	0f 2f 80 64 01 00 00 	comiss xmm0,DWORD PTR [eax+0x164]
1008c0a0:	0f 82 99 00 00 00    	jb     0x1008c13f
1008c0a6:	89 3d fc 66 22 10    	mov    DWORD PTR ds:0x102266fc,edi
1008c0ac:	80 7e 09 00          	cmp    BYTE PTR [esi+0x9],0x0
1008c0b0:	74 1a                	je     0x1008c0cc
1008c0b2:	8b 06                	mov    eax,DWORD PTR [esi]
1008c0b4:	51                   	push   ecx
1008c0b5:	8b ce                	mov    ecx,esi
1008c0b7:	c6 46 09 00          	mov    BYTE PTR [esi+0x9],0x0
1008c0bb:	c7 46 78 60 11 00 10 	mov    DWORD PTR [esi+0x78],0x10001160
1008c0c2:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
1008c0c9:	ff 50 08             	call   DWORD PTR [eax+0x8]
1008c0cc:	8b 43 14             	mov    eax,DWORD PTR [ebx+0x14]
1008c0cf:	8b ce                	mov    ecx,esi
1008c0d1:	8b 16                	mov    edx,DWORD PTR [esi]
1008c0d3:	a9 00 20 00 00       	test   eax,0x2000
1008c0d8:	74 1f                	je     0x1008c0f9
1008c0da:	6a 02                	push   0x2
1008c0dc:	ff 73 0c             	push   DWORD PTR [ebx+0xc]
1008c0df:	ff 52 6c             	call   DWORD PTR [edx+0x6c]
1008c0e2:	c7 05 fc 66 22 10 00 	mov    DWORD PTR ds:0x102266fc,0x0
1008c0e9:	00 00 00 
1008c0ec:	33 c0                	xor    eax,eax
1008c0ee:	5f                   	pop    edi
1008c0ef:	5e                   	pop    esi
1008c0f0:	8b e5                	mov    esp,ebp
1008c0f2:	5d                   	pop    ebp
1008c0f3:	8b e3                	mov    esp,ebx
1008c0f5:	5b                   	pop    ebx
1008c0f6:	c2 10 00             	ret    0x10
1008c0f9:	8b 52 6c             	mov    edx,DWORD PTR [edx+0x6c]
1008c0fc:	a9 04 10 00 00       	test   eax,0x1004
1008c101:	75 1e                	jne    0x1008c121
1008c103:	6a 00                	push   0x0
1008c105:	ff 73 0c             	push   DWORD PTR [ebx+0xc]
1008c108:	ff d2                	call   edx
1008c10a:	c7 05 fc 66 22 10 00 	mov    DWORD PTR ds:0x102266fc,0x0
1008c111:	00 00 00 
1008c114:	33 c0                	xor    eax,eax
1008c116:	5f                   	pop    edi
1008c117:	5e                   	pop    esi
1008c118:	8b e5                	mov    esp,ebp
1008c11a:	5d                   	pop    ebp
1008c11b:	8b e3                	mov    esp,ebx
1008c11d:	5b                   	pop    ebx
1008c11e:	c2 10 00             	ret    0x10
1008c121:	6a 01                	push   0x1
1008c123:	ff 73 0c             	push   DWORD PTR [ebx+0xc]
1008c126:	ff d2                	call   edx
1008c128:	c7 05 fc 66 22 10 00 	mov    DWORD PTR ds:0x102266fc,0x0
1008c12f:	00 00 00 
1008c132:	33 c0                	xor    eax,eax
1008c134:	5f                   	pop    edi
1008c135:	5e                   	pop    esi
1008c136:	8b e5                	mov    esp,ebp
1008c138:	5d                   	pop    ebp
1008c139:	8b e3                	mov    esp,ebx
1008c13b:	5b                   	pop    ebx
1008c13c:	c2 10 00             	ret    0x10
1008c13f:	f6 80 a8 01 00 00 20 	test   BYTE PTR [eax+0x1a8],0x20
1008c146:	0f 84 7b 01 00 00    	je     0x1008c2c7
1008c14c:	8b 43 0c             	mov    eax,DWORD PTR [ebx+0xc]
1008c14f:	85 c0                	test   eax,eax
1008c151:	0f 84 70 01 00 00    	je     0x1008c2c7
1008c157:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1008c15d:	ff 15 60 30 22 10    	call   DWORD PTR ds:0x10223060
1008c163:	83 c4 04             	add    esp,0x4
1008c166:	85 c0                	test   eax,eax
1008c168:	0f 84 59 01 00 00    	je     0x1008c2c7
1008c16e:	8b 43 0c             	mov    eax,DWORD PTR [ebx+0xc]
1008c171:	f6 80 a8 01 00 00 08 	test   BYTE PTR [eax+0x1a8],0x8
1008c178:	74 5a                	je     0x1008c1d4
1008c17a:	8b 8e 54 03 00 00    	mov    ecx,DWORD PTR [esi+0x354]
1008c180:	83 f9 02             	cmp    ecx,0x2
1008c183:	75 09                	jne    0x1008c18e
1008c185:	83 8e ec 02 00 00 01 	or     DWORD PTR [esi+0x2ec],0x1
1008c18c:	eb 46                	jmp    0x1008c1d4
1008c18e:	83 f9 03             	cmp    ecx,0x3
1008c191:	75 41                	jne    0x1008c1d4
1008c193:	8d 8e 84 01 00 00    	lea    ecx,[esi+0x184]
1008c199:	e8 e2 b5 f8 ff       	call   0x10017780
1008c19e:	85 c0                	test   eax,eax
1008c1a0:	75 2f                	jne    0x1008c1d1
1008c1a2:	f6 86 ec 02 00 00 04 	test   BYTE PTR [esi+0x2ec],0x4
1008c1a9:	75 1f                	jne    0x1008c1ca
1008c1ab:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008c1ae:	83 c0 08             	add    eax,0x8
1008c1b1:	50                   	push   eax
1008c1b2:	ff 73 0c             	push   DWORD PTR [ebx+0xc]
1008c1b5:	e8 76 cd 08 00       	call   0x10118f30
1008c1ba:	83 c4 08             	add    esp,0x8
1008c1bd:	85 c0                	test   eax,eax
1008c1bf:	75 09                	jne    0x1008c1ca
1008c1c1:	83 8e ec 02 00 00 04 	or     DWORD PTR [esi+0x2ec],0x4
1008c1c8:	eb 07                	jmp    0x1008c1d1
1008c1ca:	83 8e ec 02 00 00 01 	or     DWORD PTR [esi+0x2ec],0x1
1008c1d1:	8b 43 0c             	mov    eax,DWORD PTR [ebx+0xc]
1008c1d4:	f6 80 a8 01 00 00 28 	test   BYTE PTR [eax+0x1a8],0x28
1008c1db:	0f 84 e6 00 00 00    	je     0x1008c2c7
1008c1e1:	85 ff                	test   edi,edi
1008c1e3:	74 3a                	je     0x1008c21f
1008c1e5:	8d 8e 84 01 00 00    	lea    ecx,[esi+0x184]
1008c1eb:	e8 90 b5 f8 ff       	call   0x10017780
1008c1f0:	85 c0                	test   eax,eax
1008c1f2:	74 19                	je     0x1008c20d
1008c1f4:	8d 8e 84 01 00 00    	lea    ecx,[esi+0x184]
1008c1fa:	e8 a1 b5 f8 ff       	call   0x100177a0
1008c1ff:	3b 78 04             	cmp    edi,DWORD PTR [eax+0x4]
1008c202:	74 09                	je     0x1008c20d
1008c204:	f6 86 80 01 00 00 10 	test   BYTE PTR [esi+0x180],0x10
1008c20b:	75 69                	jne    0x1008c276
1008c20d:	f3 0f 7e 47 08       	movq   xmm0,QWORD PTR [edi+0x8]
1008c212:	66 0f d6 86 f4 02 00 	movq   QWORD PTR [esi+0x2f4],xmm0
1008c219:	00 
1008c21a:	8b 47 10             	mov    eax,DWORD PTR [edi+0x10]
1008c21d:	eb 51                	jmp    0x1008c270
1008c21f:	f3 0f 10 1d 28 2f 22 	movss  xmm3,DWORD PTR ds:0x10222f28
1008c226:	10 
1008c227:	f3 0f 10 0d 04 1f 1a 	movss  xmm1,DWORD PTR ds:0x101a1f04
1008c22e:	10 
1008c22f:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008c232:	f3 0f 10 15 2c 2f 22 	movss  xmm2,DWORD PTR ds:0x10222f2c
1008c239:	10 
1008c23a:	f3 0f 10 05 30 2f 22 	movss  xmm0,DWORD PTR ds:0x10222f30
1008c241:	10 
1008c242:	f3 0f 59 d9          	mulss  xmm3,xmm1
1008c246:	f3 0f 59 d1          	mulss  xmm2,xmm1
1008c24a:	f3 0f 58 58 08       	addss  xmm3,DWORD PTR [eax+0x8]
1008c24f:	f3 0f 59 c1          	mulss  xmm0,xmm1
1008c253:	f3 0f 58 50 0c       	addss  xmm2,DWORD PTR [eax+0xc]
1008c258:	f3 0f 58 40 10       	addss  xmm0,DWORD PTR [eax+0x10]
1008c25d:	0f 14 da             	unpcklps xmm3,xmm2
1008c260:	66 0f d6 9e f4 02 00 	movq   QWORD PTR [esi+0x2f4],xmm3
1008c267:	00 
1008c268:	f3 0f 11 45 ec       	movss  DWORD PTR [ebp-0x14],xmm0
1008c26d:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
1008c270:	89 86 fc 02 00 00    	mov    DWORD PTR [esi+0x2fc],eax
1008c276:	8b 86 f4 02 00 00    	mov    eax,DWORD PTR [esi+0x2f4]
1008c27c:	83 ec 0c             	sub    esp,0xc
1008c27f:	8b cc                	mov    ecx,esp
1008c281:	89 01                	mov    DWORD PTR [ecx],eax
1008c283:	8b 86 f8 02 00 00    	mov    eax,DWORD PTR [esi+0x2f8]
1008c289:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1008c28c:	8b 86 fc 02 00 00    	mov    eax,DWORD PTR [esi+0x2fc]
1008c292:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1008c295:	8b ce                	mov    ecx,esi
1008c297:	e8 54 3e 03 00       	call   0x100c00f0
1008c29c:	f3 0f 10 43 10       	movss  xmm0,DWORD PTR [ebx+0x10]
1008c2a1:	0f 2f 05 70 13 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1370
1008c2a8:	76 0a                	jbe    0x1008c2b4
1008c2aa:	81 8e 80 01 00 00 00 	or     DWORD PTR [esi+0x180],0x100
1008c2b1:	01 00 00 
1008c2b4:	0f 2f 05 ec 1e 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1eec
1008c2bb:	72 0a                	jb     0x1008c2c7
1008c2bd:	81 8e 80 01 00 00 00 	or     DWORD PTR [esi+0x180],0x200
1008c2c4:	02 00 00 
1008c2c7:	f6 43 14 08          	test   BYTE PTR [ebx+0x14],0x8
1008c2cb:	74 56                	je     0x1008c323
1008c2cd:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008c2d0:	f6 80 a8 01 00 00 20 	test   BYTE PTR [eax+0x1a8],0x20
1008c2d7:	74 4a                	je     0x1008c323
1008c2d9:	8b 88 60 01 00 00    	mov    ecx,DWORD PTR [eax+0x160]
1008c2df:	85 c9                	test   ecx,ecx
1008c2e1:	7e 0a                	jle    0x1008c2ed
1008c2e3:	83 f9 1e             	cmp    ecx,0x1e
1008c2e6:	7c 3b                	jl     0x1008c323
1008c2e8:	83 f9 28             	cmp    ecx,0x28
1008c2eb:	7f 36                	jg     0x1008c323
1008c2ed:	83 f9 1e             	cmp    ecx,0x1e
1008c2f0:	7d 0d                	jge    0x1008c2ff
1008c2f2:	c7 80 60 01 00 00 1e 	mov    DWORD PTR [eax+0x160],0x1e
1008c2f9:	00 00 00 
1008c2fc:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008c2ff:	ff 80 60 01 00 00    	inc    DWORD PTR [eax+0x160]
1008c305:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008c308:	f3 0f 10 80 68 02 00 	movss  xmm0,DWORD PTR [eax+0x268]
1008c30f:	00 
1008c310:	0f 2f 05 70 b6 1a 10 	comiss xmm0,DWORD PTR ds:0x101ab670
1008c317:	76 0a                	jbe    0x1008c323
1008c319:	c7 80 68 02 00 00 00 	mov    DWORD PTR [eax+0x268],0x42200000
1008c320:	00 20 42 
1008c323:	5f                   	pop    edi
1008c324:	b8 01 00 00 00       	mov    eax,0x1
1008c329:	5e                   	pop    esi
1008c32a:	8b e5                	mov    esp,ebp
1008c32c:	5d                   	pop    ebp
1008c32d:	8b e3                	mov    esp,ebx
1008c32f:	5b                   	pop    ebx
1008c330:	c2 10 00             	ret    0x10
