
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10009e50 <.text+0x8e50>:
10009e50:	53                   	push   ebx
10009e51:	8b dc                	mov    ebx,esp
10009e53:	83 ec 08             	sub    esp,0x8
10009e56:	83 e4 f0             	and    esp,0xfffffff0
10009e59:	83 c4 04             	add    esp,0x4
10009e5c:	55                   	push   ebp
10009e5d:	8b 6b 04             	mov    ebp,DWORD PTR [ebx+0x4]
10009e60:	89 6c 24 04          	mov    DWORD PTR [esp+0x4],ebp
10009e64:	8b ec                	mov    ebp,esp
10009e66:	81 ec fc 00 00 00    	sub    esp,0xfc
10009e6c:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
10009e71:	33 c5                	xor    eax,ebp
10009e73:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10009e76:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
10009e7c:	0f 57 c9             	xorps  xmm1,xmm1
10009e7f:	56                   	push   esi
10009e80:	f3 0f 10 81 68 54 04 	movss  xmm0,DWORD PTR [ecx+0x45468]
10009e87:	00 
10009e88:	f3 0f 11 45 cc       	movss  DWORD PTR [ebp-0x34],xmm0
10009e8d:	f3 0f 10 81 6c 54 04 	movss  xmm0,DWORD PTR [ecx+0x4546c]
10009e94:	00 
10009e95:	f3 0f 11 45 d0       	movss  DWORD PTR [ebp-0x30],xmm0
10009e9a:	f3 0f 10 81 14 02 00 	movss  xmm0,DWORD PTR [ecx+0x214]
10009ea1:	00 
10009ea2:	0f 2e c1             	ucomiss xmm0,xmm1
10009ea5:	f3 0f 10 0d fc 1e 1a 	movss  xmm1,DWORD PTR ds:0x101a1efc
10009eac:	10 
10009ead:	9f                   	lahf
10009eae:	f6 c4 44             	test   ah,0x44
10009eb1:	7b 09                	jnp    0x10009ebc
10009eb3:	0f 2f c8             	comiss xmm1,xmm0
10009eb6:	0f 87 ba 06 00 00    	ja     0x1000a576
10009ebc:	0f 2f c1             	comiss xmm0,xmm1
10009ebf:	72 49                	jb     0x10009f0a
10009ec1:	c7 41 14 00 00 00 00 	mov    DWORD PTR [ecx+0x14],0x0
10009ec8:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10009ecd:	c7 40 18 00 00 00 00 	mov    DWORD PTR [eax+0x18],0x0
10009ed4:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10009ed9:	c7 40 1c 00 00 00 00 	mov    DWORD PTR [eax+0x1c],0x0
10009ee0:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10009ee5:	c7 40 20 00 00 00 00 	mov    DWORD PTR [eax+0x20],0x0
10009eec:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10009ef1:	c7 40 24 00 00 00 00 	mov    DWORD PTR [eax+0x24],0x0
10009ef8:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10009efd:	c7 40 28 00 00 00 00 	mov    DWORD PTR [eax+0x28],0x0
10009f04:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
10009f0a:	c7 41 1c 00 00 00 00 	mov    DWORD PTR [ecx+0x1c],0x0
10009f11:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10009f16:	c7 40 28 00 00 00 00 	mov    DWORD PTR [eax+0x28],0x0
10009f1d:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10009f22:	83 c0 14             	add    eax,0x14
10009f25:	50                   	push   eax
10009f26:	e8 a5 94 ff ff       	call   0x100033d0
10009f2b:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10009f30:	dd d8                	fstp   st(0)
10009f32:	83 c0 20             	add    eax,0x20
10009f35:	50                   	push   eax
10009f36:	e8 95 94 ff ff       	call   0x100033d0
10009f3b:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10009f40:	dd d8                	fstp   st(0)
10009f42:	f3 0f 10 40 14       	movss  xmm0,DWORD PTR [eax+0x14]
10009f47:	f3 0f 10 50 20       	movss  xmm2,DWORD PTR [eax+0x20]
10009f4c:	f3 0f 59 45 cc       	mulss  xmm0,DWORD PTR [ebp-0x34]
10009f51:	f3 0f 59 55 d0       	mulss  xmm2,DWORD PTR [ebp-0x30]
10009f56:	f3 0f 58 d0          	addss  xmm2,xmm0
10009f5a:	f3 0f 11 55 e4       	movss  DWORD PTR [ebp-0x1c],xmm2
10009f5f:	f3 0f 10 48 24       	movss  xmm1,DWORD PTR [eax+0x24]
10009f64:	f3 0f 10 40 18       	movss  xmm0,DWORD PTR [eax+0x18]
10009f69:	8d 45 d8             	lea    eax,[ebp-0x28]
10009f6c:	f3 0f 59 4d d0       	mulss  xmm1,DWORD PTR [ebp-0x30]
10009f71:	50                   	push   eax
10009f72:	f3 0f 59 45 cc       	mulss  xmm0,DWORD PTR [ebp-0x34]
10009f77:	c7 45 ec 00 00 00 00 	mov    DWORD PTR [ebp-0x14],0x0
10009f7e:	f3 0f 11 55 d8       	movss  DWORD PTR [ebp-0x28],xmm2
10009f83:	c7 45 e0 00 00 00 00 	mov    DWORD PTR [ebp-0x20],0x0
10009f8a:	f3 0f 58 c8          	addss  xmm1,xmm0
10009f8e:	f3 0f 11 4d e8       	movss  DWORD PTR [ebp-0x18],xmm1
10009f93:	f3 0f 11 4d dc       	movss  DWORD PTR [ebp-0x24],xmm1
10009f98:	e8 33 94 ff ff       	call   0x100033d0
10009f9d:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
10009fa3:	83 c4 0c             	add    esp,0xc
10009fa6:	d9 5d d0             	fstp   DWORD PTR [ebp-0x30]
10009fa9:	f3 0f 10 81 f8 01 00 	movss  xmm0,DWORD PTR [ecx+0x1f8]
10009fb0:	00 
10009fb1:	f3 0f 59 45 d0       	mulss  xmm0,DWORD PTR [ebp-0x30]
10009fb6:	f3 0f 10 89 f4 01 00 	movss  xmm1,DWORD PTR [ecx+0x1f4]
10009fbd:	00 
10009fbe:	f3 0f 5e 05 1c 1f 1a 	divss  xmm0,DWORD PTR ds:0x101a1f1c
10009fc5:	10 
10009fc6:	0f 2f c1             	comiss xmm0,xmm1
10009fc9:	f3 0f 11 45 d4       	movss  DWORD PTR [ebp-0x2c],xmm0
10009fce:	76 2a                	jbe    0x10009ffa
10009fd0:	f3 0f 5e c8          	divss  xmm1,xmm0
10009fd4:	8d 45 e4             	lea    eax,[ebp-0x1c]
10009fd7:	50                   	push   eax
10009fd8:	51                   	push   ecx
10009fd9:	f3 0f 11 0c 24       	movss  DWORD PTR [esp],xmm1
10009fde:	50                   	push   eax
10009fdf:	e8 ac 94 ff ff       	call   0x10003490
10009fe4:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
10009fea:	83 c4 0c             	add    esp,0xc
10009fed:	f3 0f 10 81 f4 01 00 	movss  xmm0,DWORD PTR [ecx+0x1f4]
10009ff4:	00 
10009ff5:	f3 0f 11 45 d4       	movss  DWORD PTR [ebp-0x2c],xmm0
10009ffa:	8d 81 f4 f3 04 00    	lea    eax,[ecx+0x4f3f4]
1000a000:	68 70 14 1a 10       	push   0x101a1470
1000a005:	50                   	push   eax
1000a006:	8b 81 58 f5 04 00    	mov    eax,DWORD PTR [ecx+0x4f558]
1000a00c:	ff d0                	call   eax
1000a00e:	50                   	push   eax
1000a00f:	e8 4a 15 16 00       	call   0x1016b55e
1000a014:	83 c4 0c             	add    esp,0xc
1000a017:	85 c0                	test   eax,eax
1000a019:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000a01e:	74 42                	je     0x1000a062
1000a020:	f7 80 b8 00 00 00 00 	test   DWORD PTR [eax+0xb8],0x40000
1000a027:	00 04 00 
1000a02a:	75 36                	jne    0x1000a062
1000a02c:	83 b8 98 00 00 00 00 	cmp    DWORD PTR [eax+0x98],0x0
1000a033:	f3 0f 10 45 d4       	movss  xmm0,DWORD PTR [ebp-0x2c]
1000a038:	f2 0f 10 0d 60 1e 1a 	movsd  xmm1,QWORD PTR ds:0x101a1e60
1000a03f:	10 
1000a040:	0f 5a c0             	cvtps2pd xmm0,xmm0
1000a043:	f2 0f 59 c1          	mulsd  xmm0,xmm1
1000a047:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1000a04b:	f3 0f 11 45 d4       	movss  DWORD PTR [ebp-0x2c],xmm0
1000a050:	74 10                	je     0x1000a062
1000a052:	0f 5a c0             	cvtps2pd xmm0,xmm0
1000a055:	f2 0f 59 c1          	mulsd  xmm0,xmm1
1000a059:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1000a05d:	f3 0f 11 45 d4       	movss  DWORD PTR [ebp-0x2c],xmm0
1000a062:	c7 40 64 00 00 00 00 	mov    DWORD PTR [eax+0x64],0x0
1000a069:	83 ec 08             	sub    esp,0x8
1000a06c:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000a071:	8b 80 f4 f4 04 00    	mov    eax,DWORD PTR [eax+0x4f4f4]
1000a077:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
1000a07c:	8d 45 d8             	lea    eax,[ebp-0x28]
1000a07f:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
1000a085:	f3 0f 10 05 f4 1e 1a 	movss  xmm0,DWORD PTR ds:0x101a1ef4
1000a08c:	10 
1000a08d:	f3 0f 5f 45 d4       	maxss  xmm0,DWORD PTR [ebp-0x2c]
1000a092:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1000a097:	50                   	push   eax
1000a098:	e8 d3 95 ff ff       	call   0x10003670
1000a09d:	8b 15 50 0c 22 10    	mov    edx,DWORD PTR ds:0x10220c50
1000a0a3:	c7 42 64 00 00 00 00 	mov    DWORD PTR [edx+0x64],0x0
1000a0aa:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000a0af:	8d 48 5c             	lea    ecx,[eax+0x5c]
1000a0b2:	51                   	push   ecx
1000a0b3:	f3 0f 10 40 74       	movss  xmm0,DWORD PTR [eax+0x74]
1000a0b8:	f3 0f 58 01          	addss  xmm0,DWORD PTR [ecx]
1000a0bc:	f3 0f 11 01          	movss  DWORD PTR [ecx],xmm0
1000a0c0:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000a0c5:	f3 0f 10 40 78       	movss  xmm0,DWORD PTR [eax+0x78]
1000a0ca:	f3 0f 58 40 60       	addss  xmm0,DWORD PTR [eax+0x60]
1000a0cf:	f3 0f 11 40 60       	movss  DWORD PTR [eax+0x60],xmm0
1000a0d4:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000a0d9:	f3 0f 10 40 7c       	movss  xmm0,DWORD PTR [eax+0x7c]
1000a0de:	f3 0f 58 42 64       	addss  xmm0,DWORD PTR [edx+0x64]
1000a0e3:	f3 0f 11 42 64       	movss  DWORD PTR [edx+0x64],xmm0
1000a0e8:	e8 e3 8e ff ff       	call   0x10002fd0
1000a0ed:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
1000a0f4:	10 
1000a0f5:	83 c4 10             	add    esp,0x10
1000a0f8:	d9 5d d0             	fstp   DWORD PTR [ebp-0x30]
1000a0fb:	0f 2f 45 d0          	comiss xmm0,DWORD PTR [ebp-0x30]
1000a0ff:	76 36                	jbe    0x1000a137
1000a101:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000a106:	c7 40 5c 00 00 00 00 	mov    DWORD PTR [eax+0x5c],0x0
1000a10d:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000a112:	c7 40 60 00 00 00 00 	mov    DWORD PTR [eax+0x60],0x0
1000a119:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000a11e:	c7 40 64 00 00 00 00 	mov    DWORD PTR [eax+0x64],0x0
1000a125:	5e                   	pop    esi
1000a126:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1000a129:	33 cd                	xor    ecx,ebp
1000a12b:	e8 83 3a 13 00       	call   0x1013dbb3
1000a130:	8b e5                	mov    esp,ebp
1000a132:	5d                   	pop    ebp
1000a133:	8b e3                	mov    esp,ebx
1000a135:	5b                   	pop    ebx
1000a136:	c3                   	ret
1000a137:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
1000a13d:	8d 55 f0             	lea    edx,[ebp-0x10]
1000a140:	8d 41 38             	lea    eax,[ecx+0x38]
1000a143:	6a ff                	push   0xffffffff
1000a145:	6a 00                	push   0x0
1000a147:	f3 0f 10 41 5c       	movss  xmm0,DWORD PTR [ecx+0x5c]
1000a14c:	f3 0f 59 41 10       	mulss  xmm0,DWORD PTR [ecx+0x10]
1000a151:	8b b1 e0 00 00 00    	mov    esi,DWORD PTR [ecx+0xe0]
1000a157:	52                   	push   edx
1000a158:	50                   	push   eax
1000a159:	f3 0f 58 00          	addss  xmm0,DWORD PTR [eax]
1000a15d:	8d 85 08 ff ff ff    	lea    eax,[ebp-0xf8]
1000a163:	50                   	push   eax
1000a164:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
1000a169:	f3 0f 10 41 60       	movss  xmm0,DWORD PTR [ecx+0x60]
1000a16e:	f3 0f 59 41 10       	mulss  xmm0,DWORD PTR [ecx+0x10]
1000a173:	f3 0f 58 41 3c       	addss  xmm0,DWORD PTR [ecx+0x3c]
1000a178:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
1000a17d:	f3 0f 10 41 40       	movss  xmm0,DWORD PTR [ecx+0x40]
1000a182:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
1000a187:	8b 81 84 f5 04 00    	mov    eax,DWORD PTR [ecx+0x4f584]
1000a18d:	ff d0                	call   eax
1000a18f:	83 c4 14             	add    esp,0x14
1000a192:	0f 10 48 10          	movups xmm1,XMMWORD PTR [eax+0x10]
1000a196:	0f 10 00             	movups xmm0,XMMWORD PTR [eax]
1000a199:	0f 2e 0d 90 13 1a 10 	ucomiss xmm1,DWORD PTR ds:0x101a1390
1000a1a0:	0f 11 85 50 ff ff ff 	movups XMMWORD PTR [ebp-0xb0],xmm0
1000a1a7:	0f 10 40 20          	movups xmm0,XMMWORD PTR [eax+0x20]
1000a1ab:	0f 29 8d 60 ff ff ff 	movaps XMMWORD PTR [ebp-0xa0],xmm1
1000a1b2:	0f 11 85 70 ff ff ff 	movups XMMWORD PTR [ebp-0x90],xmm0
1000a1b9:	0f 10 40 30          	movups xmm0,XMMWORD PTR [eax+0x30]
1000a1bd:	9f                   	lahf
1000a1be:	0f 11 45 80          	movups XMMWORD PTR [ebp-0x80],xmm0
1000a1c2:	f6 c4 44             	test   ah,0x44
1000a1c5:	7a 48                	jp     0x1000a20f
1000a1c7:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000a1cc:	f3 0f 10 85 64 ff ff 	movss  xmm0,DWORD PTR [ebp-0x9c]
1000a1d3:	ff 
1000a1d4:	f3 0f 11 40 38       	movss  DWORD PTR [eax+0x38],xmm0
1000a1d9:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000a1de:	f3 0f 10 85 68 ff ff 	movss  xmm0,DWORD PTR [ebp-0x98]
1000a1e5:	ff 
1000a1e6:	f3 0f 11 40 3c       	movss  DWORD PTR [eax+0x3c],xmm0
1000a1eb:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000a1f0:	f3 0f 10 85 6c ff ff 	movss  xmm0,DWORD PTR [ebp-0x94]
1000a1f7:	ff 
1000a1f8:	f3 0f 11 40 40       	movss  DWORD PTR [eax+0x40],xmm0
1000a1fd:	5e                   	pop    esi
1000a1fe:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1000a201:	33 cd                	xor    ecx,ebp
1000a203:	e8 ab 39 13 00       	call   0x1013dbb3
1000a208:	8b e5                	mov    esp,ebp
1000a20a:	5d                   	pop    ebp
1000a20b:	8b e3                	mov    esp,ebx
1000a20d:	5b                   	pop    ebx
1000a20e:	c3                   	ret
1000a20f:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
1000a215:	83 fe ff             	cmp    esi,0xffffffff
1000a218:	75 1a                	jne    0x1000a234
1000a21a:	83 b9 e4 00 00 00 00 	cmp    DWORD PTR [ecx+0xe4],0x0
1000a221:	0f 84 4f 03 00 00    	je     0x1000a576
1000a227:	83 b9 e8 00 00 00 ed 	cmp    DWORD PTR [ecx+0xe8],0xffffffed
1000a22e:	0f 84 42 03 00 00    	je     0x1000a576
1000a234:	f3 0f 10 81 cc 00 00 	movss  xmm0,DWORD PTR [ecx+0xcc]
1000a23b:	00 
1000a23c:	0f 57 c9             	xorps  xmm1,xmm1
1000a23f:	0f 2e c1             	ucomiss xmm0,xmm1
1000a242:	9f                   	lahf
1000a243:	f6 c4 44             	test   ah,0x44
1000a246:	0f 8a 2a 03 00 00    	jp     0x1000a576
1000a24c:	f3 0f 10 41 38       	movss  xmm0,DWORD PTR [ecx+0x38]
1000a251:	f3 0f 11 45 c8       	movss  DWORD PTR [ebp-0x38],xmm0
1000a256:	f3 0f 10 41 3c       	movss  xmm0,DWORD PTR [ecx+0x3c]
1000a25b:	f3 0f 11 45 d4       	movss  DWORD PTR [ebp-0x2c],xmm0
1000a260:	f3 0f 10 41 40       	movss  xmm0,DWORD PTR [ecx+0x40]
1000a265:	f3 0f 11 45 c0       	movss  DWORD PTR [ebp-0x40],xmm0
1000a26a:	f3 0f 10 41 5c       	movss  xmm0,DWORD PTR [ecx+0x5c]
1000a26f:	f3 0f 11 45 bc       	movss  DWORD PTR [ebp-0x44],xmm0
1000a274:	f3 0f 10 41 60       	movss  xmm0,DWORD PTR [ecx+0x60]
1000a279:	f3 0f 11 45 b8       	movss  DWORD PTR [ebp-0x48],xmm0
1000a27e:	f3 0f 10 41 64       	movss  xmm0,DWORD PTR [ecx+0x64]
1000a283:	f3 0f 11 45 b4       	movss  DWORD PTR [ebp-0x4c],xmm0
1000a288:	e8 f3 b5 ff ff       	call   0x10005880
1000a28d:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000a292:	f3 0f 10 40 38       	movss  xmm0,DWORD PTR [eax+0x38]
1000a297:	8d 50 38             	lea    edx,[eax+0x38]
1000a29a:	f3 0f 11 45 c4       	movss  DWORD PTR [ebp-0x3c],xmm0
1000a29f:	6a ff                	push   0xffffffff
1000a2a1:	f3 0f 10 40 3c       	movss  xmm0,DWORD PTR [eax+0x3c]
1000a2a6:	f3 0f 11 45 cc       	movss  DWORD PTR [ebp-0x34],xmm0
1000a2ab:	f3 0f 10 40 40       	movss  xmm0,DWORD PTR [eax+0x40]
1000a2b0:	f3 0f 11 45 b0       	movss  DWORD PTR [ebp-0x50],xmm0
1000a2b5:	f3 0f 10 40 5c       	movss  xmm0,DWORD PTR [eax+0x5c]
1000a2ba:	f3 0f 11 45 ac       	movss  DWORD PTR [ebp-0x54],xmm0
1000a2bf:	f3 0f 10 40 60       	movss  xmm0,DWORD PTR [eax+0x60]
1000a2c4:	f3 0f 11 45 a8       	movss  DWORD PTR [ebp-0x58],xmm0
1000a2c9:	f3 0f 10 40 64       	movss  xmm0,DWORD PTR [eax+0x64]
1000a2ce:	f3 0f 11 45 d0       	movss  DWORD PTR [ebp-0x30],xmm0
1000a2d3:	f3 0f 10 45 c8       	movss  xmm0,DWORD PTR [ebp-0x38]
1000a2d8:	f3 0f 11 02          	movss  DWORD PTR [edx],xmm0
1000a2dc:	f3 0f 10 45 d4       	movss  xmm0,DWORD PTR [ebp-0x2c]
1000a2e1:	f3 0f 11 40 3c       	movss  DWORD PTR [eax+0x3c],xmm0
1000a2e6:	f3 0f 10 45 c0       	movss  xmm0,DWORD PTR [ebp-0x40]
1000a2eb:	f3 0f 11 40 40       	movss  DWORD PTR [eax+0x40],xmm0
1000a2f0:	f3 0f 10 45 bc       	movss  xmm0,DWORD PTR [ebp-0x44]
1000a2f5:	f3 0f 11 40 5c       	movss  DWORD PTR [eax+0x5c],xmm0
1000a2fa:	f3 0f 10 45 b8       	movss  xmm0,DWORD PTR [ebp-0x48]
1000a2ff:	f3 0f 11 40 60       	movss  DWORD PTR [eax+0x60],xmm0
1000a304:	f3 0f 10 45 b4       	movss  xmm0,DWORD PTR [ebp-0x4c]
1000a309:	f3 0f 11 40 64       	movss  DWORD PTR [eax+0x64],xmm0
1000a30e:	f3 0f 10 02          	movss  xmm0,DWORD PTR [edx]
1000a312:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
1000a318:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
1000a31d:	f3 0f 10 40 3c       	movss  xmm0,DWORD PTR [eax+0x3c]
1000a322:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
1000a327:	f3 0f 10 48 40       	movss  xmm1,DWORD PTR [eax+0x40]
1000a32c:	f3 0f 11 4d f8       	movss  DWORD PTR [ebp-0x8],xmm1
1000a331:	8b 81 f4 f4 04 00    	mov    eax,DWORD PTR [ecx+0x4f4f4]
1000a337:	6a 00                	push   0x0
1000a339:	f3 0f 10 40 30       	movss  xmm0,DWORD PTR [eax+0x30]
1000a33e:	8d 45 f0             	lea    eax,[ebp-0x10]
1000a341:	50                   	push   eax
1000a342:	f3 0f 58 c1          	addss  xmm0,xmm1
1000a346:	52                   	push   edx
1000a347:	8d 85 08 ff ff ff    	lea    eax,[ebp-0xf8]
1000a34d:	50                   	push   eax
1000a34e:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
1000a353:	8b 81 84 f5 04 00    	mov    eax,DWORD PTR [ecx+0x4f584]
1000a359:	ff d0                	call   eax
1000a35b:	83 c4 14             	add    esp,0x14
1000a35e:	0f 10 40 10          	movups xmm0,XMMWORD PTR [eax+0x10]
1000a362:	0f 10 08             	movups xmm1,XMMWORD PTR [eax]
1000a365:	0f 11 85 60 ff ff ff 	movups XMMWORD PTR [ebp-0xa0],xmm0
1000a36c:	0f 10 40 20          	movups xmm0,XMMWORD PTR [eax+0x20]
1000a370:	0f 29 8d 50 ff ff ff 	movaps XMMWORD PTR [ebp-0xb0],xmm1
1000a377:	0f 11 85 70 ff ff ff 	movups XMMWORD PTR [ebp-0x90],xmm0
1000a37e:	0f 10 40 30          	movups xmm0,XMMWORD PTR [eax+0x30]
1000a382:	66 0f 73 d9 04       	psrldq xmm1,0x4
1000a387:	66 0f 7e c8          	movd   eax,xmm1
1000a38b:	0f 11 45 80          	movups XMMWORD PTR [ebp-0x80],xmm0
1000a38f:	85 c0                	test   eax,eax
1000a391:	75 3e                	jne    0x1000a3d1
1000a393:	39 85 50 ff ff ff    	cmp    DWORD PTR [ebp-0xb0],eax
1000a399:	75 36                	jne    0x1000a3d1
1000a39b:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000a3a0:	f3 0f 10 85 64 ff ff 	movss  xmm0,DWORD PTR [ebp-0x9c]
1000a3a7:	ff 
1000a3a8:	f3 0f 11 40 38       	movss  DWORD PTR [eax+0x38],xmm0
1000a3ad:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000a3b2:	f3 0f 10 85 68 ff ff 	movss  xmm0,DWORD PTR [ebp-0x98]
1000a3b9:	ff 
1000a3ba:	f3 0f 11 40 3c       	movss  DWORD PTR [eax+0x3c],xmm0
1000a3bf:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000a3c4:	f3 0f 10 85 6c ff ff 	movss  xmm0,DWORD PTR [ebp-0x94]
1000a3cb:	ff 
1000a3cc:	f3 0f 11 40 40       	movss  DWORD PTR [eax+0x40],xmm0
1000a3d1:	e8 aa b4 ff ff       	call   0x10005880
1000a3d6:	8b 15 50 0c 22 10    	mov    edx,DWORD PTR ds:0x10220c50
1000a3dc:	f3 0f 10 42 38       	movss  xmm0,DWORD PTR [edx+0x38]
1000a3e1:	8d 4a 38             	lea    ecx,[edx+0x38]
1000a3e4:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
1000a3e9:	6a ff                	push   0xffffffff
1000a3eb:	f3 0f 10 42 3c       	movss  xmm0,DWORD PTR [edx+0x3c]
1000a3f0:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
1000a3f5:	f3 0f 10 42 40       	movss  xmm0,DWORD PTR [edx+0x40]
1000a3fa:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
1000a3ff:	8b 82 f4 f4 04 00    	mov    eax,DWORD PTR [edx+0x4f4f4]
1000a405:	6a 00                	push   0x0
1000a407:	f3 0f 5c 40 30       	subss  xmm0,DWORD PTR [eax+0x30]
1000a40c:	8d 45 f0             	lea    eax,[ebp-0x10]
1000a40f:	50                   	push   eax
1000a410:	51                   	push   ecx
1000a411:	8d 85 08 ff ff ff    	lea    eax,[ebp-0xf8]
1000a417:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
1000a41c:	50                   	push   eax
1000a41d:	8b 82 84 f5 04 00    	mov    eax,DWORD PTR [edx+0x4f584]
1000a423:	ff d0                	call   eax
1000a425:	83 c4 14             	add    esp,0x14
1000a428:	0f 10 00             	movups xmm0,XMMWORD PTR [eax]
1000a42b:	0f 10 48 20          	movups xmm1,XMMWORD PTR [eax+0x20]
1000a42f:	0f 11 85 50 ff ff ff 	movups XMMWORD PTR [ebp-0xb0],xmm0
1000a436:	0f 10 40 10          	movups xmm0,XMMWORD PTR [eax+0x10]
1000a43a:	0f c6 c9 aa          	shufps xmm1,xmm1,0xaa
1000a43e:	0f 11 85 60 ff ff ff 	movups XMMWORD PTR [ebp-0xa0],xmm0
1000a445:	0f 10 40 30          	movups xmm0,XMMWORD PTR [eax+0x30]
1000a449:	f3 0f 5a c9          	cvtss2sd xmm1,xmm1
1000a44d:	0f 11 45 80          	movups XMMWORD PTR [ebp-0x80],xmm0
1000a451:	f2 0f 10 05 58 1e 1a 	movsd  xmm0,QWORD PTR ds:0x101a1e58
1000a458:	10 
1000a459:	66 0f 2f c1          	comisd xmm0,xmm1
1000a45d:	0f 87 b9 00 00 00    	ja     0x1000a51c
1000a463:	83 bd 54 ff ff ff 00 	cmp    DWORD PTR [ebp-0xac],0x0
1000a46a:	75 3f                	jne    0x1000a4ab
1000a46c:	83 bd 50 ff ff ff 00 	cmp    DWORD PTR [ebp-0xb0],0x0
1000a473:	75 36                	jne    0x1000a4ab
1000a475:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000a47a:	f3 0f 10 85 64 ff ff 	movss  xmm0,DWORD PTR [ebp-0x9c]
1000a481:	ff 
1000a482:	f3 0f 11 40 38       	movss  DWORD PTR [eax+0x38],xmm0
1000a487:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000a48c:	f3 0f 10 85 68 ff ff 	movss  xmm0,DWORD PTR [ebp-0x98]
1000a493:	ff 
1000a494:	f3 0f 11 40 3c       	movss  DWORD PTR [eax+0x3c],xmm0
1000a499:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000a49e:	f3 0f 10 85 6c ff ff 	movss  xmm0,DWORD PTR [ebp-0x94]
1000a4a5:	ff 
1000a4a6:	f3 0f 11 40 40       	movss  DWORD PTR [eax+0x40],xmm0
1000a4ab:	8b 35 50 0c 22 10    	mov    esi,DWORD PTR ds:0x10220c50
1000a4b1:	f3 0f 10 6d cc       	movss  xmm5,DWORD PTR [ebp-0x34]
1000a4b6:	f3 0f 10 65 c4       	movss  xmm4,DWORD PTR [ebp-0x3c]
1000a4bb:	0f 28 d5             	movaps xmm2,xmm5
1000a4be:	f3 0f 5c 55 d4       	subss  xmm2,DWORD PTR [ebp-0x2c]
1000a4c3:	8b 46 38             	mov    eax,DWORD PTR [esi+0x38]
1000a4c6:	0f 28 dc             	movaps xmm3,xmm4
1000a4c9:	f3 0f 5c 5d c8       	subss  xmm3,DWORD PTR [ebp-0x38]
1000a4ce:	89 46 2c             	mov    DWORD PTR [esi+0x2c],eax
1000a4d1:	8b 15 50 0c 22 10    	mov    edx,DWORD PTR ds:0x10220c50
1000a4d7:	f3 0f 59 d2          	mulss  xmm2,xmm2
1000a4db:	f3 0f 59 db          	mulss  xmm3,xmm3
1000a4df:	8b 42 3c             	mov    eax,DWORD PTR [edx+0x3c]
1000a4e2:	89 42 30             	mov    DWORD PTR [edx+0x30],eax
1000a4e5:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
1000a4eb:	f3 0f 58 da          	addss  xmm3,xmm2
1000a4ef:	8b 41 40             	mov    eax,DWORD PTR [ecx+0x40]
1000a4f2:	89 41 34             	mov    DWORD PTR [ecx+0x34],eax
1000a4f5:	f3 0f 10 4a 30       	movss  xmm1,DWORD PTR [edx+0x30]
1000a4fa:	f3 0f 10 46 2c       	movss  xmm0,DWORD PTR [esi+0x2c]
1000a4ff:	f3 0f 5c 45 c8       	subss  xmm0,DWORD PTR [ebp-0x38]
1000a504:	f3 0f 5c 4d d4       	subss  xmm1,DWORD PTR [ebp-0x2c]
1000a509:	f3 0f 59 c0          	mulss  xmm0,xmm0
1000a50d:	f3 0f 59 c9          	mulss  xmm1,xmm1
1000a511:	f3 0f 58 c1          	addss  xmm0,xmm1
1000a515:	0f 2f d8             	comiss xmm3,xmm0
1000a518:	77 0c                	ja     0x1000a526
1000a51a:	eb 4b                	jmp    0x1000a567
1000a51c:	f3 0f 10 65 c4       	movss  xmm4,DWORD PTR [ebp-0x3c]
1000a521:	f3 0f 10 6d cc       	movss  xmm5,DWORD PTR [ebp-0x34]
1000a526:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000a52b:	f3 0f 10 45 b0       	movss  xmm0,DWORD PTR [ebp-0x50]
1000a530:	f3 0f 11 60 38       	movss  DWORD PTR [eax+0x38],xmm4
1000a535:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000a53a:	f3 0f 11 68 3c       	movss  DWORD PTR [eax+0x3c],xmm5
1000a53f:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000a544:	f3 0f 11 40 40       	movss  DWORD PTR [eax+0x40],xmm0
1000a549:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000a54e:	f3 0f 10 45 ac       	movss  xmm0,DWORD PTR [ebp-0x54]
1000a553:	f3 0f 11 40 5c       	movss  DWORD PTR [eax+0x5c],xmm0
1000a558:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000a55d:	f3 0f 10 45 a8       	movss  xmm0,DWORD PTR [ebp-0x58]
1000a562:	f3 0f 11 40 60       	movss  DWORD PTR [eax+0x60],xmm0
1000a567:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000a56c:	f3 0f 10 45 d0       	movss  xmm0,DWORD PTR [ebp-0x30]
1000a571:	f3 0f 11 40 64       	movss  DWORD PTR [eax+0x64],xmm0
1000a576:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1000a579:	33 cd                	xor    ecx,ebp
1000a57b:	5e                   	pop    esi
1000a57c:	e8 32 36 13 00       	call   0x1013dbb3
1000a581:	8b e5                	mov    esp,ebp
1000a583:	5d                   	pop    ebp
1000a584:	8b e3                	mov    esp,ebx
1000a586:	5b                   	pop    ebx
1000a587:	c3                   	ret
1000a588:	cc                   	int3
1000a589:	cc                   	int3
1000a58a:	cc                   	int3
1000a58b:	cc                   	int3
1000a58c:	cc                   	int3
1000a58d:	cc                   	int3
1000a58e:	cc                   	int3
1000a58f:	cc                   	int3
