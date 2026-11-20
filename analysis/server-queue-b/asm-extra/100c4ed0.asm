
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c4ed0 <.text+0xc3ed0>:
100c4ed0:	55                   	push   ebp
100c4ed1:	8b ec                	mov    ebp,esp
100c4ed3:	83 ec 1c             	sub    esp,0x1c
100c4ed6:	53                   	push   ebx
100c4ed7:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
100c4eda:	56                   	push   esi
100c4edb:	57                   	push   edi
100c4edc:	8b 43 14             	mov    eax,DWORD PTR [ebx+0x14]
100c4edf:	85 c0                	test   eax,eax
100c4ee1:	74 37                	je     0x100c4f1a
100c4ee3:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100c4ee6:	f3 0f 10 40 20       	movss  xmm0,DWORD PTR [eax+0x20]
100c4eeb:	f3 0f 10 48 24       	movss  xmm1,DWORD PTR [eax+0x24]
100c4ef0:	f3 0f 10 50 28       	movss  xmm2,DWORD PTR [eax+0x28]
100c4ef5:	f3 0f 58 45 0c       	addss  xmm0,DWORD PTR [ebp+0xc]
100c4efa:	f3 0f 58 4d 10       	addss  xmm1,DWORD PTR [ebp+0x10]
100c4eff:	f3 0f 58 55 14       	addss  xmm2,DWORD PTR [ebp+0x14]
100c4f04:	f3 0f 11 45 e4       	movss  DWORD PTR [ebp-0x1c],xmm0
100c4f09:	f3 0f 11 4d e8       	movss  DWORD PTR [ebp-0x18],xmm1
100c4f0e:	f3 0f 7e 5d e4       	movq   xmm3,QWORD PTR [ebp-0x1c]
100c4f13:	f3 0f 11 55 ec       	movss  DWORD PTR [ebp-0x14],xmm2
100c4f18:	eb 1f                	jmp    0x100c4f39
100c4f1a:	f3 0f 7e 5d 0c       	movq   xmm3,QWORD PTR [ebp+0xc]
100c4f1f:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
100c4f22:	66 0f d6 5d e4       	movq   QWORD PTR [ebp-0x1c],xmm3
100c4f27:	f3 0f 10 4d e8       	movss  xmm1,DWORD PTR [ebp-0x18]
100c4f2c:	f3 0f 10 45 e4       	movss  xmm0,DWORD PTR [ebp-0x1c]
100c4f31:	89 45 ec             	mov    DWORD PTR [ebp-0x14],eax
100c4f34:	f3 0f 10 55 ec       	movss  xmm2,DWORD PTR [ebp-0x14]
100c4f39:	8b 73 1c             	mov    esi,DWORD PTR [ebx+0x1c]
100c4f3c:	f3 0f 11 45 08       	movss  DWORD PTR [ebp+0x8],xmm0
100c4f41:	f3 0f 11 4d fc       	movss  DWORD PTR [ebp-0x4],xmm1
100c4f46:	f3 0f 11 55 f8       	movss  DWORD PTR [ebp-0x8],xmm2
100c4f4b:	66 0f d6 5d f0       	movq   QWORD PTR [ebp-0x10],xmm3
100c4f50:	85 f6                	test   esi,esi
100c4f52:	74 57                	je     0x100c4fab
100c4f54:	bf 64 00 00 00       	mov    edi,0x64
100c4f59:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100c4f60:	6a 64                	push   0x64
100c4f62:	83 ec 0c             	sub    esp,0xc
100c4f65:	8b c4                	mov    eax,esp
100c4f67:	56                   	push   esi
100c4f68:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
100c4f6c:	f3 0f 11 48 04       	movss  DWORD PTR [eax+0x4],xmm1
100c4f71:	f3 0f 11 50 08       	movss  DWORD PTR [eax+0x8],xmm2
100c4f76:	e8 35 fe ff ff       	call   0x100c4db0
100c4f7b:	8b 76 20             	mov    esi,DWORD PTR [esi+0x20]
100c4f7e:	4f                   	dec    edi
100c4f7f:	83 c4 14             	add    esp,0x14
100c4f82:	85 ff                	test   edi,edi
100c4f84:	7e 15                	jle    0x100c4f9b
100c4f86:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
100c4f8b:	f3 0f 10 4d fc       	movss  xmm1,DWORD PTR [ebp-0x4]
100c4f90:	f3 0f 10 55 f8       	movss  xmm2,DWORD PTR [ebp-0x8]
100c4f95:	85 f6                	test   esi,esi
100c4f97:	75 c7                	jne    0x100c4f60
100c4f99:	eb 10                	jmp    0x100c4fab
100c4f9b:	68 e0 5e 1d 10       	push   0x101d5ee0
100c4fa0:	6a 04                	push   0x4
100c4fa2:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c4fa8:	83 c4 08             	add    esp,0x8
100c4fab:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100c4fae:	f3 0f 7e 45 f0       	movq   xmm0,QWORD PTR [ebp-0x10]
100c4fb3:	8b 4d ec             	mov    ecx,DWORD PTR [ebp-0x14]
100c4fb6:	5f                   	pop    edi
100c4fb7:	5e                   	pop    esi
100c4fb8:	66 0f d6 40 20       	movq   QWORD PTR [eax+0x20],xmm0
100c4fbd:	89 48 28             	mov    DWORD PTR [eax+0x28],ecx
100c4fc0:	5b                   	pop    ebx
100c4fc1:	8b e5                	mov    esp,ebp
100c4fc3:	5d                   	pop    ebp
100c4fc4:	c3                   	ret
