
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10048cb0 <.text+0x47cb0>:
10048cb0:	55                   	push   ebp
10048cb1:	8b ec                	mov    ebp,esp
10048cb3:	83 ec 0c             	sub    esp,0xc
10048cb6:	56                   	push   esi
10048cb7:	8b f1                	mov    esi,ecx
10048cb9:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10048cbc:	8b 88 9c 01 00 00    	mov    ecx,DWORD PTR [eax+0x19c]
10048cc2:	85 c9                	test   ecx,ecx
10048cc4:	0f 84 65 01 00 00    	je     0x10048e2f
10048cca:	8b 49 7c             	mov    ecx,DWORD PTR [ecx+0x7c]
10048ccd:	85 c9                	test   ecx,ecx
10048ccf:	0f 84 5a 01 00 00    	je     0x10048e2f
10048cd5:	57                   	push   edi
10048cd6:	ff 71 04             	push   DWORD PTR [ecx+0x4]
10048cd9:	e8 02 99 fc ff       	call   0x100125e0
10048cde:	8b f8                	mov    edi,eax
10048ce0:	83 c4 04             	add    esp,0x4
10048ce3:	85 ff                	test   edi,edi
10048ce5:	0f 84 3e 01 00 00    	je     0x10048e29
10048ceb:	c6 87 a4 1e 00 00 01 	mov    BYTE PTR [edi+0x1ea4],0x1
10048cf2:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10048cf5:	8b 89 ec 01 00 00    	mov    ecx,DWORD PTR [ecx+0x1ec]
10048cfb:	85 c9                	test   ecx,ecx
10048cfd:	74 37                	je     0x10048d36
10048cff:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10048d04:	6a 64                	push   0x64
10048d06:	6a 00                	push   0x0
10048d08:	83 ec 08             	sub    esp,0x8
10048d0b:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10048d11:	03 c1                	add    eax,ecx
10048d13:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
10048d1a:	3f 
10048d1b:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
10048d22:	50                   	push   eax
10048d23:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10048d26:	6a 00                	push   0x0
10048d28:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10048d2e:	e8 bd 3c 0b 00       	call   0x100fc9f0
10048d33:	83 c4 1c             	add    esp,0x1c
10048d36:	6a 05                	push   0x5
10048d38:	68 ff 00 00 00       	push   0xff
10048d3d:	83 ec 08             	sub    esp,0x8
10048d40:	c7 45 f4 00 00 00 00 	mov    DWORD PTR [ebp-0xc],0x0
10048d47:	8d 45 f4             	lea    eax,[ebp-0xc]
10048d4a:	c7 45 f8 00 00 00 00 	mov    DWORD PTR [ebp-0x8],0x0
10048d51:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
10048d58:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x40000000
10048d5f:	40 
10048d60:	c7 04 24 00 00 00 3f 	mov    DWORD PTR [esp],0x3f000000
10048d67:	50                   	push   eax
10048d68:	57                   	push   edi
10048d69:	e8 92 0e 0d 00       	call   0x10119c00
10048d6e:	83 c4 18             	add    esp,0x18
10048d71:	c6 87 c8 1e 00 00 00 	mov    BYTE PTR [edi+0x1ec8],0x0
10048d78:	8b cf                	mov    ecx,edi
10048d7a:	6a 00                	push   0x0
10048d7c:	e8 6f 62 09 00       	call   0x100deff0
10048d81:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10048d84:	83 8f 00 25 00 00 09 	or     DWORD PTR [edi+0x2500],0x9
10048d8b:	81 88 a8 01 00 00 80 	or     DWORD PTR [eax+0x1a8],0x80
10048d92:	00 00 00 
10048d95:	83 bf 10 23 00 00 00 	cmp    DWORD PTR [edi+0x2310],0x0
10048d9c:	74 5e                	je     0x10048dfc
10048d9e:	80 be 88 01 00 00 00 	cmp    BYTE PTR [esi+0x188],0x0
10048da5:	74 32                	je     0x10048dd9
10048da7:	f3 0f 10 86 a8 01 00 	movss  xmm0,DWORD PTR [esi+0x1a8]
10048dae:	00 
10048daf:	0f 2e 05 d0 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a13d0
10048db6:	9f                   	lahf
10048db7:	f6 c4 44             	test   ah,0x44
10048dba:	7a 08                	jp     0x10048dc4
10048dbc:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
10048dc3:	10 
10048dc4:	51                   	push   ecx
10048dc5:	8b cf                	mov    ecx,edi
10048dc7:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10048dcc:	e8 2f 18 0a 00       	call   0x100ea600
10048dd1:	8b 86 8c 01 00 00    	mov    eax,DWORD PTR [esi+0x18c]
10048dd7:	eb 2d                	jmp    0x10048e06
10048dd9:	83 be 8c 01 00 00 00 	cmp    DWORD PTR [esi+0x18c],0x0
10048de0:	74 2a                	je     0x10048e0c
10048de2:	f3 0f 10 86 a8 01 00 	movss  xmm0,DWORD PTR [esi+0x1a8]
10048de9:	00 
10048dea:	0f 2e 05 d0 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a13d0
10048df1:	9f                   	lahf
10048df2:	f6 c4 44             	test   ah,0x44
10048df5:	7a cd                	jp     0x10048dc4
10048df7:	0f 57 c0             	xorps  xmm0,xmm0
10048dfa:	eb c8                	jmp    0x10048dc4
10048dfc:	8b 86 8c 01 00 00    	mov    eax,DWORD PTR [esi+0x18c]
10048e02:	85 c0                	test   eax,eax
10048e04:	74 06                	je     0x10048e0c
10048e06:	89 87 10 23 00 00    	mov    DWORD PTR [edi+0x2310],eax
10048e0c:	8b ce                	mov    ecx,esi
10048e0e:	e8 dd fb ff ff       	call   0x100489f0
10048e13:	8b 06                	mov    eax,DWORD PTR [esi]
10048e15:	51                   	push   ecx
10048e16:	8b ce                	mov    ecx,esi
10048e18:	c7 04 24 00 00 00 40 	mov    DWORD PTR [esp],0x40000000
10048e1f:	ff 50 08             	call   DWORD PTR [eax+0x8]
10048e22:	c7 46 78 70 80 04 10 	mov    DWORD PTR [esi+0x78],0x10048070
10048e29:	5f                   	pop    edi
10048e2a:	5e                   	pop    esi
10048e2b:	8b e5                	mov    esp,ebp
10048e2d:	5d                   	pop    ebp
10048e2e:	c3                   	ret
10048e2f:	c7 80 9c 01 00 00 00 	mov    DWORD PTR [eax+0x19c],0x0
10048e36:	00 00 00 
10048e39:	5e                   	pop    esi
10048e3a:	8b e5                	mov    esp,ebp
10048e3c:	5d                   	pop    ebp
10048e3d:	c3                   	ret
10048e3e:	cc                   	int3
10048e3f:	cc                   	int3
