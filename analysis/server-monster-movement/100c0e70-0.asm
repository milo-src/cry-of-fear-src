
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c0e70 <.text+0xbfe70>:
100c0e70:	55                   	push   ebp
100c0e71:	8b ec                	mov    ebp,esp
100c0e73:	51                   	push   ecx
100c0e74:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c0e79:	53                   	push   ebx
100c0e7a:	56                   	push   esi
100c0e7b:	57                   	push   edi
100c0e7c:	8b 90 98 00 00 00    	mov    edx,DWORD PTR [eax+0x98]
100c0e82:	8b f9                	mov    edi,ecx
100c0e84:	be cc 21 1a 10       	mov    esi,0x101a21cc
100c0e89:	8b 5f 04             	mov    ebx,DWORD PTR [edi+0x4]
100c0e8c:	03 13                	add    edx,DWORD PTR [ebx]
100c0e8e:	8b c2                	mov    eax,edx
100c0e90:	8a 08                	mov    cl,BYTE PTR [eax]
100c0e92:	3a 0e                	cmp    cl,BYTE PTR [esi]
100c0e94:	75 1a                	jne    0x100c0eb0
100c0e96:	84 c9                	test   cl,cl
100c0e98:	74 12                	je     0x100c0eac
100c0e9a:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
100c0e9d:	3a 4e 01             	cmp    cl,BYTE PTR [esi+0x1]
100c0ea0:	75 0e                	jne    0x100c0eb0
100c0ea2:	83 c0 02             	add    eax,0x2
100c0ea5:	83 c6 02             	add    esi,0x2
100c0ea8:	84 c9                	test   cl,cl
100c0eaa:	75 e4                	jne    0x100c0e90
100c0eac:	33 c0                	xor    eax,eax
100c0eae:	eb 05                	jmp    0x100c0eb5
100c0eb0:	1b c0                	sbb    eax,eax
100c0eb2:	83 c8 01             	or     eax,0x1
100c0eb5:	85 c0                	test   eax,eax
100c0eb7:	75 0d                	jne    0x100c0ec6
100c0eb9:	83 bb 10 01 00 00 01 	cmp    DWORD PTR [ebx+0x110],0x1
100c0ec0:	0f 84 7a 01 00 00    	je     0x100c1040
100c0ec6:	b8 0c 22 1a 10       	mov    eax,0x101a220c
100c0ecb:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100c0ed0:	8a 0a                	mov    cl,BYTE PTR [edx]
100c0ed2:	3a 08                	cmp    cl,BYTE PTR [eax]
100c0ed4:	75 1a                	jne    0x100c0ef0
100c0ed6:	84 c9                	test   cl,cl
100c0ed8:	74 12                	je     0x100c0eec
100c0eda:	8a 4a 01             	mov    cl,BYTE PTR [edx+0x1]
100c0edd:	3a 48 01             	cmp    cl,BYTE PTR [eax+0x1]
100c0ee0:	75 0e                	jne    0x100c0ef0
100c0ee2:	83 c2 02             	add    edx,0x2
100c0ee5:	83 c0 02             	add    eax,0x2
100c0ee8:	84 c9                	test   cl,cl
100c0eea:	75 e4                	jne    0x100c0ed0
100c0eec:	33 c0                	xor    eax,eax
100c0eee:	eb 05                	jmp    0x100c0ef5
100c0ef0:	1b c0                	sbb    eax,eax
100c0ef2:	83 c8 01             	or     eax,0x1
100c0ef5:	85 c0                	test   eax,eax
100c0ef7:	75 0d                	jne    0x100c0f06
100c0ef9:	83 bb 10 01 00 00 01 	cmp    DWORD PTR [ebx+0x110],0x1
100c0f00:	0f 84 3a 01 00 00    	je     0x100c1040
100c0f06:	83 bb 30 01 00 00 00 	cmp    DWORD PTR [ebx+0x130],0x0
100c0f0d:	0f 84 94 00 00 00    	je     0x100c0fa7
100c0f13:	f3 0f 10 8f f0 00 00 	movss  xmm1,DWORD PTR [edi+0xf0]
100c0f1a:	00 
100c0f1b:	f3 0f 59 4d 10       	mulss  xmm1,DWORD PTR [ebp+0x10]
100c0f20:	0f 5a c1             	cvtps2pd xmm0,xmm1
100c0f23:	f3 0f 11 4d 10       	movss  DWORD PTR [ebp+0x10],xmm1
100c0f28:	66 0f 2f 05 e0 1d 1a 	comisd xmm0,QWORD PTR ds:0x101a1de0
100c0f2f:	10 
100c0f30:	0f 86 0a 01 00 00    	jbe    0x100c1040
100c0f36:	66 66 0f 1f 84 00 00 	data16 nop WORD PTR [eax+eax*1+0x0]
100c0f3d:	00 00 00 
100c0f40:	8b 87 bc 02 00 00    	mov    eax,DWORD PTR [edi+0x2bc]
100c0f46:	0f 5a c1             	cvtps2pd xmm0,xmm1
100c0f49:	c1 e0 04             	shl    eax,0x4
100c0f4c:	05 38 02 00 00       	add    eax,0x238
100c0f51:	03 c7                	add    eax,edi
100c0f53:	6a 01                	push   0x1
100c0f55:	51                   	push   ecx
100c0f56:	f2 0f 10 0d 00 47 1a 	movsd  xmm1,QWORD PTR ds:0x101a4700
100c0f5d:	10 
100c0f5e:	f2 0f 5d c8          	minsd  xmm1,xmm0
100c0f62:	66 0f 5a c1          	cvtpd2ps xmm0,xmm1
100c0f66:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100c0f6b:	50                   	push   eax
100c0f6c:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100c0f6f:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
100c0f74:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100c0f7a:	e8 a1 84 05 00       	call   0x10119420
100c0f7f:	f3 0f 10 4d 10       	movss  xmm1,DWORD PTR [ebp+0x10]
100c0f84:	83 c4 10             	add    esp,0x10
100c0f87:	f3 0f 5c 4d fc       	subss  xmm1,DWORD PTR [ebp-0x4]
100c0f8c:	0f 5a c1             	cvtps2pd xmm0,xmm1
100c0f8f:	f3 0f 11 4d 10       	movss  DWORD PTR [ebp+0x10],xmm1
100c0f94:	66 0f 2f 05 e0 1d 1a 	comisd xmm0,QWORD PTR ds:0x101a1de0
100c0f9b:	10 
100c0f9c:	77 a2                	ja     0x100c0f40
100c0f9e:	5f                   	pop    edi
100c0f9f:	5e                   	pop    esi
100c0fa0:	5b                   	pop    ebx
100c0fa1:	8b e5                	mov    esp,ebp
100c0fa3:	5d                   	pop    ebp
100c0fa4:	c2 0c 00             	ret    0xc
100c0fa7:	8b 87 d0 02 00 00    	mov    eax,DWORD PTR [edi+0x2d0]
100c0fad:	39 87 18 02 00 00    	cmp    DWORD PTR [edi+0x218],eax
100c0fb3:	74 06                	je     0x100c0fbb
100c0fb5:	89 87 18 02 00 00    	mov    DWORD PTR [edi+0x218],eax
100c0fbb:	f3 0f 10 8b 3c 01 00 	movss  xmm1,DWORD PTR [ebx+0x13c]
100c0fc2:	00 
100c0fc3:	f3 0f 59 8f f0 00 00 	mulss  xmm1,DWORD PTR [edi+0xf0]
100c0fca:	00 
100c0fcb:	f3 0f 59 4d 10       	mulss  xmm1,DWORD PTR [ebp+0x10]
100c0fd0:	0f 5a c1             	cvtps2pd xmm0,xmm1
100c0fd3:	f3 0f 11 4d 10       	movss  DWORD PTR [ebp+0x10],xmm1
100c0fd8:	66 0f 2f 05 e0 1d 1a 	comisd xmm0,QWORD PTR ds:0x101a1de0
100c0fdf:	10 
100c0fe0:	76 5e                	jbe    0x100c1040
100c0fe2:	8b 87 bc 02 00 00    	mov    eax,DWORD PTR [edi+0x2bc]
100c0fe8:	0f 5a c1             	cvtps2pd xmm0,xmm1
100c0feb:	c1 e0 04             	shl    eax,0x4
100c0fee:	05 38 02 00 00       	add    eax,0x238
100c0ff3:	03 c7                	add    eax,edi
100c0ff5:	6a 00                	push   0x0
100c0ff7:	51                   	push   ecx
100c0ff8:	f2 0f 10 0d 00 47 1a 	movsd  xmm1,QWORD PTR ds:0x101a4700
100c0fff:	10 
100c1000:	f2 0f 5d c8          	minsd  xmm1,xmm0
100c1004:	66 0f 5a c1          	cvtpd2ps xmm0,xmm1
100c1008:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100c100d:	50                   	push   eax
100c100e:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100c1011:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
100c1016:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100c101c:	e8 ff 83 05 00       	call   0x10119420
100c1021:	f3 0f 10 4d 10       	movss  xmm1,DWORD PTR [ebp+0x10]
100c1026:	83 c4 10             	add    esp,0x10
100c1029:	f3 0f 5c 4d fc       	subss  xmm1,DWORD PTR [ebp-0x4]
100c102e:	0f 5a c1             	cvtps2pd xmm0,xmm1
100c1031:	f3 0f 11 4d 10       	movss  DWORD PTR [ebp+0x10],xmm1
100c1036:	66 0f 2f 05 e0 1d 1a 	comisd xmm0,QWORD PTR ds:0x101a1de0
100c103d:	10 
100c103e:	77 a2                	ja     0x100c0fe2
100c1040:	5f                   	pop    edi
100c1041:	5e                   	pop    esi
100c1042:	5b                   	pop    ebx
100c1043:	8b e5                	mov    esp,ebp
100c1045:	5d                   	pop    ebp
100c1046:	c2 0c 00             	ret    0xc
