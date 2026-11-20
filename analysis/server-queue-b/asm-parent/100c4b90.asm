
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c4b90 <.text+0xc3b90>:
100c4b90:	55                   	push   ebp
100c4b91:	8b ec                	mov    ebp,esp
100c4b93:	83 ec 1c             	sub    esp,0x1c
100c4b96:	53                   	push   ebx
100c4b97:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
100c4b9a:	56                   	push   esi
100c4b9b:	57                   	push   edi
100c4b9c:	8b 43 14             	mov    eax,DWORD PTR [ebx+0x14]
100c4b9f:	85 c0                	test   eax,eax
100c4ba1:	74 37                	je     0x100c4bda
100c4ba3:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100c4ba6:	f3 0f 10 40 5c       	movss  xmm0,DWORD PTR [eax+0x5c]
100c4bab:	f3 0f 10 48 60       	movss  xmm1,DWORD PTR [eax+0x60]
100c4bb0:	f3 0f 10 50 64       	movss  xmm2,DWORD PTR [eax+0x64]
100c4bb5:	f3 0f 58 45 0c       	addss  xmm0,DWORD PTR [ebp+0xc]
100c4bba:	f3 0f 58 4d 10       	addss  xmm1,DWORD PTR [ebp+0x10]
100c4bbf:	f3 0f 58 55 14       	addss  xmm2,DWORD PTR [ebp+0x14]
100c4bc4:	f3 0f 11 45 e4       	movss  DWORD PTR [ebp-0x1c],xmm0
100c4bc9:	f3 0f 11 4d e8       	movss  DWORD PTR [ebp-0x18],xmm1
100c4bce:	f3 0f 7e 5d e4       	movq   xmm3,QWORD PTR [ebp-0x1c]
100c4bd3:	f3 0f 11 55 ec       	movss  DWORD PTR [ebp-0x14],xmm2
100c4bd8:	eb 1f                	jmp    0x100c4bf9
100c4bda:	f3 0f 7e 5d 0c       	movq   xmm3,QWORD PTR [ebp+0xc]
100c4bdf:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
100c4be2:	66 0f d6 5d e4       	movq   QWORD PTR [ebp-0x1c],xmm3
100c4be7:	f3 0f 10 4d e8       	movss  xmm1,DWORD PTR [ebp-0x18]
100c4bec:	f3 0f 10 45 e4       	movss  xmm0,DWORD PTR [ebp-0x1c]
100c4bf1:	89 45 ec             	mov    DWORD PTR [ebp-0x14],eax
100c4bf4:	f3 0f 10 55 ec       	movss  xmm2,DWORD PTR [ebp-0x14]
100c4bf9:	8b 73 1c             	mov    esi,DWORD PTR [ebx+0x1c]
100c4bfc:	f3 0f 11 45 08       	movss  DWORD PTR [ebp+0x8],xmm0
100c4c01:	f3 0f 11 4d fc       	movss  DWORD PTR [ebp-0x4],xmm1
100c4c06:	f3 0f 11 55 f8       	movss  DWORD PTR [ebp-0x8],xmm2
100c4c0b:	66 0f d6 5d f0       	movq   QWORD PTR [ebp-0x10],xmm3
100c4c10:	85 f6                	test   esi,esi
100c4c12:	74 57                	je     0x100c4c6b
100c4c14:	bf 64 00 00 00       	mov    edi,0x64
100c4c19:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100c4c20:	6a 64                	push   0x64
100c4c22:	83 ec 0c             	sub    esp,0xc
100c4c25:	8b c4                	mov    eax,esp
100c4c27:	56                   	push   esi
100c4c28:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
100c4c2c:	f3 0f 11 48 04       	movss  DWORD PTR [eax+0x4],xmm1
100c4c31:	f3 0f 11 50 08       	movss  DWORD PTR [eax+0x8],xmm2
100c4c36:	e8 55 00 00 00       	call   0x100c4c90
100c4c3b:	8b 76 20             	mov    esi,DWORD PTR [esi+0x20]
100c4c3e:	4f                   	dec    edi
100c4c3f:	83 c4 14             	add    esp,0x14
100c4c42:	85 ff                	test   edi,edi
100c4c44:	7e 15                	jle    0x100c4c5b
100c4c46:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
100c4c4b:	f3 0f 10 4d fc       	movss  xmm1,DWORD PTR [ebp-0x4]
100c4c50:	f3 0f 10 55 f8       	movss  xmm2,DWORD PTR [ebp-0x8]
100c4c55:	85 f6                	test   esi,esi
100c4c57:	75 c7                	jne    0x100c4c20
100c4c59:	eb 10                	jmp    0x100c4c6b
100c4c5b:	68 40 5f 1d 10       	push   0x101d5f40
100c4c60:	6a 04                	push   0x4
100c4c62:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c4c68:	83 c4 08             	add    esp,0x8
100c4c6b:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100c4c6e:	f3 0f 7e 45 f0       	movq   xmm0,QWORD PTR [ebp-0x10]
100c4c73:	8b 4d ec             	mov    ecx,DWORD PTR [ebp-0x14]
100c4c76:	5f                   	pop    edi
100c4c77:	5e                   	pop    esi
100c4c78:	66 0f d6 40 5c       	movq   QWORD PTR [eax+0x5c],xmm0
100c4c7d:	89 48 64             	mov    DWORD PTR [eax+0x64],ecx
100c4c80:	5b                   	pop    ebx
100c4c81:	8b e5                	mov    esp,ebp
100c4c83:	5d                   	pop    ebp
100c4c84:	c3                   	ret
