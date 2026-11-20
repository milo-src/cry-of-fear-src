
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\client.dll:     file format pei-i386


Disassembly of section .text:

1007fad0 <.text+0x7ead0>:
1007fad0:	a1 a4 40 54 10       	mov    eax,ds:0x105440a4
1007fad5:	85 c0                	test   eax,eax
1007fad7:	74 0c                	je     0x1007fae5
1007fad9:	83 b8 bc 00 00 00 00 	cmp    DWORD PTR [eax+0xbc],0x0
1007fae0:	74 03                	je     0x1007fae5
1007fae2:	b0 01                	mov    al,0x1
1007fae4:	c3                   	ret
1007fae5:	32 c0                	xor    al,al
1007fae7:	c3                   	ret
1007fae8:	cc                   	int3
1007fae9:	cc                   	int3
1007faea:	cc                   	int3
1007faeb:	cc                   	int3
1007faec:	cc                   	int3
1007faed:	cc                   	int3
1007faee:	cc                   	int3
1007faef:	cc                   	int3
1007faf0:	55                   	push   ebp
1007faf1:	8b ec                	mov    ebp,esp
1007faf3:	8b 0d a4 40 54 10    	mov    ecx,DWORD PTR ds:0x105440a4
1007faf9:	85 c9                	test   ecx,ecx
1007fafb:	74 08                	je     0x1007fb05
1007fafd:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1007fb00:	e8 4b 02 00 00       	call   0x1007fd50
1007fb05:	5d                   	pop    ebp
1007fb06:	c3                   	ret
1007fb07:	cc                   	int3
1007fb08:	cc                   	int3
1007fb09:	cc                   	int3
1007fb0a:	cc                   	int3
1007fb0b:	cc                   	int3
1007fb0c:	cc                   	int3
1007fb0d:	cc                   	int3
1007fb0e:	cc                   	int3
1007fb0f:	cc                   	int3
1007fb10:	55                   	push   ebp
1007fb11:	8b ec                	mov    ebp,esp
1007fb13:	8b 0d a4 40 54 10    	mov    ecx,DWORD PTR ds:0x105440a4
1007fb19:	85 c9                	test   ecx,ecx
1007fb1b:	74 30                	je     0x1007fb4d
1007fb1d:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
1007fb22:	83 ec 0c             	sub    esp,0xc
1007fb25:	8b c4                	mov    eax,esp
1007fb27:	ff 75 10             	push   DWORD PTR [ebp+0x10]
1007fb2a:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
1007fb2e:	f3 0f 10 45 18       	movss  xmm0,DWORD PTR [ebp+0x18]
1007fb33:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1007fb36:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
1007fb3b:	f3 0f 10 45 1c       	movss  xmm0,DWORD PTR [ebp+0x1c]
1007fb40:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1007fb43:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
1007fb48:	e8 c3 08 00 00       	call   0x10080410
1007fb4d:	5d                   	pop    ebp
1007fb4e:	c3                   	ret
1007fb4f:	cc                   	int3
1007fb50:	55                   	push   ebp
1007fb51:	8b ec                	mov    ebp,esp
1007fb53:	a1 a4 40 54 10       	mov    eax,ds:0x105440a4
1007fb58:	85 c0                	test   eax,eax
1007fb5a:	74 4b                	je     0x1007fba7
1007fb5c:	f3 0f 10 4d 08       	movss  xmm1,DWORD PTR [ebp+0x8]
1007fb61:	0f 57 c0             	xorps  xmm0,xmm0
1007fb64:	0f 2f c8             	comiss xmm1,xmm0
1007fb67:	72 08                	jb     0x1007fb71
1007fb69:	f3 0f 11 88 cc 00 00 	movss  DWORD PTR [eax+0xcc],xmm1
1007fb70:	00 
1007fb71:	f3 0f 10 4d 0c       	movss  xmm1,DWORD PTR [ebp+0xc]
1007fb76:	0f 2f c8             	comiss xmm1,xmm0
1007fb79:	72 08                	jb     0x1007fb83
1007fb7b:	f3 0f 11 88 d0 00 00 	movss  DWORD PTR [eax+0xd0],xmm1
1007fb82:	00 
1007fb83:	f3 0f 10 4d 10       	movss  xmm1,DWORD PTR [ebp+0x10]
1007fb88:	0f 2f c8             	comiss xmm1,xmm0
1007fb8b:	72 08                	jb     0x1007fb95
1007fb8d:	f3 0f 11 88 d4 00 00 	movss  DWORD PTR [eax+0xd4],xmm1
1007fb94:	00 
1007fb95:	f3 0f 10 4d 14       	movss  xmm1,DWORD PTR [ebp+0x14]
1007fb9a:	0f 2f c8             	comiss xmm1,xmm0
1007fb9d:	72 08                	jb     0x1007fba7
1007fb9f:	f3 0f 11 88 d8 00 00 	movss  DWORD PTR [eax+0xd8],xmm1
1007fba6:	00 
1007fba7:	5d                   	pop    ebp
1007fba8:	c3                   	ret
1007fba9:	cc                   	int3
1007fbaa:	cc                   	int3
1007fbab:	cc                   	int3
1007fbac:	cc                   	int3
1007fbad:	cc                   	int3
1007fbae:	cc                   	int3
1007fbaf:	cc                   	int3
1007fbb0:	55                   	push   ebp
1007fbb1:	8b ec                	mov    ebp,esp
1007fbb3:	8b 0d a4 40 54 10    	mov    ecx,DWORD PTR ds:0x105440a4
1007fbb9:	85 c9                	test   ecx,ecx
1007fbbb:	74 09                	je     0x1007fbc6
1007fbbd:	8a 45 08             	mov    al,BYTE PTR [ebp+0x8]
1007fbc0:	88 81 dc 00 00 00    	mov    BYTE PTR [ecx+0xdc],al
1007fbc6:	5d                   	pop    ebp
1007fbc7:	c3                   	ret
1007fbc8:	cc                   	int3
1007fbc9:	cc                   	int3
1007fbca:	cc                   	int3
1007fbcb:	cc                   	int3
1007fbcc:	cc                   	int3
1007fbcd:	cc                   	int3
1007fbce:	cc                   	int3
1007fbcf:	cc                   	int3
1007fbd0:	55                   	push   ebp
1007fbd1:	8b ec                	mov    ebp,esp
1007fbd3:	8b 0d a4 40 54 10    	mov    ecx,DWORD PTR ds:0x105440a4
1007fbd9:	85 c9                	test   ecx,ecx
1007fbdb:	74 08                	je     0x1007fbe5
1007fbdd:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1007fbe0:	e8 2b 0b 00 00       	call   0x10080710
1007fbe5:	5d                   	pop    ebp
1007fbe6:	c3                   	ret
1007fbe7:	cc                   	int3
1007fbe8:	cc                   	int3
1007fbe9:	cc                   	int3
1007fbea:	cc                   	int3
1007fbeb:	cc                   	int3
1007fbec:	cc                   	int3
1007fbed:	cc                   	int3
1007fbee:	cc                   	int3
1007fbef:	cc                   	int3
1007fbf0:	55                   	push   ebp
1007fbf1:	8b ec                	mov    ebp,esp
1007fbf3:	8b 0d a4 40 54 10    	mov    ecx,DWORD PTR ds:0x105440a4
1007fbf9:	85 c9                	test   ecx,ecx
1007fbfb:	74 09                	je     0x1007fc06
1007fbfd:	8a 45 08             	mov    al,BYTE PTR [ebp+0x8]
1007fc00:	88 81 dd 00 00 00    	mov    BYTE PTR [ecx+0xdd],al
1007fc06:	5d                   	pop    ebp
1007fc07:	c3                   	ret
1007fc08:	cc                   	int3
1007fc09:	cc                   	int3
1007fc0a:	cc                   	int3
1007fc0b:	cc                   	int3
1007fc0c:	cc                   	int3
1007fc0d:	cc                   	int3
1007fc0e:	cc                   	int3
1007fc0f:	cc                   	int3
1007fc10:	55                   	push   ebp
1007fc11:	8b ec                	mov    ebp,esp
1007fc13:	8b 0d a4 40 54 10    	mov    ecx,DWORD PTR ds:0x105440a4
1007fc19:	85 c9                	test   ecx,ecx
1007fc1b:	74 10                	je     0x1007fc2d
1007fc1d:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
1007fc22:	51                   	push   ecx
1007fc23:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1007fc28:	e8 53 0b 00 00       	call   0x10080780
1007fc2d:	5d                   	pop    ebp
1007fc2e:	c3                   	ret
1007fc2f:	cc                   	int3
