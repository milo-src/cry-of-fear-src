
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10102930 <.text+0x101930>:
10102930:	55                   	push   ebp
10102931:	8b ec                	mov    ebp,esp
10102933:	57                   	push   edi
10102934:	8b f9                	mov    edi,ecx
10102936:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
10102939:	83 b9 cc 01 00 00 00 	cmp    DWORD PTR [ecx+0x1cc],0x0
10102940:	75 0d                	jne    0x1010294f
10102942:	83 bf e0 00 00 00 00 	cmp    DWORD PTR [edi+0xe0],0x0
10102949:	0f 84 1f 01 00 00    	je     0x10102a6e
1010294f:	f3 0f 10 8f dc 00 00 	movss  xmm1,DWORD PTR [edi+0xdc]
10102956:	00 
10102957:	0f 57 c0             	xorps  xmm0,xmm0
1010295a:	0f 2e c8             	ucomiss xmm1,xmm0
1010295d:	56                   	push   esi
1010295e:	9f                   	lahf
1010295f:	f6 c4 44             	test   ah,0x44
10102962:	0f 8b 82 00 00 00    	jnp    0x101029ea
10102968:	6a 00                	push   0x0
1010296a:	e8 c1 f0 ff ff       	call   0x10101a30
1010296f:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
10102975:	8b f0                	mov    esi,eax
10102977:	ba c4 f4 1d 10       	mov    edx,0x101df4c4
1010297c:	2b 91 98 00 00 00    	sub    edx,DWORD PTR [ecx+0x98]
10102982:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10102985:	89 11                	mov    DWORD PTR [ecx],edx
10102987:	8b ce                	mov    ecx,esi
10102989:	8b 16                	mov    edx,DWORD PTR [esi]
1010298b:	f3 0f 10 87 dc 00 00 	movss  xmm0,DWORD PTR [edi+0xdc]
10102992:	00 
10102993:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10102998:	ff 52 08             	call   DWORD PTR [edx+0x8]
1010299b:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1010299e:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
101029a1:	ff 75 08             	push   DWORD PTR [ebp+0x8]
101029a4:	c7 46 78 e0 1e 10 10 	mov    DWORD PTR [esi+0x78],0x10101ee0
101029ab:	89 81 84 01 00 00    	mov    DWORD PTR [ecx+0x184],eax
101029b1:	8b 87 e0 00 00 00    	mov    eax,DWORD PTR [edi+0xe0]
101029b7:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
101029ba:	89 86 e0 00 00 00    	mov    DWORD PTR [esi+0xe0],eax
101029c0:	c7 86 dc 00 00 00 00 	mov    DWORD PTR [esi+0xdc],0x0
101029c7:	00 00 00 
101029ca:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
101029cd:	8b 80 cc 01 00 00    	mov    eax,DWORD PTR [eax+0x1cc]
101029d3:	89 81 cc 01 00 00    	mov    DWORD PTR [ecx+0x1cc],eax
101029d9:	8d 8e e4 00 00 00    	lea    ecx,[esi+0xe4]
101029df:	e8 5c 4d f1 ff       	call   0x10017740
101029e4:	5e                   	pop    esi
101029e5:	5f                   	pop    edi
101029e6:	5d                   	pop    ebp
101029e7:	c2 0c 00             	ret    0xc
101029ea:	8b 97 e0 00 00 00    	mov    edx,DWORD PTR [edi+0xe0]
101029f0:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
101029f3:	85 d2                	test   edx,edx
101029f5:	74 46                	je     0x10102a3d
101029f7:	a1 88 31 22 10       	mov    eax,ds:0x10223188
101029fc:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10102a02:	03 c2                	add    eax,edx
10102a04:	50                   	push   eax
10102a05:	68 d0 f4 1d 10       	push   0x101df4d0
10102a0a:	6a 02                	push   0x2
10102a0c:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10102a12:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10102a17:	83 c4 08             	add    esp,0x8
10102a1a:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10102a20:	03 87 e0 00 00 00    	add    eax,DWORD PTR [edi+0xe0]
10102a26:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
10102a2d:	6a 04                	push   0x4
10102a2f:	57                   	push   edi
10102a30:	56                   	push   esi
10102a31:	50                   	push   eax
10102a32:	e8 b9 f5 ff ff       	call   0x10101ff0
10102a37:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
10102a3a:	83 c4 14             	add    esp,0x14
10102a3d:	8b 89 cc 01 00 00    	mov    ecx,DWORD PTR [ecx+0x1cc]
10102a43:	85 c9                	test   ecx,ecx
10102a45:	74 26                	je     0x10102a6d
10102a47:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
10102a4c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10102a51:	51                   	push   ecx
10102a52:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10102a57:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
10102a5a:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10102a60:	57                   	push   edi
10102a61:	03 c1                	add    eax,ecx
10102a63:	56                   	push   esi
10102a64:	50                   	push   eax
10102a65:	e8 86 f5 ff ff       	call   0x10101ff0
10102a6a:	83 c4 14             	add    esp,0x14
10102a6d:	5e                   	pop    esi
10102a6e:	5f                   	pop    edi
10102a6f:	5d                   	pop    ebp
10102a70:	c2 0c 00             	ret    0xc
