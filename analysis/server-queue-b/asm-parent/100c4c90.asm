
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c4c90 <.text+0xc3c90>:
100c4c90:	55                   	push   ebp
100c4c91:	8b ec                	mov    ebp,esp
100c4c93:	83 ec 14             	sub    esp,0x14
100c4c96:	53                   	push   ebx
100c4c97:	8b 5d 18             	mov    ebx,DWORD PTR [ebp+0x18]
100c4c9a:	56                   	push   esi
100c4c9b:	57                   	push   edi
100c4c9c:	85 db                	test   ebx,ebx
100c4c9e:	7f 17                	jg     0x100c4cb7
100c4ca0:	68 54 5e 1d 10       	push   0x101d5e54
100c4ca5:	6a 04                	push   0x4
100c4ca7:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c4cad:	83 c4 08             	add    esp,0x8
100c4cb0:	5f                   	pop    edi
100c4cb1:	5e                   	pop    esi
100c4cb2:	5b                   	pop    ebx
100c4cb3:	8b e5                	mov    esp,ebp
100c4cb5:	5d                   	pop    ebp
100c4cb6:	c3                   	ret
100c4cb7:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100c4cba:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
100c4cbd:	85 c9                	test   ecx,ecx
100c4cbf:	75 17                	jne    0x100c4cd8
100c4cc1:	68 14 5f 1d 10       	push   0x101d5f14
100c4cc6:	6a 04                	push   0x4
100c4cc8:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c4cce:	83 c4 08             	add    esp,0x8
100c4cd1:	5f                   	pop    edi
100c4cd2:	5e                   	pop    esi
100c4cd3:	5b                   	pop    ebx
100c4cd4:	8b e5                	mov    esp,ebp
100c4cd6:	5d                   	pop    ebp
100c4cd7:	c3                   	ret
100c4cd8:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c4cdb:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
100c4cde:	f3 0f 10 5d 0c       	movss  xmm3,DWORD PTR [ebp+0xc]
100c4ce3:	8b 76 1c             	mov    esi,DWORD PTR [esi+0x1c]
100c4ce6:	f3 0f 10 40 5c       	movss  xmm0,DWORD PTR [eax+0x5c]
100c4ceb:	f3 0f 10 48 60       	movss  xmm1,DWORD PTR [eax+0x60]
100c4cf0:	f3 0f 10 50 64       	movss  xmm2,DWORD PTR [eax+0x64]
100c4cf5:	f3 0f 5c 41 5c       	subss  xmm0,DWORD PTR [ecx+0x5c]
100c4cfa:	f3 0f 5c 49 60       	subss  xmm1,DWORD PTR [ecx+0x60]
100c4cff:	f3 0f 5c 51 64       	subss  xmm2,DWORD PTR [ecx+0x64]
100c4d04:	f3 0f 58 d8          	addss  xmm3,xmm0
100c4d08:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
100c4d0d:	f3 0f 58 c1          	addss  xmm0,xmm1
100c4d11:	f3 0f 10 4d 14       	movss  xmm1,DWORD PTR [ebp+0x14]
100c4d16:	f3 0f 58 ca          	addss  xmm1,xmm2
100c4d1a:	f3 0f 11 5d 18       	movss  DWORD PTR [ebp+0x18],xmm3
100c4d1f:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
100c4d24:	f3 0f 11 4d f8       	movss  DWORD PTR [ebp-0x8],xmm1
100c4d29:	f3 0f 11 5d ec       	movss  DWORD PTR [ebp-0x14],xmm3
100c4d2e:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
100c4d33:	f3 0f 11 4d f4       	movss  DWORD PTR [ebp-0xc],xmm1
100c4d38:	85 f6                	test   esi,esi
100c4d3a:	74 50                	je     0x100c4d8c
100c4d3c:	bf 64 00 00 00       	mov    edi,0x64
100c4d41:	4b                   	dec    ebx
100c4d42:	53                   	push   ebx
100c4d43:	83 ec 0c             	sub    esp,0xc
100c4d46:	8b c4                	mov    eax,esp
100c4d48:	56                   	push   esi
100c4d49:	f3 0f 11 18          	movss  DWORD PTR [eax],xmm3
100c4d4d:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
100c4d52:	f3 0f 11 48 08       	movss  DWORD PTR [eax+0x8],xmm1
100c4d57:	e8 34 ff ff ff       	call   0x100c4c90
100c4d5c:	8b 76 20             	mov    esi,DWORD PTR [esi+0x20]
100c4d5f:	4f                   	dec    edi
100c4d60:	83 c4 14             	add    esp,0x14
100c4d63:	85 ff                	test   edi,edi
100c4d65:	7e 15                	jle    0x100c4d7c
100c4d67:	f3 0f 10 5d 18       	movss  xmm3,DWORD PTR [ebp+0x18]
100c4d6c:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
100c4d71:	f3 0f 10 4d f8       	movss  xmm1,DWORD PTR [ebp-0x8]
100c4d76:	85 f6                	test   esi,esi
100c4d78:	75 c8                	jne    0x100c4d42
100c4d7a:	eb 10                	jmp    0x100c4d8c
100c4d7c:	68 a4 5e 1d 10       	push   0x101d5ea4
100c4d81:	6a 04                	push   0x4
100c4d83:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c4d89:	83 c4 08             	add    esp,0x8
100c4d8c:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
100c4d8f:	f3 0f 7e 45 ec       	movq   xmm0,QWORD PTR [ebp-0x14]
100c4d94:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
100c4d97:	5f                   	pop    edi
100c4d98:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
100c4d9b:	5e                   	pop    esi
100c4d9c:	5b                   	pop    ebx
100c4d9d:	66 0f d6 41 5c       	movq   QWORD PTR [ecx+0x5c],xmm0
100c4da2:	89 41 64             	mov    DWORD PTR [ecx+0x64],eax
100c4da5:	8b e5                	mov    esp,ebp
100c4da7:	5d                   	pop    ebp
100c4da8:	c3                   	ret
