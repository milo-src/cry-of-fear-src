
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10102dd0 <.text+0x101dd0>:
10102dd0:	55                   	push   ebp
10102dd1:	8b ec                	mov    ebp,esp
10102dd3:	83 ec 0c             	sub    esp,0xc
10102dd6:	56                   	push   esi
10102dd7:	ff 75 10             	push   DWORD PTR [ebp+0x10]
10102dda:	8b f1                	mov    esi,ecx
10102ddc:	e8 6f 55 f1 ff       	call   0x10018350
10102de1:	85 c0                	test   eax,eax
10102de3:	0f 84 69 01 00 00    	je     0x10102f52
10102de9:	8b 56 14             	mov    edx,DWORD PTR [esi+0x14]
10102dec:	85 d2                	test   edx,edx
10102dee:	74 3c                	je     0x10102e2c
10102df0:	8b 4a 1c             	mov    ecx,DWORD PTR [edx+0x1c]
10102df3:	3b ce                	cmp    ecx,esi
10102df5:	75 08                	jne    0x10102dff
10102df7:	8b 46 20             	mov    eax,DWORD PTR [esi+0x20]
10102dfa:	89 42 1c             	mov    DWORD PTR [edx+0x1c],eax
10102dfd:	eb 1f                	jmp    0x10102e1e
10102dff:	8b 41 20             	mov    eax,DWORD PTR [ecx+0x20]
10102e02:	85 c0                	test   eax,eax
10102e04:	74 0d                	je     0x10102e13
10102e06:	3b c6                	cmp    eax,esi
10102e08:	74 09                	je     0x10102e13
10102e0a:	8b c8                	mov    ecx,eax
10102e0c:	8b 41 20             	mov    eax,DWORD PTR [ecx+0x20]
10102e0f:	85 c0                	test   eax,eax
10102e11:	75 f3                	jne    0x10102e06
10102e13:	39 71 20             	cmp    DWORD PTR [ecx+0x20],esi
10102e16:	75 35                	jne    0x10102e4d
10102e18:	8b 46 20             	mov    eax,DWORD PTR [esi+0x20]
10102e1b:	89 41 20             	mov    DWORD PTR [ecx+0x20],eax
10102e1e:	c7 46 14 00 00 00 00 	mov    DWORD PTR [esi+0x14],0x0
10102e25:	c7 46 20 00 00 00 00 	mov    DWORD PTR [esi+0x20],0x0
10102e2c:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10102e2f:	8b 81 a4 01 00 00    	mov    eax,DWORD PTR [ecx+0x1a4]
10102e35:	a8 01                	test   al,0x1
10102e37:	74 2b                	je     0x10102e64
10102e39:	83 e0 fe             	and    eax,0xfffffffe
10102e3c:	89 81 a4 01 00 00    	mov    DWORD PTR [ecx+0x1a4],eax
10102e42:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10102e45:	8b 80 cc 01 00 00    	mov    eax,DWORD PTR [eax+0x1cc]
10102e4b:	eb 29                	jmp    0x10102e76
10102e4d:	68 0c f6 1d 10       	push   0x101df60c
10102e52:	6a 04                	push   0x4
10102e54:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10102e5a:	83 c4 08             	add    esp,0x8
10102e5d:	5e                   	pop    esi
10102e5e:	8b e5                	mov    esp,ebp
10102e60:	5d                   	pop    ebp
10102e61:	c2 10 00             	ret    0x10
10102e64:	83 c8 01             	or     eax,0x1
10102e67:	89 81 a4 01 00 00    	mov    DWORD PTR [ecx+0x1a4],eax
10102e6d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10102e70:	8b 80 d4 01 00 00    	mov    eax,DWORD PTR [eax+0x1d4]
10102e76:	89 46 18             	mov    DWORD PTR [esi+0x18],eax
10102e79:	85 c0                	test   eax,eax
10102e7b:	0f 84 9d 00 00 00    	je     0x10102f1e
10102e81:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10102e86:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10102e8c:	03 46 18             	add    eax,DWORD PTR [esi+0x18]
10102e8f:	50                   	push   eax
10102e90:	6a 00                	push   0x0
10102e92:	e8 f9 56 01 00       	call   0x10118590
10102e97:	8b c8                	mov    ecx,eax
10102e99:	83 c4 08             	add    esp,0x8
10102e9c:	89 4e 14             	mov    DWORD PTR [esi+0x14],ecx
10102e9f:	85 c9                	test   ecx,ecx
10102ea1:	75 26                	jne    0x10102ec9
10102ea3:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10102ea8:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10102eae:	03 46 18             	add    eax,DWORD PTR [esi+0x18]
10102eb1:	50                   	push   eax
10102eb2:	68 7c 61 1a 10       	push   0x101a617c
10102eb7:	6a 01                	push   0x1
10102eb9:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10102ebf:	83 c4 0c             	add    esp,0xc
10102ec2:	5e                   	pop    esi
10102ec3:	8b e5                	mov    esp,ebp
10102ec5:	5d                   	pop    ebp
10102ec6:	c2 10 00             	ret    0x10
10102ec9:	8b 41 1c             	mov    eax,DWORD PTR [ecx+0x1c]
10102ecc:	85 c0                	test   eax,eax
10102ece:	74 0b                	je     0x10102edb
10102ed0:	3b c6                	cmp    eax,esi
10102ed2:	74 7e                	je     0x10102f52
10102ed4:	8b 40 20             	mov    eax,DWORD PTR [eax+0x20]
10102ed7:	85 c0                	test   eax,eax
10102ed9:	75 f5                	jne    0x10102ed0
10102edb:	8b 41 1c             	mov    eax,DWORD PTR [ecx+0x1c]
10102ede:	89 46 20             	mov    DWORD PTR [esi+0x20],eax
10102ee1:	89 71 1c             	mov    DWORD PTR [ecx+0x1c],esi
10102ee4:	8b 46 14             	mov    eax,DWORD PTR [esi+0x14]
10102ee7:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
10102eea:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10102eed:	f3 0f 10 50 08       	movss  xmm2,DWORD PTR [eax+0x8]
10102ef2:	f3 0f 10 48 0c       	movss  xmm1,DWORD PTR [eax+0xc]
10102ef7:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
10102efc:	f3 0f 5c 51 08       	subss  xmm2,DWORD PTR [ecx+0x8]
10102f01:	f3 0f 5c 49 0c       	subss  xmm1,DWORD PTR [ecx+0xc]
10102f06:	f3 0f 5c 41 10       	subss  xmm0,DWORD PTR [ecx+0x10]
10102f0b:	0f 14 d1             	unpcklps xmm2,xmm1
10102f0e:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
10102f13:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
10102f16:	66 0f d6 56 24       	movq   QWORD PTR [esi+0x24],xmm2
10102f1b:	89 46 2c             	mov    DWORD PTR [esi+0x2c],eax
10102f1e:	f3 0f 10 05 34 2f 22 	movss  xmm0,DWORD PTR ds:0x10222f34
10102f25:	10 
10102f26:	83 ec 0c             	sub    esp,0xc
10102f29:	8b c4                	mov    eax,esp
10102f2b:	56                   	push   esi
10102f2c:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
10102f30:	f3 0f 10 05 38 2f 22 	movss  xmm0,DWORD PTR ds:0x10222f38
10102f37:	10 
10102f38:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
10102f3d:	f3 0f 10 05 3c 2f 22 	movss  xmm0,DWORD PTR ds:0x10222f3c
10102f44:	10 
10102f45:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
10102f4a:	e8 81 1f fc ff       	call   0x100c4ed0
10102f4f:	83 c4 10             	add    esp,0x10
10102f52:	5e                   	pop    esi
10102f53:	8b e5                	mov    esp,ebp
10102f55:	5d                   	pop    ebp
10102f56:	c2 10 00             	ret    0x10
