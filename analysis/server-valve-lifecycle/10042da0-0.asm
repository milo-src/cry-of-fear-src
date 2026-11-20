
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10042da0 <.text+0x41da0>:
10042da0:	55                   	push   ebp
10042da1:	8b ec                	mov    ebp,esp
10042da3:	56                   	push   esi
10042da4:	57                   	push   edi
10042da5:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
10042da8:	8b f1                	mov    esi,ecx
10042daa:	85 ff                	test   edi,edi
10042dac:	0f 84 77 03 00 00    	je     0x10043129
10042db2:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10042db5:	83 b8 50 02 00 00 00 	cmp    DWORD PTR [eax+0x250],0x0
10042dbc:	0f 8f 67 03 00 00    	jg     0x10043129
10042dc2:	57                   	push   edi
10042dc3:	8d 8e e4 00 00 00    	lea    ecx,[esi+0xe4]
10042dc9:	e8 72 49 fd ff       	call   0x10017740
10042dce:	8b 07                	mov    eax,DWORD PTR [edi]
10042dd0:	8b cf                	mov    ecx,edi
10042dd2:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
10042dd8:	85 c0                	test   eax,eax
10042dda:	0f 84 49 03 00 00    	je     0x10043129
10042de0:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10042de5:	f3 0f 10 86 a0 01 00 	movss  xmm0,DWORD PTR [esi+0x1a0]
10042dec:	00 
10042ded:	0f 2f 00             	comiss xmm0,DWORD PTR [eax]
10042df0:	0f 83 33 03 00 00    	jae    0x10043129
10042df6:	83 be 80 01 00 00 00 	cmp    DWORD PTR [esi+0x180],0x0
10042dfd:	74 6b                	je     0x10042e6a
10042dff:	8b 8e 84 01 00 00    	mov    ecx,DWORD PTR [esi+0x184]
10042e05:	85 c9                	test   ecx,ecx
10042e07:	74 1b                	je     0x10042e24
10042e09:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10042e0f:	6a 00                	push   0x0
10042e11:	6a 05                	push   0x5
10042e13:	03 c1                	add    eax,ecx
10042e15:	50                   	push   eax
10042e16:	57                   	push   edi
10042e17:	e8 f4 69 0d 00       	call   0x10119810
10042e1c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10042e21:	83 c4 10             	add    esp,0x10
10042e24:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10042e27:	8b 91 f4 01 00 00    	mov    edx,DWORD PTR [ecx+0x1f4]
10042e2d:	85 d2                	test   edx,edx
10042e2f:	0f 84 f4 02 00 00    	je     0x10043129
10042e35:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10042e3b:	6a 64                	push   0x64
10042e3d:	6a 00                	push   0x0
10042e3f:	83 ec 08             	sub    esp,0x8
10042e42:	03 c2                	add    eax,edx
10042e44:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
10042e4b:	3f 
10042e4c:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
10042e53:	50                   	push   eax
10042e54:	6a 04                	push   0x4
10042e56:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
10042e5c:	e8 8f 9b 0b 00       	call   0x100fc9f0
10042e61:	83 c4 1c             	add    esp,0x1c
10042e64:	5f                   	pop    edi
10042e65:	5e                   	pop    esi
10042e66:	5d                   	pop    ebp
10042e67:	c2 10 00             	ret    0x10
10042e6a:	8b 8e a4 01 00 00    	mov    ecx,DWORD PTR [esi+0x1a4]
10042e70:	85 c9                	test   ecx,ecx
10042e72:	75 62                	jne    0x10042ed6
10042e74:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10042e77:	6a 64                	push   0x64
10042e79:	51                   	push   ecx
10042e7a:	83 ec 08             	sub    esp,0x8
10042e7d:	c7 86 a4 01 00 00 01 	mov    DWORD PTR [esi+0x1a4],0x1
10042e84:	00 00 00 
10042e87:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
10042e8e:	3f 
10042e8f:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
10042e96:	68 90 00 1b 10       	push   0x101b0090
10042e9b:	6a 03                	push   0x3
10042e9d:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10042ea3:	e8 48 9b 0b 00       	call   0x100fc9f0
10042ea8:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10042ead:	83 c4 1c             	add    esp,0x1c
10042eb0:	8b 8e a4 01 00 00    	mov    ecx,DWORD PTR [esi+0x1a4]
10042eb6:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10042eba:	0f 5a c0             	cvtps2pd xmm0,xmm0
10042ebd:	f2 0f 58 05 a0 e0 1a 	addsd  xmm0,QWORD PTR ds:0x101ae0a0
10042ec4:	10 
10042ec5:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10042ec9:	f3 0f 11 86 a8 01 00 	movss  DWORD PTR [esi+0x1a8],xmm0
10042ed0:	00 
10042ed1:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10042ed6:	83 f9 01             	cmp    ecx,0x1
10042ed9:	75 45                	jne    0x10042f20
10042edb:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10042edf:	0f 2f 86 a8 01 00 00 	comiss xmm0,DWORD PTR [esi+0x1a8]
10042ee6:	72 38                	jb     0x10042f20
10042ee8:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10042eeb:	6a 64                	push   0x64
10042eed:	6a 00                	push   0x0
10042eef:	83 ec 08             	sub    esp,0x8
10042ef2:	c7 86 a4 01 00 00 02 	mov    DWORD PTR [esi+0x1a4],0x2
10042ef9:	00 00 00 
10042efc:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
10042f03:	3f 
10042f04:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
10042f0b:	68 78 00 1b 10       	push   0x101b0078
10042f10:	6a 06                	push   0x6
10042f12:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10042f18:	e8 d3 9a 0b 00       	call   0x100fc9f0
10042f1d:	83 c4 1c             	add    esp,0x1c
10042f20:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10042f23:	f3 0f 10 0d e0 00 1b 	movss  xmm1,DWORD PTR ds:0x101b00e0
10042f2a:	10 
10042f2b:	8b 88 54 02 00 00    	mov    ecx,DWORD PTR [eax+0x254]
10042f31:	83 e9 00             	sub    ecx,0x0
10042f34:	74 60                	je     0x10042f96
10042f36:	83 e9 01             	sub    ecx,0x1
10042f39:	74 30                	je     0x10042f6b
10042f3b:	83 e9 01             	sub    ecx,0x1
10042f3e:	75 7f                	jne    0x10042fbf
10042f40:	66 0f 6e 80 4c 02 00 	movd   xmm0,DWORD PTR [eax+0x24c]
10042f47:	00 
10042f48:	0f 5b c0             	cvtdq2ps xmm0,xmm0
10042f4b:	f3 0f 58 40 58       	addss  xmm0,DWORD PTR [eax+0x58]
10042f50:	f3 0f 11 40 58       	movss  DWORD PTR [eax+0x58],xmm0
10042f55:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10042f58:	f3 0f 10 40 58       	movss  xmm0,DWORD PTR [eax+0x58]
10042f5d:	0f 2f c1             	comiss xmm0,xmm1
10042f60:	76 5d                	jbe    0x10042fbf
10042f62:	c7 40 58 00 80 b3 43 	mov    DWORD PTR [eax+0x58],0x43b38000
10042f69:	eb 54                	jmp    0x10042fbf
10042f6b:	66 0f 6e 80 4c 02 00 	movd   xmm0,DWORD PTR [eax+0x24c]
10042f72:	00 
10042f73:	0f 5b c0             	cvtdq2ps xmm0,xmm0
10042f76:	f3 0f 58 40 54       	addss  xmm0,DWORD PTR [eax+0x54]
10042f7b:	f3 0f 11 40 54       	movss  DWORD PTR [eax+0x54],xmm0
10042f80:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10042f83:	f3 0f 10 40 54       	movss  xmm0,DWORD PTR [eax+0x54]
10042f88:	0f 2f c1             	comiss xmm0,xmm1
10042f8b:	76 32                	jbe    0x10042fbf
10042f8d:	c7 40 54 00 80 b3 43 	mov    DWORD PTR [eax+0x54],0x43b38000
10042f94:	eb 29                	jmp    0x10042fbf
10042f96:	66 0f 6e 80 4c 02 00 	movd   xmm0,DWORD PTR [eax+0x24c]
10042f9d:	00 
10042f9e:	0f 5b c0             	cvtdq2ps xmm0,xmm0
10042fa1:	f3 0f 58 40 50       	addss  xmm0,DWORD PTR [eax+0x50]
10042fa6:	f3 0f 11 40 50       	movss  DWORD PTR [eax+0x50],xmm0
10042fab:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10042fae:	f3 0f 10 40 50       	movss  xmm0,DWORD PTR [eax+0x50]
10042fb3:	0f 2f c1             	comiss xmm0,xmm1
10042fb6:	76 07                	jbe    0x10042fbf
10042fb8:	c7 40 50 00 80 b3 43 	mov    DWORD PTR [eax+0x50],0x43b38000
10042fbf:	8d be 98 01 00 00    	lea    edi,[esi+0x198]
10042fc5:	8b cf                	mov    ecx,edi
10042fc7:	e8 b4 47 fd ff       	call   0x10017780
10042fcc:	85 c0                	test   eax,eax
10042fce:	0f 84 35 01 00 00    	je     0x10043109
10042fd4:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10042fd7:	8b 80 88 01 00 00    	mov    eax,DWORD PTR [eax+0x188]
10042fdd:	83 e8 00             	sub    eax,0x0
10042fe0:	0f 84 cd 00 00 00    	je     0x100430b3
10042fe6:	83 e8 01             	sub    eax,0x1
10042fe9:	74 6c                	je     0x10043057
10042feb:	83 e8 01             	sub    eax,0x1
10042fee:	0f 85 15 01 00 00    	jne    0x10043109
10042ff4:	8b cf                	mov    ecx,edi
10042ff6:	e8 85 47 fd ff       	call   0x10017780
10042ffb:	85 c0                	test   eax,eax
10042ffd:	0f 84 06 01 00 00    	je     0x10043109
10043003:	8b cf                	mov    ecx,edi
10043005:	e8 96 47 fd ff       	call   0x100177a0
1004300a:	8b cf                	mov    ecx,edi
1004300c:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
1004300f:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10043012:	66 0f 6e 80 4c 02 00 	movd   xmm0,DWORD PTR [eax+0x24c]
10043019:	00 
1004301a:	0f 5b c0             	cvtdq2ps xmm0,xmm0
1004301d:	f3 0f 58 42 58       	addss  xmm0,DWORD PTR [edx+0x58]
10043022:	f3 0f 11 42 58       	movss  DWORD PTR [edx+0x58],xmm0
10043027:	e8 74 47 fd ff       	call   0x100177a0
1004302c:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004302f:	f3 0f 10 40 58       	movss  xmm0,DWORD PTR [eax+0x58]
10043034:	0f 2f 05 e0 00 1b 10 	comiss xmm0,DWORD PTR ds:0x101b00e0
1004303b:	0f 86 c8 00 00 00    	jbe    0x10043109
10043041:	8b cf                	mov    ecx,edi
10043043:	e8 58 47 fd ff       	call   0x100177a0
10043048:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004304b:	c7 40 58 00 80 b3 43 	mov    DWORD PTR [eax+0x58],0x43b38000
10043052:	e9 b2 00 00 00       	jmp    0x10043109
10043057:	8b cf                	mov    ecx,edi
10043059:	e8 22 47 fd ff       	call   0x10017780
1004305e:	85 c0                	test   eax,eax
10043060:	0f 84 a3 00 00 00    	je     0x10043109
10043066:	8b cf                	mov    ecx,edi
10043068:	e8 33 47 fd ff       	call   0x100177a0
1004306d:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
10043070:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10043073:	66 0f 6e 80 4c 02 00 	movd   xmm0,DWORD PTR [eax+0x24c]
1004307a:	00 
1004307b:	0f 5b c0             	cvtdq2ps xmm0,xmm0
1004307e:	f3 0f 58 41 54       	addss  xmm0,DWORD PTR [ecx+0x54]
10043083:	f3 0f 11 41 54       	movss  DWORD PTR [ecx+0x54],xmm0
10043088:	8b cf                	mov    ecx,edi
1004308a:	e8 11 47 fd ff       	call   0x100177a0
1004308f:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10043092:	f3 0f 10 40 54       	movss  xmm0,DWORD PTR [eax+0x54]
10043097:	0f 2f 05 e0 00 1b 10 	comiss xmm0,DWORD PTR ds:0x101b00e0
1004309e:	76 69                	jbe    0x10043109
100430a0:	8b cf                	mov    ecx,edi
100430a2:	e8 f9 46 fd ff       	call   0x100177a0
100430a7:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100430aa:	c7 40 54 00 80 b3 43 	mov    DWORD PTR [eax+0x54],0x43b38000
100430b1:	eb 56                	jmp    0x10043109
100430b3:	8b cf                	mov    ecx,edi
100430b5:	e8 c6 46 fd ff       	call   0x10017780
100430ba:	85 c0                	test   eax,eax
100430bc:	74 4b                	je     0x10043109
100430be:	8b cf                	mov    ecx,edi
100430c0:	e8 db 46 fd ff       	call   0x100177a0
100430c5:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
100430c8:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100430cb:	66 0f 6e 80 4c 02 00 	movd   xmm0,DWORD PTR [eax+0x24c]
100430d2:	00 
100430d3:	0f 5b c0             	cvtdq2ps xmm0,xmm0
100430d6:	f3 0f 58 41 50       	addss  xmm0,DWORD PTR [ecx+0x50]
100430db:	f3 0f 11 41 50       	movss  DWORD PTR [ecx+0x50],xmm0
100430e0:	8b cf                	mov    ecx,edi
100430e2:	e8 b9 46 fd ff       	call   0x100177a0
100430e7:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100430ea:	f3 0f 10 40 50       	movss  xmm0,DWORD PTR [eax+0x50]
100430ef:	0f 2f 05 e0 00 1b 10 	comiss xmm0,DWORD PTR ds:0x101b00e0
100430f6:	76 11                	jbe    0x10043109
100430f8:	8b cf                	mov    ecx,edi
100430fa:	e8 a1 46 fd ff       	call   0x100177a0
100430ff:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10043102:	c7 40 50 00 80 b3 43 	mov    DWORD PTR [eax+0x50],0x43b38000
10043109:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004310e:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10043112:	0f 5a c0             	cvtps2pd xmm0,xmm0
10043115:	f2 0f 58 05 d8 00 1b 	addsd  xmm0,QWORD PTR ds:0x101b00d8
1004311c:	10 
1004311d:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10043121:	f3 0f 11 86 a0 01 00 	movss  DWORD PTR [esi+0x1a0],xmm0
10043128:	00 
10043129:	5f                   	pop    edi
1004312a:	5e                   	pop    esi
1004312b:	5d                   	pop    ebp
1004312c:	c2 10 00             	ret    0x10
