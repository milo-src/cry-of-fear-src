
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10017bc0 <.text+0x16bc0>:
10017bc0:	55                   	push   ebp
10017bc1:	8b ec                	mov    ebp,esp
10017bc3:	83 ec 0c             	sub    esp,0xc
10017bc6:	56                   	push   esi
10017bc7:	8b f1                	mov    esi,ecx
10017bc9:	8b 4e 18             	mov    ecx,DWORD PTR [esi+0x18]
10017bcc:	85 c9                	test   ecx,ecx
10017bce:	0f 84 99 01 00 00    	je     0x10017d6d
10017bd4:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10017bd9:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10017bdf:	03 c1                	add    eax,ecx
10017be1:	50                   	push   eax
10017be2:	6a 00                	push   0x0
10017be4:	e8 a7 09 10 00       	call   0x10118590
10017be9:	8b c8                	mov    ecx,eax
10017beb:	83 c4 08             	add    esp,0x8
10017bee:	89 4e 14             	mov    DWORD PTR [esi+0x14],ecx
10017bf1:	85 c9                	test   ecx,ecx
10017bf3:	75 24                	jne    0x10017c19
10017bf5:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10017bfa:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10017c00:	03 46 18             	add    eax,DWORD PTR [esi+0x18]
10017c03:	50                   	push   eax
10017c04:	68 7c 61 1a 10       	push   0x101a617c
10017c09:	6a 01                	push   0x1
10017c0b:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10017c11:	83 c4 0c             	add    esp,0xc
10017c14:	5e                   	pop    esi
10017c15:	8b e5                	mov    esp,ebp
10017c17:	5d                   	pop    ebp
10017c18:	c3                   	ret
10017c19:	8b 51 1c             	mov    edx,DWORD PTR [ecx+0x1c]
10017c1c:	8b c2                	mov    eax,edx
10017c1e:	85 c0                	test   eax,eax
10017c20:	74 0f                	je     0x10017c31
10017c22:	3b c6                	cmp    eax,esi
10017c24:	0f 84 43 01 00 00    	je     0x10017d6d
10017c2a:	8b 40 20             	mov    eax,DWORD PTR [eax+0x20]
10017c2d:	85 c0                	test   eax,eax
10017c2f:	75 f1                	jne    0x10017c22
10017c31:	89 56 20             	mov    DWORD PTR [esi+0x20],edx
10017c34:	89 71 1c             	mov    DWORD PTR [ecx+0x1c],esi
10017c37:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10017c3a:	83 b9 08 01 00 00 00 	cmp    DWORD PTR [ecx+0x108],0x0
10017c41:	75 15                	jne    0x10017c58
10017c43:	33 c0                	xor    eax,eax
10017c45:	83 b9 0c 01 00 00 04 	cmp    DWORD PTR [ecx+0x10c],0x4
10017c4c:	0f 95 c0             	setne  al
10017c4f:	83 c0 07             	add    eax,0x7
10017c52:	89 81 08 01 00 00    	mov    DWORD PTR [ecx+0x108],eax
10017c58:	8b 56 14             	mov    edx,DWORD PTR [esi+0x14]
10017c5b:	f3 0f 10 52 68       	movss  xmm2,DWORD PTR [edx+0x68]
10017c60:	0f 2e 15 34 2f 22 10 	ucomiss xmm2,DWORD PTR ds:0x10222f34
10017c67:	9f                   	lahf
10017c68:	f6 c4 44             	test   ah,0x44
10017c6b:	7a 5d                	jp     0x10017cca
10017c6d:	f3 0f 10 42 6c       	movss  xmm0,DWORD PTR [edx+0x6c]
10017c72:	0f 2e 05 38 2f 22 10 	ucomiss xmm0,DWORD PTR ds:0x10222f38
10017c79:	9f                   	lahf
10017c7a:	f6 c4 44             	test   ah,0x44
10017c7d:	7a 4b                	jp     0x10017cca
10017c7f:	f3 0f 10 42 70       	movss  xmm0,DWORD PTR [edx+0x70]
10017c84:	0f 2e 05 3c 2f 22 10 	ucomiss xmm0,DWORD PTR ds:0x10222f3c
10017c8b:	9f                   	lahf
10017c8c:	f6 c4 44             	test   ah,0x44
10017c8f:	7a 39                	jp     0x10017cca
10017c91:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
10017c94:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10017c97:	f3 0f 10 51 08       	movss  xmm2,DWORD PTR [ecx+0x8]
10017c9c:	f3 0f 10 49 0c       	movss  xmm1,DWORD PTR [ecx+0xc]
10017ca1:	f3 0f 5c 50 08       	subss  xmm2,DWORD PTR [eax+0x8]
10017ca6:	f3 0f 5c 48 0c       	subss  xmm1,DWORD PTR [eax+0xc]
10017cab:	f3 0f 10 41 10       	movss  xmm0,DWORD PTR [ecx+0x10]
10017cb0:	f3 0f 5c 40 10       	subss  xmm0,DWORD PTR [eax+0x10]
10017cb5:	0f 14 d1             	unpcklps xmm2,xmm1
10017cb8:	66 0f d6 56 24       	movq   QWORD PTR [esi+0x24],xmm2
10017cbd:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
10017cc2:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
10017cc5:	89 46 2c             	mov    DWORD PTR [esi+0x2c],eax
10017cc8:	eb 6f                	jmp    0x10017d39
10017cca:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10017ccd:	83 ec 0c             	sub    esp,0xc
10017cd0:	f3 0f 10 4a 6c       	movss  xmm1,DWORD PTR [edx+0x6c]
10017cd5:	8b cc                	mov    ecx,esp
10017cd7:	f3 0f 10 42 70       	movss  xmm0,DWORD PTR [edx+0x70]
10017cdc:	f3 0f 58 48 0c       	addss  xmm1,DWORD PTR [eax+0xc]
10017ce1:	f3 0f 58 40 10       	addss  xmm0,DWORD PTR [eax+0x10]
10017ce6:	f3 0f 58 50 08       	addss  xmm2,DWORD PTR [eax+0x8]
10017ceb:	56                   	push   esi
10017cec:	f3 0f 11 49 04       	movss  DWORD PTR [ecx+0x4],xmm1
10017cf1:	f3 0f 11 41 08       	movss  DWORD PTR [ecx+0x8],xmm0
10017cf6:	f3 0f 11 11          	movss  DWORD PTR [ecx],xmm2
10017cfa:	e8 51 c8 0a 00       	call   0x100c4550
10017cff:	8b 56 14             	mov    edx,DWORD PTR [esi+0x14]
10017d02:	83 c4 10             	add    esp,0x10
10017d05:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10017d08:	f3 0f 10 52 68       	movss  xmm2,DWORD PTR [edx+0x68]
10017d0d:	f3 0f 10 4a 6c       	movss  xmm1,DWORD PTR [edx+0x6c]
10017d12:	f3 0f 10 42 70       	movss  xmm0,DWORD PTR [edx+0x70]
10017d17:	f3 0f 58 56 68       	addss  xmm2,DWORD PTR [esi+0x68]
10017d1c:	f3 0f 58 4e 6c       	addss  xmm1,DWORD PTR [esi+0x6c]
10017d21:	f3 0f 58 46 70       	addss  xmm0,DWORD PTR [esi+0x70]
10017d26:	0f 14 d1             	unpcklps xmm2,xmm1
10017d29:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
10017d2e:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
10017d31:	66 0f d6 56 68       	movq   QWORD PTR [esi+0x68],xmm2
10017d36:	89 46 70             	mov    DWORD PTR [esi+0x70],eax
10017d39:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
10017d3c:	f3 0f 10 51 50       	movss  xmm2,DWORD PTR [ecx+0x50]
10017d41:	f3 0f 10 49 54       	movss  xmm1,DWORD PTR [ecx+0x54]
10017d46:	f3 0f 10 41 58       	movss  xmm0,DWORD PTR [ecx+0x58]
10017d4b:	f3 0f 5c 50 50       	subss  xmm2,DWORD PTR [eax+0x50]
10017d50:	f3 0f 5c 48 54       	subss  xmm1,DWORD PTR [eax+0x54]
10017d55:	f3 0f 5c 40 58       	subss  xmm0,DWORD PTR [eax+0x58]
10017d5a:	0f 14 d1             	unpcklps xmm2,xmm1
10017d5d:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
10017d62:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
10017d65:	66 0f d6 56 30       	movq   QWORD PTR [esi+0x30],xmm2
10017d6a:	89 46 38             	mov    DWORD PTR [esi+0x38],eax
10017d6d:	5e                   	pop    esi
10017d6e:	8b e5                	mov    esp,ebp
10017d70:	5d                   	pop    ebp
10017d71:	c3                   	ret
