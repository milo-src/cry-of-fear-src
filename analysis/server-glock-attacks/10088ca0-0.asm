
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10088ca0 <.text+0x87ca0>:
10088ca0:	55                   	push   ebp
10088ca1:	8b ec                	mov    ebp,esp
10088ca3:	83 ec 7c             	sub    esp,0x7c
10088ca6:	53                   	push   ebx
10088ca7:	56                   	push   esi
10088ca8:	8b f1                	mov    esi,ecx
10088caa:	57                   	push   edi
10088cab:	89 75 f4             	mov    DWORD PTR [ebp-0xc],esi
10088cae:	33 ff                	xor    edi,edi
10088cb0:	8b 06                	mov    eax,DWORD PTR [esi]
10088cb2:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
10088cb8:	85 c0                	test   eax,eax
10088cba:	74 0d                	je     0x10088cc9
10088cbc:	ff 76 04             	push   DWORD PTR [esi+0x4]
10088cbf:	e8 1c 99 f8 ff       	call   0x100125e0
10088cc4:	83 c4 04             	add    esp,0x4
10088cc7:	8b f8                	mov    edi,eax
10088cc9:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10088cce:	f3 0f 7e 40 40       	movq   xmm0,QWORD PTR [eax+0x40]
10088cd3:	8b 48 48             	mov    ecx,DWORD PTR [eax+0x48]
10088cd6:	66 0f d6 45 bc       	movq   QWORD PTR [ebp-0x44],xmm0
10088cdb:	f3 0f 7e 40 34       	movq   xmm0,QWORD PTR [eax+0x34]
10088ce0:	8b 40 3c             	mov    eax,DWORD PTR [eax+0x3c]
10088ce3:	89 45 d0             	mov    DWORD PTR [ebp-0x30],eax
10088ce6:	8b 06                	mov    eax,DWORD PTR [esi]
10088ce8:	89 4d c4             	mov    DWORD PTR [ebp-0x3c],ecx
10088ceb:	8b ce                	mov    ecx,esi
10088ced:	66 0f d6 45 c8       	movq   QWORD PTR [ebp-0x38],xmm0
10088cf2:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
10088cf8:	8b 5d 38             	mov    ebx,DWORD PTR [ebp+0x38]
10088cfb:	f3 0f 10 0d d8 1d 1a 	movss  xmm1,DWORD PTR ds:0x101a1dd8
10088d02:	10 
10088d03:	85 c0                	test   eax,eax
10088d05:	74 4c                	je     0x10088d53
10088d07:	85 ff                	test   edi,edi
10088d09:	74 48                	je     0x10088d53
10088d0b:	8b 87 2c 25 00 00    	mov    eax,DWORD PTR [edi+0x252c]
10088d11:	85 c0                	test   eax,eax
10088d13:	74 33                	je     0x10088d48
10088d15:	80 b8 78 01 00 00 00 	cmp    BYTE PTR [eax+0x178],0x0
10088d1c:	74 2a                	je     0x10088d48
10088d1e:	f3 0f 10 45 28       	movss  xmm0,DWORD PTR [ebp+0x28]
10088d23:	f3 0f 59 c1          	mulss  xmm0,xmm1
10088d27:	f3 0f 11 45 28       	movss  DWORD PTR [ebp+0x28],xmm0
10088d2c:	f3 0f 10 45 2c       	movss  xmm0,DWORD PTR [ebp+0x2c]
10088d31:	f3 0f 59 c1          	mulss  xmm0,xmm1
10088d35:	f3 0f 11 45 2c       	movss  DWORD PTR [ebp+0x2c],xmm0
10088d3a:	f3 0f 10 45 30       	movss  xmm0,DWORD PTR [ebp+0x30]
10088d3f:	f3 0f 59 c1          	mulss  xmm0,xmm1
10088d43:	f3 0f 11 45 30       	movss  DWORD PTR [ebp+0x30],xmm0
10088d48:	83 fb 32             	cmp    ebx,0x32
10088d4b:	74 06                	je     0x10088d53
10088d4d:	ff 87 3c 06 00 00    	inc    DWORD PTR [edi+0x63c]
10088d53:	83 7d 44 00          	cmp    DWORD PTR [ebp+0x44],0x0
10088d57:	75 06                	jne    0x10088d5f
10088d59:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10088d5c:	89 45 44             	mov    DWORD PTR [ebp+0x44],eax
10088d5f:	e8 0c 33 09 00       	call   0x1011c070
10088d64:	83 fb 06             	cmp    ebx,0x6
10088d67:	75 0c                	jne    0x10088d75
10088d69:	c7 05 3c 1f 23 10 00 	mov    DWORD PTR ds:0x10231f3c,0x2001000
10088d70:	10 00 02 
10088d73:	eb 26                	jmp    0x10088d9b
10088d75:	b8 02 10 00 00       	mov    eax,0x1002
10088d7a:	83 fb 32             	cmp    ebx,0x32
10088d7d:	75 0c                	jne    0x10088d8b
10088d7f:	c7 05 3c 1f 23 10 08 	mov    DWORD PTR ds:0x10231f3c,0x1008
10088d86:	10 00 00 
10088d89:	eb 10                	jmp    0x10088d9b
10088d8b:	83 fb 33             	cmp    ebx,0x33
10088d8e:	b9 00 10 00 10       	mov    ecx,0x10001000
10088d93:	0f 44 c1             	cmove  eax,ecx
10088d96:	a3 3c 1f 23 10       	mov    ds:0x10231f3c,eax
10088d9b:	83 7d 0c 01          	cmp    DWORD PTR [ebp+0xc],0x1
10088d9f:	c6 45 3b 00          	mov    BYTE PTR [ebp+0x3b],0x0
10088da3:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
10088daa:	0f 82 1a 07 00 00    	jb     0x100894ca
10088db0:	8b 45 48             	mov    eax,DWORD PTR [ebp+0x48]
10088db3:	83 c0 04             	add    eax,0x4
10088db6:	89 45 48             	mov    DWORD PTR [ebp+0x48],eax
10088db9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
10088dc0:	83 ec 08             	sub    esp,0x8
10088dc3:	83 c0 fe             	add    eax,0xfffffffe
10088dc6:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x3f000000
10088dcd:	3f 
10088dce:	c7 04 24 00 00 00 bf 	mov    DWORD PTR [esp],0xbf000000
10088dd5:	50                   	push   eax
10088dd6:	e8 75 12 09 00       	call   0x1011a050
10088ddb:	8b 45 48             	mov    eax,DWORD PTR [ebp+0x48]
10088dde:	83 c4 04             	add    esp,0x4
10088de1:	83 c0 fd             	add    eax,0xfffffffd
10088de4:	d9 5d 38             	fstp   DWORD PTR [ebp+0x38]
10088de7:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x3f000000
10088dee:	3f 
10088def:	c7 04 24 00 00 00 bf 	mov    DWORD PTR [esp],0xbf000000
10088df6:	50                   	push   eax
10088df7:	e8 54 12 09 00       	call   0x1011a050
10088dfc:	d8 45 38             	fadd   DWORD PTR [ebp+0x38]
10088dff:	83 c4 04             	add    esp,0x4
10088e02:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x3f000000
10088e09:	3f 
10088e0a:	c7 04 24 00 00 00 bf 	mov    DWORD PTR [esp],0xbf000000
10088e11:	ff 75 48             	push   DWORD PTR [ebp+0x48]
10088e14:	d9 5d e4             	fstp   DWORD PTR [ebp-0x1c]
10088e17:	e8 34 12 09 00       	call   0x1011a050
10088e1c:	8b 45 48             	mov    eax,DWORD PTR [ebp+0x48]
10088e1f:	83 c4 04             	add    esp,0x4
10088e22:	48                   	dec    eax
10088e23:	d9 5d 38             	fstp   DWORD PTR [ebp+0x38]
10088e26:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x3f000000
10088e2d:	3f 
10088e2e:	c7 04 24 00 00 00 bf 	mov    DWORD PTR [esp],0xbf000000
10088e35:	50                   	push   eax
10088e36:	e8 15 12 09 00       	call   0x1011a050
10088e3b:	d8 45 38             	fadd   DWORD PTR [ebp+0x38]
10088e3e:	83 c4 0c             	add    esp,0xc
10088e41:	d9 5d e0             	fstp   DWORD PTR [ebp-0x20]
10088e44:	85 ff                	test   edi,edi
10088e46:	0f 84 84 00 00 00    	je     0x10088ed0
10088e4c:	8d 8f 90 03 00 00    	lea    ecx,[edi+0x390]
10088e52:	e8 29 e9 f8 ff       	call   0x10017780
10088e57:	85 c0                	test   eax,eax
10088e59:	74 75                	je     0x10088ed0
10088e5b:	8b 87 2c 25 00 00    	mov    eax,DWORD PTR [edi+0x252c]
10088e61:	85 c0                	test   eax,eax
10088e63:	74 6b                	je     0x10088ed0
10088e65:	ff 70 04             	push   DWORD PTR [eax+0x4]
10088e68:	e8 d3 f5 f8 ff       	call   0x10018440
10088e6d:	83 c4 04             	add    esp,0x4
10088e70:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10088e73:	85 c0                	test   eax,eax
10088e75:	74 5c                	je     0x10088ed3
10088e77:	6a 01                	push   0x1
10088e79:	ff 15 94 30 22 10    	call   DWORD PTR ds:0x10223094
10088e7f:	50                   	push   eax
10088e80:	e8 d9 26 0e 00       	call   0x1016b55e
10088e85:	6a 02                	push   0x2
10088e87:	ff 15 94 30 22 10    	call   DWORD PTR ds:0x10223094
10088e8d:	50                   	push   eax
10088e8e:	e8 cb 26 0e 00       	call   0x1016b55e
10088e93:	6a 03                	push   0x3
10088e95:	ff 15 94 30 22 10    	call   DWORD PTR ds:0x10223094
10088e9b:	50                   	push   eax
10088e9c:	e8 bd 26 0e 00       	call   0x1016b55e
10088ea1:	8b 87 2c 25 00 00    	mov    eax,DWORD PTR [edi+0x252c]
10088ea7:	0f 57 c9             	xorps  xmm1,xmm1
10088eaa:	f3 0f 11 4d 34       	movss  DWORD PTR [ebp+0x34],xmm1
10088eaf:	ff 70 04             	push   DWORD PTR [eax+0x4]
10088eb2:	e8 49 f6 f8 ff       	call   0x10018500
10088eb7:	83 c4 1c             	add    esp,0x1c
10088eba:	f3 0f 7e 80 0c 02 00 	movq   xmm0,QWORD PTR [eax+0x20c]
10088ec1:	00 
10088ec2:	66 0f d6 45 1c       	movq   QWORD PTR [ebp+0x1c],xmm0
10088ec7:	8b 80 14 02 00 00    	mov    eax,DWORD PTR [eax+0x214]
10088ecd:	89 45 24             	mov    DWORD PTR [ebp+0x24],eax
10088ed0:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
10088ed3:	f3 0f 10 45 e0       	movss  xmm0,DWORD PTR [ebp-0x20]
10088ed8:	f3 0f 59 45 2c       	mulss  xmm0,DWORD PTR [ebp+0x2c]
10088edd:	f3 0f 10 65 c8       	movss  xmm4,DWORD PTR [ebp-0x38]
10088ee2:	f3 0f 10 7d d0       	movss  xmm7,DWORD PTR [ebp-0x30]
10088ee7:	f3 0f 10 6d cc       	movss  xmm5,DWORD PTR [ebp-0x34]
10088eec:	f3 0f 10 4d bc       	movss  xmm1,DWORD PTR [ebp-0x44]
10088ef1:	f3 0f 10 55 c0       	movss  xmm2,DWORD PTR [ebp-0x40]
10088ef6:	f3 0f 10 5d c4       	movss  xmm3,DWORD PTR [ebp-0x3c]
10088efb:	f3 0f 10 75 1c       	movss  xmm6,DWORD PTR [ebp+0x1c]
10088f00:	f3 0f 59 e0          	mulss  xmm4,xmm0
10088f04:	f3 0f 59 f8          	mulss  xmm7,xmm0
10088f08:	f3 0f 59 e8          	mulss  xmm5,xmm0
10088f0c:	f3 0f 10 45 e4       	movss  xmm0,DWORD PTR [ebp-0x1c]
10088f11:	f3 0f 59 45 28       	mulss  xmm0,DWORD PTR [ebp+0x28]
10088f16:	f3 0f 59 c8          	mulss  xmm1,xmm0
10088f1a:	f3 0f 59 d0          	mulss  xmm2,xmm0
10088f1e:	f3 0f 59 d8          	mulss  xmm3,xmm0
10088f22:	f3 0f 58 f1          	addss  xmm6,xmm1
10088f26:	f3 0f 10 4d 20       	movss  xmm1,DWORD PTR [ebp+0x20]
10088f2b:	f3 0f 10 45 24       	movss  xmm0,DWORD PTR [ebp+0x24]
10088f30:	f3 0f 58 ca          	addss  xmm1,xmm2
10088f34:	f3 0f 58 c3          	addss  xmm0,xmm3
10088f38:	f3 0f 58 f4          	addss  xmm6,xmm4
10088f3c:	f3 0f 10 65 34       	movss  xmm4,DWORD PTR [ebp+0x34]
10088f41:	f3 0f 58 cd          	addss  xmm1,xmm5
10088f45:	f3 0f 58 f8          	addss  xmm7,xmm0
10088f49:	f3 0f 11 75 f0       	movss  DWORD PTR [ebp-0x10],xmm6
10088f4e:	0f 28 c6             	movaps xmm0,xmm6
10088f51:	f3 0f 59 c4          	mulss  xmm0,xmm4
10088f55:	f3 0f 11 4d ec       	movss  DWORD PTR [ebp-0x14],xmm1
10088f5a:	0f 28 d1             	movaps xmm2,xmm1
10088f5d:	f3 0f 10 4d 14       	movss  xmm1,DWORD PTR [ebp+0x14]
10088f62:	0f 28 df             	movaps xmm3,xmm7
10088f65:	f3 0f 59 d4          	mulss  xmm2,xmm4
10088f69:	f3 0f 59 dc          	mulss  xmm3,xmm4
10088f6d:	f3 0f 10 65 10       	movss  xmm4,DWORD PTR [ebp+0x10]
10088f72:	f3 0f 58 ca          	addss  xmm1,xmm2
10088f76:	f3 0f 11 7d e8       	movss  DWORD PTR [ebp-0x18],xmm7
10088f7b:	f3 0f 58 e0          	addss  xmm4,xmm0
10088f7f:	f3 0f 10 45 18       	movss  xmm0,DWORD PTR [ebp+0x18]
10088f84:	f3 0f 58 c3          	addss  xmm0,xmm3
10088f88:	f3 0f 11 4d d8       	movss  DWORD PTR [ebp-0x28],xmm1
10088f8d:	f3 0f 11 65 d4       	movss  DWORD PTR [ebp-0x2c],xmm4
10088f92:	f3 0f 11 45 dc       	movss  DWORD PTR [ebp-0x24],xmm0
10088f97:	85 c0                	test   eax,eax
10088f99:	74 3a                	je     0x10088fd5
10088f9b:	85 ff                	test   edi,edi
10088f9d:	74 36                	je     0x10088fd5
10088f9f:	8d 8f 90 03 00 00    	lea    ecx,[edi+0x390]
10088fa5:	e8 d6 e7 f8 ff       	call   0x10017780
10088faa:	85 c0                	test   eax,eax
10088fac:	74 27                	je     0x10088fd5
10088fae:	8b 87 2c 25 00 00    	mov    eax,DWORD PTR [edi+0x252c]
10088fb4:	ff 70 04             	push   DWORD PTR [eax+0x4]
10088fb7:	e8 44 f5 f8 ff       	call   0x10018500
10088fbc:	83 c4 04             	add    esp,0x4
10088fbf:	f3 0f 7e 80 0c 02 00 	movq   xmm0,QWORD PTR [eax+0x20c]
10088fc6:	00 
10088fc7:	66 0f d6 45 d4       	movq   QWORD PTR [ebp-0x2c],xmm0
10088fcc:	8b 80 14 02 00 00    	mov    eax,DWORD PTR [eax+0x214]
10088fd2:	89 45 dc             	mov    DWORD PTR [ebp-0x24],eax
10088fd5:	8d 45 84             	lea    eax,[ebp-0x7c]
10088fd8:	50                   	push   eax
10088fd9:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10088fdc:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10088fe2:	8d 45 d4             	lea    eax,[ebp-0x2c]
10088fe5:	6a 00                	push   0x0
10088fe7:	50                   	push   eax
10088fe8:	8d 45 10             	lea    eax,[ebp+0x10]
10088feb:	50                   	push   eax
10088fec:	e8 0f 18 09 00       	call   0x1011a800
10088ff1:	8b 06                	mov    eax,DWORD PTR [esi]
10088ff3:	83 c4 14             	add    esp,0x14
10088ff6:	8b ce                	mov    ecx,esi
10088ff8:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
10088ffe:	85 c0                	test   eax,eax
10089000:	75 09                	jne    0x1008900b
10089002:	83 fb 17             	cmp    ebx,0x17
10089005:	0f 85 99 01 00 00    	jne    0x100891a4
1008900b:	f3 0f 10 45 94       	movss  xmm0,DWORD PTR [ebp-0x6c]
10089010:	f3 0f 10 0d 90 13 1a 	movss  xmm1,DWORD PTR ds:0x101a1390
10089017:	10 
10089018:	0f 2e c1             	ucomiss xmm0,xmm1
1008901b:	9f                   	lahf
1008901c:	f6 c4 44             	test   ah,0x44
1008901f:	0f 8b 87 01 00 00    	jnp    0x100891ac
10089025:	8b 45 b4             	mov    eax,DWORD PTR [ebp-0x4c]
10089028:	85 c0                	test   eax,eax
1008902a:	75 1a                	jne    0x10089046
1008902c:	50                   	push   eax
1008902d:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
10089033:	f3 0f 10 0d 90 13 1a 	movss  xmm1,DWORD PTR ds:0x101a1390
1008903a:	10 
1008903b:	83 c4 04             	add    esp,0x4
1008903e:	85 c0                	test   eax,eax
10089040:	0f 84 94 00 00 00    	je     0x100890da
10089046:	8b 70 7c             	mov    esi,DWORD PTR [eax+0x7c]
10089049:	85 f6                	test   esi,esi
1008904b:	0f 84 89 00 00 00    	je     0x100890da
10089051:	8b 06                	mov    eax,DWORD PTR [esi]
10089053:	8b ce                	mov    ecx,esi
10089055:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
1008905b:	85 c0                	test   eax,eax
1008905d:	75 07                	jne    0x10089066
1008905f:	83 fb 17             	cmp    ebx,0x17
10089062:	75 6e                	jne    0x100890d2
10089064:	eb 05                	jmp    0x1008906b
10089066:	83 fb 17             	cmp    ebx,0x17
10089069:	75 19                	jne    0x10089084
1008906b:	8b 06                	mov    eax,DWORD PTR [esi]
1008906d:	8b ce                	mov    ecx,esi
1008906f:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
10089075:	85 c0                	test   eax,eax
10089077:	75 0b                	jne    0x10089084
10089079:	8b 06                	mov    eax,DWORD PTR [esi]
1008907b:	8b ce                	mov    ecx,esi
1008907d:	ff 50 78             	call   DWORD PTR [eax+0x78]
10089080:	85 c0                	test   eax,eax
10089082:	74 4e                	je     0x100890d2
10089084:	8d 45 84             	lea    eax,[ebp-0x7c]
10089087:	50                   	push   eax
10089088:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008908b:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10089091:	8d 45 d4             	lea    eax,[ebp-0x2c]
10089094:	6a 00                	push   0x0
10089096:	50                   	push   eax
10089097:	8d 45 98             	lea    eax,[ebp-0x68]
1008909a:	50                   	push   eax
1008909b:	e8 60 17 09 00       	call   0x1011a800
100890a0:	8b 06                	mov    eax,DWORD PTR [esi]
100890a2:	83 c4 14             	add    esp,0x14
100890a5:	8b ce                	mov    ecx,esi
100890a7:	ff 50 78             	call   DWORD PTR [eax+0x78]
100890aa:	85 c0                	test   eax,eax
100890ac:	74 24                	je     0x100890d2
100890ae:	66 0f 6e 45 40       	movd   xmm0,DWORD PTR [ebp+0x40]
100890b3:	ff 35 3c 1f 23 10    	push   DWORD PTR ds:0x10231f3c
100890b9:	8b 06                	mov    eax,DWORD PTR [esi]
100890bb:	0f 5b c0             	cvtdq2ps xmm0,xmm0
100890be:	51                   	push   ecx
100890bf:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
100890c2:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100890c7:	ff 75 44             	push   DWORD PTR [ebp+0x44]
100890ca:	ff 71 04             	push   DWORD PTR [ecx+0x4]
100890cd:	8b ce                	mov    ecx,esi
100890cf:	ff 50 64             	call   DWORD PTR [eax+0x64]
100890d2:	f3 0f 10 0d 90 13 1a 	movss  xmm1,DWORD PTR ds:0x101a1390
100890d9:	10 
100890da:	f3 0f 10 45 94       	movss  xmm0,DWORD PTR [ebp-0x6c]
100890df:	0f 2e c1             	ucomiss xmm0,xmm1
100890e2:	9f                   	lahf
100890e3:	f6 c4 44             	test   ah,0x44
100890e6:	0f 8b c0 00 00 00    	jnp    0x100891ac
100890ec:	8b 45 b4             	mov    eax,DWORD PTR [ebp-0x4c]
100890ef:	85 c0                	test   eax,eax
100890f1:	75 16                	jne    0x10089109
100890f3:	50                   	push   eax
100890f4:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
100890fa:	f3 0f 10 0d 90 13 1a 	movss  xmm1,DWORD PTR ds:0x101a1390
10089101:	10 
10089102:	83 c4 04             	add    esp,0x4
10089105:	85 c0                	test   eax,eax
10089107:	74 3c                	je     0x10089145
10089109:	8b 70 7c             	mov    esi,DWORD PTR [eax+0x7c]
1008910c:	85 f6                	test   esi,esi
1008910e:	74 35                	je     0x10089145
10089110:	8b 06                	mov    eax,DWORD PTR [esi]
10089112:	8b ce                	mov    ecx,esi
10089114:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
1008911a:	85 c0                	test   eax,eax
1008911c:	74 1f                	je     0x1008913d
1008911e:	8d 45 84             	lea    eax,[ebp-0x7c]
10089121:	50                   	push   eax
10089122:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10089125:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1008912b:	8d 45 d4             	lea    eax,[ebp-0x2c]
1008912e:	6a 00                	push   0x0
10089130:	50                   	push   eax
10089131:	8d 45 98             	lea    eax,[ebp-0x68]
10089134:	50                   	push   eax
10089135:	e8 c6 16 09 00       	call   0x1011a800
1008913a:	83 c4 14             	add    esp,0x14
1008913d:	f3 0f 10 0d 90 13 1a 	movss  xmm1,DWORD PTR ds:0x101a1390
10089144:	10 
10089145:	f3 0f 10 45 94       	movss  xmm0,DWORD PTR [ebp-0x6c]
1008914a:	0f 2e c1             	ucomiss xmm0,xmm1
1008914d:	9f                   	lahf
1008914e:	f6 c4 44             	test   ah,0x44
10089151:	7b 59                	jnp    0x100891ac
10089153:	8b 45 b4             	mov    eax,DWORD PTR [ebp-0x4c]
10089156:	85 c0                	test   eax,eax
10089158:	75 16                	jne    0x10089170
1008915a:	50                   	push   eax
1008915b:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
10089161:	f3 0f 10 0d 90 13 1a 	movss  xmm1,DWORD PTR ds:0x101a1390
10089168:	10 
10089169:	83 c4 04             	add    esp,0x4
1008916c:	85 c0                	test   eax,eax
1008916e:	74 3c                	je     0x100891ac
10089170:	8b 70 7c             	mov    esi,DWORD PTR [eax+0x7c]
10089173:	85 f6                	test   esi,esi
10089175:	74 35                	je     0x100891ac
10089177:	8b 06                	mov    eax,DWORD PTR [esi]
10089179:	8b ce                	mov    ecx,esi
1008917b:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
10089181:	85 c0                	test   eax,eax
10089183:	74 1f                	je     0x100891a4
10089185:	8d 45 84             	lea    eax,[ebp-0x7c]
10089188:	50                   	push   eax
10089189:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008918c:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10089192:	8d 45 d4             	lea    eax,[ebp-0x2c]
10089195:	6a 00                	push   0x0
10089197:	50                   	push   eax
10089198:	8d 45 98             	lea    eax,[ebp-0x68]
1008919b:	50                   	push   eax
1008919c:	e8 5f 16 09 00       	call   0x1011a800
100891a1:	83 c4 14             	add    esp,0x14
100891a4:	f3 0f 10 0d 90 13 1a 	movss  xmm1,DWORD PTR ds:0x101a1390
100891ab:	10 
100891ac:	f3 0f 10 45 94       	movss  xmm0,DWORD PTR [ebp-0x6c]
100891b1:	0f 2e c1             	ucomiss xmm0,xmm1
100891b4:	c6 45 3b 00          	mov    BYTE PTR [ebp+0x3b],0x0
100891b8:	9f                   	lahf
100891b9:	f6 c4 44             	test   ah,0x44
100891bc:	0f 8b 84 02 00 00    	jnp    0x10089446
100891c2:	8b 45 b4             	mov    eax,DWORD PTR [ebp-0x4c]
100891c5:	85 c0                	test   eax,eax
100891c7:	75 15                	jne    0x100891de
100891c9:	50                   	push   eax
100891ca:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
100891d0:	83 c4 04             	add    esp,0x4
100891d3:	85 c0                	test   eax,eax
100891d5:	75 07                	jne    0x100891de
100891d7:	33 f6                	xor    esi,esi
100891d9:	e9 09 01 00 00       	jmp    0x100892e7
100891de:	8b 70 7c             	mov    esi,DWORD PTR [eax+0x7c]
100891e1:	85 f6                	test   esi,esi
100891e3:	0f 84 fe 00 00 00    	je     0x100892e7
100891e9:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100891ec:	8b 88 0c 02 00 00    	mov    ecx,DWORD PTR [eax+0x20c]
100891f2:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
100891f8:	f7 d9                	neg    ecx
100891fa:	1b c9                	sbb    ecx,ecx
100891fc:	23 c8                	and    ecx,eax
100891fe:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10089203:	8b 09                	mov    ecx,DWORD PTR [ecx]
10089205:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1008920b:	b8 24 ef 1b 10       	mov    eax,0x101bef24
10089210:	8a 11                	mov    dl,BYTE PTR [ecx]
10089212:	3a 10                	cmp    dl,BYTE PTR [eax]
10089214:	75 1a                	jne    0x10089230
10089216:	84 d2                	test   dl,dl
10089218:	74 12                	je     0x1008922c
1008921a:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
1008921d:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
10089220:	75 0e                	jne    0x10089230
10089222:	83 c1 02             	add    ecx,0x2
10089225:	83 c0 02             	add    eax,0x2
10089228:	84 d2                	test   dl,dl
1008922a:	75 e4                	jne    0x10089210
1008922c:	33 c0                	xor    eax,eax
1008922e:	eb 05                	jmp    0x10089235
10089230:	1b c0                	sbb    eax,eax
10089232:	83 c8 01             	or     eax,0x1
10089235:	85 c0                	test   eax,eax
10089237:	0f 85 aa 00 00 00    	jne    0x100892e7
1008923d:	68 f8 21 1a 10       	push   0x101a21f8
10089242:	50                   	push   eax
10089243:	e8 18 f2 08 00       	call   0x10118460
10089248:	83 c4 08             	add    esp,0x8
1008924b:	85 c0                	test   eax,eax
1008924d:	0f 84 94 00 00 00    	je     0x100892e7
10089253:	ff 70 04             	push   DWORD PTR [eax+0x4]
10089256:	e8 f5 36 fa ff       	call   0x1002c950
1008925b:	83 c4 04             	add    esp,0x4
1008925e:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
10089261:	85 c0                	test   eax,eax
10089263:	0f 84 7e 00 00 00    	je     0x100892e7
10089269:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1008926c:	8b 89 48 02 00 00    	mov    ecx,DWORD PTR [ecx+0x248]
10089272:	49                   	dec    ecx
10089273:	83 f9 03             	cmp    ecx,0x3
10089276:	77 6f                	ja     0x100892e7
10089278:	ff 24 8d 74 96 08 10 	jmp    DWORD PTR [ecx*4+0x10089674]
1008927f:	8b c8                	mov    ecx,eax
10089281:	e8 0a 44 fa ff       	call   0x1002d690
10089286:	83 f8 01             	cmp    eax,0x1
10089289:	74 58                	je     0x100892e3
1008928b:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
1008928e:	e8 fd 43 fa ff       	call   0x1002d690
10089293:	83 f8 05             	cmp    eax,0x5
10089296:	eb 49                	jmp    0x100892e1
10089298:	8b c8                	mov    ecx,eax
1008929a:	e8 f1 43 fa ff       	call   0x1002d690
1008929f:	83 f8 02             	cmp    eax,0x2
100892a2:	74 3f                	je     0x100892e3
100892a4:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
100892a7:	e8 e4 43 fa ff       	call   0x1002d690
100892ac:	83 f8 06             	cmp    eax,0x6
100892af:	eb 30                	jmp    0x100892e1
100892b1:	8b c8                	mov    ecx,eax
100892b3:	e8 d8 43 fa ff       	call   0x1002d690
100892b8:	83 f8 03             	cmp    eax,0x3
100892bb:	74 26                	je     0x100892e3
100892bd:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
100892c0:	e8 cb 43 fa ff       	call   0x1002d690
100892c5:	83 f8 07             	cmp    eax,0x7
100892c8:	eb 17                	jmp    0x100892e1
100892ca:	8b c8                	mov    ecx,eax
100892cc:	e8 bf 43 fa ff       	call   0x1002d690
100892d1:	83 f8 04             	cmp    eax,0x4
100892d4:	74 0d                	je     0x100892e3
100892d6:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
100892d9:	e8 b2 43 fa ff       	call   0x1002d690
100892de:	83 f8 08             	cmp    eax,0x8
100892e1:	75 04                	jne    0x100892e7
100892e3:	c6 45 3b 01          	mov    BYTE PTR [ebp+0x3b],0x1
100892e7:	8b 45 40             	mov    eax,DWORD PTR [ebp+0x40]
100892ea:	85 c0                	test   eax,eax
100892ec:	0f 84 82 00 00 00    	je     0x10089374
100892f2:	8b 16                	mov    edx,DWORD PTR [esi]
100892f4:	f3 0f 10 4d f0       	movss  xmm1,DWORD PTR [ebp-0x10]
100892f9:	66 0f 6e c0          	movd   xmm0,eax
100892fd:	8d 45 84             	lea    eax,[ebp-0x7c]
10089300:	0f 5b c0             	cvtdq2ps xmm0,xmm0
10089303:	83 fb 06             	cmp    ebx,0x6
10089306:	75 36                	jne    0x1008933e
10089308:	68 00 10 00 02       	push   0x2001000
1008930d:	50                   	push   eax
1008930e:	83 ec 0c             	sub    esp,0xc
10089311:	8b c4                	mov    eax,esp
10089313:	51                   	push   ecx
10089314:	f3 0f 11 08          	movss  DWORD PTR [eax],xmm1
10089318:	8b ce                	mov    ecx,esi
1008931a:	f3 0f 10 4d ec       	movss  xmm1,DWORD PTR [ebp-0x14]
1008931f:	f3 0f 11 48 04       	movss  DWORD PTR [eax+0x4],xmm1
10089324:	f3 0f 10 4d e8       	movss  xmm1,DWORD PTR [ebp-0x18]
10089329:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1008932e:	ff 75 44             	push   DWORD PTR [ebp+0x44]
10089331:	f3 0f 11 48 08       	movss  DWORD PTR [eax+0x8],xmm1
10089336:	ff 52 60             	call   DWORD PTR [edx+0x60]
10089339:	e9 c2 00 00 00       	jmp    0x10089400
1008933e:	68 02 10 00 00       	push   0x1002
10089343:	50                   	push   eax
10089344:	83 ec 0c             	sub    esp,0xc
10089347:	8b c4                	mov    eax,esp
10089349:	51                   	push   ecx
1008934a:	f3 0f 11 08          	movss  DWORD PTR [eax],xmm1
1008934e:	8b ce                	mov    ecx,esi
10089350:	f3 0f 10 4d ec       	movss  xmm1,DWORD PTR [ebp-0x14]
10089355:	f3 0f 11 48 04       	movss  DWORD PTR [eax+0x4],xmm1
1008935a:	f3 0f 10 4d e8       	movss  xmm1,DWORD PTR [ebp-0x18]
1008935f:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10089364:	ff 75 44             	push   DWORD PTR [ebp+0x44]
10089367:	f3 0f 11 48 08       	movss  DWORD PTR [eax+0x8],xmm1
1008936c:	ff 52 60             	call   DWORD PTR [edx+0x60]
1008936f:	e9 8c 00 00 00       	jmp    0x10089400
10089374:	85 db                	test   ebx,ebx
10089376:	0f 85 84 00 00 00    	jne    0x10089400
1008937c:	f3 0f 10 4d f0       	movss  xmm1,DWORD PTR [ebp-0x10]
10089381:	8d 45 84             	lea    eax,[ebp-0x7c]
10089384:	68 80 00 00 00       	push   0x80
10089389:	50                   	push   eax
1008938a:	83 ec 0c             	sub    esp,0xc
1008938d:	8b c4                	mov    eax,esp
1008938f:	51                   	push   ecx
10089390:	f3 0f 11 08          	movss  DWORD PTR [eax],xmm1
10089394:	8b ce                	mov    ecx,esi
10089396:	f3 0f 10 4d ec       	movss  xmm1,DWORD PTR [ebp-0x14]
1008939b:	f3 0f 11 48 04       	movss  DWORD PTR [eax+0x4],xmm1
100893a0:	f3 0f 10 4d e8       	movss  xmm1,DWORD PTR [ebp-0x18]
100893a5:	f3 0f 11 48 08       	movss  DWORD PTR [eax+0x8],xmm1
100893aa:	8b 06                	mov    eax,DWORD PTR [esi]
100893ac:	c7 04 24 00 00 48 42 	mov    DWORD PTR [esp],0x42480000
100893b3:	ff 75 44             	push   DWORD PTR [ebp+0x44]
100893b6:	ff 50 60             	call   DWORD PTR [eax+0x60]
100893b9:	8b 45 b4             	mov    eax,DWORD PTR [ebp-0x4c]
100893bc:	85 c0                	test   eax,eax
100893be:	74 40                	je     0x10089400
100893c0:	50                   	push   eax
100893c1:	ff 15 60 30 22 10    	call   DWORD PTR ds:0x10223060
100893c7:	83 c4 04             	add    esp,0x4
100893ca:	85 c0                	test   eax,eax
100893cc:	74 32                	je     0x10089400
100893ce:	39 5d b4             	cmp    DWORD PTR [ebp-0x4c],ebx
100893d1:	75 04                	jne    0x100893d7
100893d3:	33 c0                	xor    eax,eax
100893d5:	eb 06                	jmp    0x100893dd
100893d7:	8b 45 b4             	mov    eax,DWORD PTR [ebp-0x4c]
100893da:	83 e8 80             	sub    eax,0xffffff80
100893dd:	83 b8 4c 01 00 00 00 	cmp    DWORD PTR [eax+0x14c],0x0
100893e4:	74 1a                	je     0x10089400
100893e6:	6a 02                	push   0x2
100893e8:	6a 00                	push   0x0
100893ea:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100893f0:	83 c0 19             	add    eax,0x19
100893f3:	50                   	push   eax
100893f4:	8d 45 84             	lea    eax,[ebp-0x7c]
100893f7:	50                   	push   eax
100893f8:	e8 b3 ec 08 00       	call   0x101180b0
100893fd:	83 c4 10             	add    esp,0x10
10089400:	83 7d b4 00          	cmp    DWORD PTR [ebp-0x4c],0x0
10089404:	75 04                	jne    0x1008940a
10089406:	33 c0                	xor    eax,eax
10089408:	eb 06                	jmp    0x10089410
1008940a:	8b 45 b4             	mov    eax,DWORD PTR [ebp-0x4c]
1008940d:	83 e8 80             	sub    eax,0xffffff80
10089410:	83 b8 0c 01 00 00 04 	cmp    DWORD PTR [eax+0x10c],0x4
10089417:	75 2d                	jne    0x10089446
10089419:	83 7d 90 00          	cmp    DWORD PTR [ebp-0x70],0x0
1008941d:	75 27                	jne    0x10089446
1008941f:	83 fb 32             	cmp    ebx,0x32
10089422:	0f 84 8e 00 00 00    	je     0x100894b6
10089428:	83 fb 33             	cmp    ebx,0x33
1008942b:	0f 84 85 00 00 00    	je     0x100894b6
10089431:	6a 00                	push   0x0
10089433:	8d 45 84             	lea    eax,[ebp-0x7c]
10089436:	68 34 ef 1b 10       	push   0x101bef34
1008943b:	50                   	push   eax
1008943c:	e8 9f eb 08 00       	call   0x10117fe0
10089441:	83 c4 0c             	add    esp,0xc
10089444:	eb 0a                	jmp    0x10089450
10089446:	83 fb 32             	cmp    ebx,0x32
10089449:	74 6b                	je     0x100894b6
1008944b:	83 fb 33             	cmp    ebx,0x33
1008944e:	74 66                	je     0x100894b6
10089450:	f3 0f 10 45 94       	movss  xmm0,DWORD PTR [ebp-0x6c]
10089455:	f3 0f 59 45 34       	mulss  xmm0,DWORD PTR [ebp+0x34]
1008945a:	0f 5a c0             	cvtps2pd xmm0,xmm0
1008945d:	f2 0f 59 05 40 ef 1b 	mulsd  xmm0,QWORD PTR ds:0x101bef40
10089464:	10 
10089465:	f2 0f 2c c0          	cvttsd2si eax,xmm0
10089469:	f3 0f 10 45 98       	movss  xmm0,DWORD PTR [ebp-0x68]
1008946e:	50                   	push   eax
1008946f:	83 ec 0c             	sub    esp,0xc
10089472:	8b c4                	mov    eax,esp
10089474:	83 ec 0c             	sub    esp,0xc
10089477:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
1008947b:	f3 0f 10 45 9c       	movss  xmm0,DWORD PTR [ebp-0x64]
10089480:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
10089485:	f3 0f 10 45 a0       	movss  xmm0,DWORD PTR [ebp-0x60]
1008948a:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
1008948f:	8b c4                	mov    eax,esp
10089491:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
10089496:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
1008949a:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
1008949f:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
100894a4:	f3 0f 10 45 18       	movss  xmm0,DWORD PTR [ebp+0x18]
100894a9:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
100894ae:	e8 8d e6 08 00       	call   0x10117b40
100894b3:	83 c4 1c             	add    esp,0x1c
100894b6:	8b 45 48             	mov    eax,DWORD PTR [ebp+0x48]
100894b9:	8b 75 f4             	mov    esi,DWORD PTR [ebp-0xc]
100894bc:	40                   	inc    eax
100894bd:	83 6d 0c 01          	sub    DWORD PTR [ebp+0xc],0x1
100894c1:	89 45 48             	mov    DWORD PTR [ebp+0x48],eax
100894c4:	0f 85 f6 f8 ff ff    	jne    0x10088dc0
100894ca:	ff 75 44             	push   DWORD PTR [ebp+0x44]
100894cd:	ff 76 04             	push   DWORD PTR [esi+0x4]
100894d0:	e8 1b 24 09 00       	call   0x1011b8f0
100894d5:	8b 45 b4             	mov    eax,DWORD PTR [ebp-0x4c]
100894d8:	83 c4 08             	add    esp,0x8
100894db:	85 c0                	test   eax,eax
100894dd:	0f 85 7e 00 00 00    	jne    0x10089561
100894e3:	50                   	push   eax
100894e4:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
100894ea:	83 c4 04             	add    esp,0x4
100894ed:	85 c0                	test   eax,eax
100894ef:	75 70                	jne    0x10089561
100894f1:	33 f6                	xor    esi,esi
100894f3:	8b 06                	mov    eax,DWORD PTR [esi]
100894f5:	8b ce                	mov    ecx,esi
100894f7:	ff 90 c0 00 00 00    	call   DWORD PTR [eax+0xc0]
100894fd:	85 ff                	test   edi,edi
100894ff:	0f 84 3c 01 00 00    	je     0x10089641
10089505:	85 c0                	test   eax,eax
10089507:	0f 84 29 01 00 00    	je     0x10089636
1008950d:	83 fb 32             	cmp    ebx,0x32
10089510:	0f 84 2b 01 00 00    	je     0x10089641
10089516:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10089519:	ba 14 ef 1b 10       	mov    edx,0x101bef14
1008951e:	8b 88 0c 02 00 00    	mov    ecx,DWORD PTR [eax+0x20c]
10089524:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
1008952a:	f7 d9                	neg    ecx
1008952c:	1b c9                	sbb    ecx,ecx
1008952e:	23 c8                	and    ecx,eax
10089530:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10089535:	8b 09                	mov    ecx,DWORD PTR [ecx]
10089537:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1008953d:	03 c1                	add    eax,ecx
1008953f:	8b c8                	mov    ecx,eax
10089541:	8a 19                	mov    bl,BYTE PTR [ecx]
10089543:	3a 1a                	cmp    bl,BYTE PTR [edx]
10089545:	75 75                	jne    0x100895bc
10089547:	84 db                	test   bl,bl
10089549:	74 12                	je     0x1008955d
1008954b:	8a 59 01             	mov    bl,BYTE PTR [ecx+0x1]
1008954e:	3a 5a 01             	cmp    bl,BYTE PTR [edx+0x1]
10089551:	75 69                	jne    0x100895bc
10089553:	83 c1 02             	add    ecx,0x2
10089556:	83 c2 02             	add    edx,0x2
10089559:	84 db                	test   bl,bl
1008955b:	75 e4                	jne    0x10089541
1008955d:	33 c9                	xor    ecx,ecx
1008955f:	eb 60                	jmp    0x100895c1
10089561:	8b 70 7c             	mov    esi,DWORD PTR [eax+0x7c]
10089564:	85 f6                	test   esi,esi
10089566:	74 8b                	je     0x100894f3
10089568:	8b 06                	mov    eax,DWORD PTR [esi]
1008956a:	8b ce                	mov    ecx,esi
1008956c:	ff 90 c0 00 00 00    	call   DWORD PTR [eax+0xc0]
10089572:	85 c0                	test   eax,eax
10089574:	74 0e                	je     0x10089584
10089576:	83 fb 32             	cmp    ebx,0x32
10089579:	74 09                	je     0x10089584
1008957b:	83 fb 33             	cmp    ebx,0x33
1008957e:	0f 85 6f ff ff ff    	jne    0x100894f3
10089584:	85 ff                	test   edi,edi
10089586:	0f 84 b5 00 00 00    	je     0x10089641
1008958c:	83 fb 32             	cmp    ebx,0x32
1008958f:	0f 84 ac 00 00 00    	je     0x10089641
10089595:	83 fb 33             	cmp    ebx,0x33
10089598:	0f 84 a3 00 00 00    	je     0x10089641
1008959e:	8b 07                	mov    eax,DWORD PTR [edi]
100895a0:	8b cf                	mov    ecx,edi
100895a2:	56                   	push   esi
100895a3:	ff 90 38 01 00 00    	call   DWORD PTR [eax+0x138]
100895a9:	85 c0                	test   eax,eax
100895ab:	0f 8e 8a 00 00 00    	jle    0x1008963b
100895b1:	ff 87 40 06 00 00    	inc    DWORD PTR [edi+0x640]
100895b7:	e9 85 00 00 00       	jmp    0x10089641
100895bc:	1b c9                	sbb    ecx,ecx
100895be:	83 c9 01             	or     ecx,0x1
100895c1:	85 c9                	test   ecx,ecx
100895c3:	74 34                	je     0x100895f9
100895c5:	ba 24 ef 1b 10       	mov    edx,0x101bef24
100895ca:	8b c8                	mov    ecx,eax
100895cc:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100895d0:	8a 19                	mov    bl,BYTE PTR [ecx]
100895d2:	3a 1a                	cmp    bl,BYTE PTR [edx]
100895d4:	75 1a                	jne    0x100895f0
100895d6:	84 db                	test   bl,bl
100895d8:	74 12                	je     0x100895ec
100895da:	8a 59 01             	mov    bl,BYTE PTR [ecx+0x1]
100895dd:	3a 5a 01             	cmp    bl,BYTE PTR [edx+0x1]
100895e0:	75 0e                	jne    0x100895f0
100895e2:	83 c1 02             	add    ecx,0x2
100895e5:	83 c2 02             	add    edx,0x2
100895e8:	84 db                	test   bl,bl
100895ea:	75 e4                	jne    0x100895d0
100895ec:	33 c9                	xor    ecx,ecx
100895ee:	eb 05                	jmp    0x100895f5
100895f0:	1b c9                	sbb    ecx,ecx
100895f2:	83 c9 01             	or     ecx,0x1
100895f5:	85 c9                	test   ecx,ecx
100895f7:	75 42                	jne    0x1008963b
100895f9:	b9 24 ef 1b 10       	mov    ecx,0x101bef24
100895fe:	66 90                	xchg   ax,ax
10089600:	8a 10                	mov    dl,BYTE PTR [eax]
10089602:	3a 11                	cmp    dl,BYTE PTR [ecx]
10089604:	75 1a                	jne    0x10089620
10089606:	84 d2                	test   dl,dl
10089608:	74 12                	je     0x1008961c
1008960a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1008960d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10089610:	75 0e                	jne    0x10089620
10089612:	83 c0 02             	add    eax,0x2
10089615:	83 c1 02             	add    ecx,0x2
10089618:	84 d2                	test   dl,dl
1008961a:	75 e4                	jne    0x10089600
1008961c:	33 c0                	xor    eax,eax
1008961e:	eb 05                	jmp    0x10089625
10089620:	1b c0                	sbb    eax,eax
10089622:	83 c8 01             	or     eax,0x1
10089625:	85 c0                	test   eax,eax
10089627:	75 88                	jne    0x100895b1
10089629:	38 45 3b             	cmp    BYTE PTR [ebp+0x3b],al
1008962c:	74 0d                	je     0x1008963b
1008962e:	ff 87 40 06 00 00    	inc    DWORD PTR [edi+0x640]
10089634:	eb 0b                	jmp    0x10089641
10089636:	83 fb 32             	cmp    ebx,0x32
10089639:	74 06                	je     0x10089641
1008963b:	ff 87 48 06 00 00    	inc    DWORD PTR [edi+0x648]
10089641:	f3 0f 10 45 e4       	movss  xmm0,DWORD PTR [ebp-0x1c]
10089646:	f3 0f 59 45 28       	mulss  xmm0,DWORD PTR [ebp+0x28]
1008964b:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1008964e:	5f                   	pop    edi
1008964f:	5e                   	pop    esi
10089650:	5b                   	pop    ebx
10089651:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
10089655:	f3 0f 10 45 e0       	movss  xmm0,DWORD PTR [ebp-0x20]
1008965a:	f3 0f 59 45 2c       	mulss  xmm0,DWORD PTR [ebp+0x2c]
1008965f:	c7 40 08 00 00 00 00 	mov    DWORD PTR [eax+0x8],0x0
10089666:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
1008966b:	8b e5                	mov    esp,ebp
1008966d:	5d                   	pop    ebp
1008966e:	c2 44 00             	ret    0x44
