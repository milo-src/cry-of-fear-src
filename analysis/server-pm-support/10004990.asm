
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10004990 <.text+0x3990>:
10004990:	55                   	push   ebp
10004991:	8b ec                	mov    ebp,esp
10004993:	83 ec 14             	sub    esp,0x14
10004996:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
1000499b:	33 c5                	xor    eax,ebp
1000499d:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100049a0:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
100049a6:	8b 81 bc 00 00 00    	mov    eax,DWORD PTR [ecx+0xbc]
100049ac:	8d 04 40             	lea    eax,[eax+eax*2]
100049af:	f3 0f 10 84 81 28 f5 	movss  xmm0,DWORD PTR [ecx+eax*4+0x4f528]
100049b6:	04 00 
100049b8:	f3 0f 58 84 81 f8 f4 	addss  xmm0,DWORD PTR [ecx+eax*4+0x4f4f8]
100049bf:	04 00 
100049c1:	0f 5a c8             	cvtps2pd xmm1,xmm0
100049c4:	f3 0f 10 41 38       	movss  xmm0,DWORD PTR [ecx+0x38]
100049c9:	f2 0f 59 0d 48 1e 1a 	mulsd  xmm1,QWORD PTR ds:0x101a1e48
100049d0:	10 
100049d1:	0f 5a c0             	cvtps2pd xmm0,xmm0
100049d4:	f2 0f 58 c8          	addsd  xmm1,xmm0
100049d8:	66 0f 5a c1          	cvtpd2ps xmm0,xmm1
100049dc:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
100049e1:	8b 81 bc 00 00 00    	mov    eax,DWORD PTR [ecx+0xbc]
100049e7:	8d 04 40             	lea    eax,[eax+eax*2]
100049ea:	f3 0f 10 84 81 2c f5 	movss  xmm0,DWORD PTR [ecx+eax*4+0x4f52c]
100049f1:	04 00 
100049f3:	f3 0f 58 84 81 fc f4 	addss  xmm0,DWORD PTR [ecx+eax*4+0x4f4fc]
100049fa:	04 00 
100049fc:	0f 5a c8             	cvtps2pd xmm1,xmm0
100049ff:	f3 0f 10 41 3c       	movss  xmm0,DWORD PTR [ecx+0x3c]
10004a04:	f2 0f 59 0d 48 1e 1a 	mulsd  xmm1,QWORD PTR ds:0x101a1e48
10004a0b:	10 
10004a0c:	0f 5a c0             	cvtps2pd xmm0,xmm0
10004a0f:	f2 0f 58 c8          	addsd  xmm1,xmm0
10004a13:	66 0f 5a c1          	cvtpd2ps xmm0,xmm1
10004a17:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
10004a1c:	8b 81 bc 00 00 00    	mov    eax,DWORD PTR [ecx+0xbc]
10004a22:	05 c0 69 00 00       	add    eax,0x69c0
10004a27:	8d 04 40             	lea    eax,[eax+eax*2]
10004a2a:	f3 0f 10 04 81       	movss  xmm0,DWORD PTR [ecx+eax*4]
10004a2f:	f3 0f 58 41 40       	addss  xmm0,DWORD PTR [ecx+0x40]
10004a34:	f3 0f 58 05 90 13 1a 	addss  xmm0,DWORD PTR ds:0x101a1390
10004a3b:	10 
10004a3c:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
10004a41:	c7 81 e4 00 00 00 00 	mov    DWORD PTR [ecx+0xe4],0x0
10004a48:	00 00 00 
10004a4b:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10004a50:	c7 80 e8 00 00 00 ff 	mov    DWORD PTR [eax+0xe8],0xffffffff
10004a57:	ff ff ff 
10004a5a:	8d 45 ec             	lea    eax,[ebp-0x14]
10004a5d:	50                   	push   eax
10004a5e:	8d 45 f0             	lea    eax,[ebp-0x10]
10004a61:	50                   	push   eax
10004a62:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10004a67:	8b 80 78 f5 04 00    	mov    eax,DWORD PTR [eax+0x4f578]
10004a6d:	ff d0                	call   eax
10004a6f:	8b d0                	mov    edx,eax
10004a71:	83 c4 08             	add    esp,0x8
10004a74:	83 fa fd             	cmp    edx,0xfffffffd
10004a77:	7f 05                	jg     0x10004a7e
10004a79:	83 fa f1             	cmp    edx,0xfffffff1
10004a7c:	7f 0c                	jg     0x10004a8a
10004a7e:	8d 4a 13             	lea    ecx,[edx+0x13]
10004a81:	83 f9 02             	cmp    ecx,0x2
10004a84:	0f 87 1e 01 00 00    	ja     0x10004ba8
10004a8a:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10004a8f:	6a 00                	push   0x0
10004a91:	89 90 e8 00 00 00    	mov    DWORD PTR [eax+0xe8],edx
10004a97:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10004a9c:	c7 80 e4 00 00 00 01 	mov    DWORD PTR [eax+0xe4],0x1
10004aa3:	00 00 00 
10004aa6:	8b 15 50 0c 22 10    	mov    edx,DWORD PTR ds:0x10220c50
10004aac:	8b 82 bc 00 00 00    	mov    eax,DWORD PTR [edx+0xbc]
10004ab2:	8d 0c 40             	lea    ecx,[eax+eax*2]
10004ab5:	f3 0f 10 84 8a 30 f5 	movss  xmm0,DWORD PTR [edx+ecx*4+0x4f530]
10004abc:	04 00 
10004abe:	8d 04 40             	lea    eax,[eax+eax*2]
10004ac1:	f3 0f 58 84 82 00 f5 	addss  xmm0,DWORD PTR [edx+eax*4+0x4f500]
10004ac8:	04 00 
10004aca:	8d 45 f0             	lea    eax,[ebp-0x10]
10004acd:	50                   	push   eax
10004ace:	0f 5a c0             	cvtps2pd xmm0,xmm0
10004ad1:	f2 0f 59 05 48 1e 1a 	mulsd  xmm0,QWORD PTR ds:0x101a1e48
10004ad8:	10 
10004ad9:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10004add:	f3 0f 58 42 40       	addss  xmm0,DWORD PTR [edx+0x40]
10004ae2:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
10004ae7:	8b 82 78 f5 04 00    	mov    eax,DWORD PTR [edx+0x4f578]
10004aed:	ff d0                	call   eax
10004aef:	83 c4 08             	add    esp,0x8
10004af2:	83 f8 fd             	cmp    eax,0xfffffffd
10004af5:	7f 05                	jg     0x10004afc
10004af7:	83 f8 f1             	cmp    eax,0xfffffff1
10004afa:	7f 08                	jg     0x10004b04
10004afc:	83 c0 13             	add    eax,0x13
10004aff:	83 f8 02             	cmp    eax,0x2
10004b02:	77 55                	ja     0x10004b59
10004b04:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10004b09:	8d 4d f0             	lea    ecx,[ebp-0x10]
10004b0c:	6a 00                	push   0x0
10004b0e:	51                   	push   ecx
10004b0f:	c7 80 e4 00 00 00 02 	mov    DWORD PTR [eax+0xe4],0x2
10004b16:	00 00 00 
10004b19:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10004b1e:	f3 0f 10 80 88 00 00 	movss  xmm0,DWORD PTR [eax+0x88]
10004b25:	00 
10004b26:	f3 0f 58 40 40       	addss  xmm0,DWORD PTR [eax+0x40]
10004b2b:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
10004b30:	8b 80 78 f5 04 00    	mov    eax,DWORD PTR [eax+0x4f578]
10004b36:	ff d0                	call   eax
10004b38:	83 c4 08             	add    esp,0x8
10004b3b:	83 f8 fd             	cmp    eax,0xfffffffd
10004b3e:	7f 05                	jg     0x10004b45
10004b40:	83 f8 f1             	cmp    eax,0xfffffff1
10004b43:	7f 05                	jg     0x10004b4a
10004b45:	83 f8 ed             	cmp    eax,0xffffffed
10004b48:	75 0f                	jne    0x10004b59
10004b4a:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10004b4f:	c7 80 e4 00 00 00 03 	mov    DWORD PTR [eax+0xe4],0x3
10004b56:	00 00 00 
10004b59:	8b 4d ec             	mov    ecx,DWORD PTR [ebp-0x14]
10004b5c:	8d 41 0e             	lea    eax,[ecx+0xe]
10004b5f:	83 f8 05             	cmp    eax,0x5
10004b62:	77 44                	ja     0x10004ba8
10004b64:	8b 15 50 0c 22 10    	mov    edx,DWORD PTR ds:0x10220c50
10004b6a:	8d 0c 49             	lea    ecx,[ecx+ecx*2]
10004b6d:	56                   	push   esi
10004b6e:	83 c1 1b             	add    ecx,0x1b
10004b71:	b8 90 10 21 10       	mov    eax,0x10211090
10004b76:	c1 e1 02             	shl    ecx,0x2
10004b79:	66 0f 6e 82 e4 00 00 	movd   xmm0,DWORD PTR [edx+0xe4]
10004b80:	00 
10004b81:	8d 72 74             	lea    esi,[edx+0x74]
10004b84:	f3 0f e6 c0          	cvtdq2pd xmm0,xmm0
10004b88:	56                   	push   esi
10004b89:	2b c1                	sub    eax,ecx
10004b8b:	50                   	push   eax
10004b8c:	51                   	push   ecx
10004b8d:	f2 0f 59 05 b0 1e 1a 	mulsd  xmm0,QWORD PTR ds:0x101a1eb0
10004b94:	10 
10004b95:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10004b99:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10004b9e:	56                   	push   esi
10004b9f:	e8 2c e7 ff ff       	call   0x100032d0
10004ba4:	83 c4 10             	add    esp,0x10
10004ba7:	5e                   	pop    esi
10004ba8:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
10004bae:	33 c0                	xor    eax,eax
10004bb0:	83 b9 e4 00 00 00 01 	cmp    DWORD PTR [ecx+0xe4],0x1
10004bb7:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10004bba:	0f 9f c0             	setg   al
10004bbd:	33 cd                	xor    ecx,ebp
10004bbf:	e8 ef 8f 13 00       	call   0x1013dbb3
10004bc4:	8b e5                	mov    esp,ebp
10004bc6:	5d                   	pop    ebp
10004bc7:	c3                   	ret
