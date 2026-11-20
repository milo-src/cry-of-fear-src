
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10120eb0 <.text+0x11feb0>:
10120eb0:	55                   	push   ebp
10120eb1:	8b ec                	mov    ebp,esp
10120eb3:	6a ff                	push   0xffffffff
10120eb5:	68 a7 e1 19 10       	push   0x1019e1a7
10120eba:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10120ec0:	50                   	push   eax
10120ec1:	51                   	push   ecx
10120ec2:	56                   	push   esi
10120ec3:	57                   	push   edi
10120ec4:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
10120ec9:	33 c5                	xor    eax,ebp
10120ecb:	50                   	push   eax
10120ecc:	8d 45 f4             	lea    eax,[ebp-0xc]
10120ecf:	64 a3 00 00 00 00    	mov    fs:0x0,eax
10120ed5:	8b f9                	mov    edi,ecx
10120ed7:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10120edc:	68 4c 92 1a 10       	push   0x101a924c
10120ee1:	8b 90 98 00 00 00    	mov    edx,DWORD PTR [eax+0x98]
10120ee7:	03 50 0c             	add    edx,DWORD PTR [eax+0xc]
10120eea:	52                   	push   edx
10120eeb:	e8 00 e7 01 00       	call   0x1013f5f0
10120ef0:	f7 d8                	neg    eax
10120ef2:	c7 05 14 2f 22 10 00 	mov    DWORD PTR ds:0x10222f14,0x0
10120ef9:	00 00 00 
10120efc:	89 3d 90 31 22 10    	mov    DWORD PTR ds:0x10223190,edi
10120f02:	1b c0                	sbb    eax,eax
10120f04:	f7 d8                	neg    eax
10120f06:	a3 10 2f 22 10       	mov    ds:0x10222f10,eax
10120f0b:	c7 47 3c 00 00 00 00 	mov    DWORD PTR [edi+0x3c],0x0
10120f12:	c7 87 fc 00 00 00 00 	mov    DWORD PTR [edi+0xfc],0x0
10120f19:	00 00 00 
10120f1c:	68 4c 6f 1e 10       	push   0x101e6f4c
10120f21:	68 c8 d9 1c 10       	push   0x101cd9c8
10120f26:	c7 05 20 2f 22 10 00 	mov    DWORD PTR ds:0x10222f20,0x0
10120f2d:	00 00 00 
10120f30:	c7 05 14 67 22 10 00 	mov    DWORD PTR ds:0x10226714,0x0
10120f37:	00 00 00 
10120f3a:	ff 15 38 30 22 10    	call   DWORD PTR ds:0x10223038
10120f40:	68 50 6f 1e 10       	push   0x101e6f50
10120f45:	68 54 6f 1e 10       	push   0x101e6f54
10120f4a:	ff 15 38 30 22 10    	call   DWORD PTR ds:0x10223038
10120f50:	68 34 12 1a 10       	push   0x101a1234
10120f55:	68 28 b3 1d 10       	push   0x101db328
10120f5a:	ff 15 38 30 22 10    	call   DWORD PTR ds:0x10223038
10120f60:	a1 e4 2e 22 10       	mov    eax,ds:0x10222ee4
10120f65:	83 c4 20             	add    esp,0x20
10120f68:	85 c0                	test   eax,eax
10120f6a:	74 0e                	je     0x10120f7a
10120f6c:	68 dc 00 00 00       	push   0xdc
10120f71:	50                   	push   eax
10120f72:	e8 2e cc 01 00       	call   0x1013dba5
10120f77:	83 c4 08             	add    esp,0x8
10120f7a:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10120f7f:	8b 50 0c             	mov    edx,DWORD PTR [eax+0xc]
10120f82:	85 d2                	test   edx,edx
10120f84:	74 4c                	je     0x10120fd2
10120f86:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10120f8c:	b9 08 8e 1c 10       	mov    ecx,0x101c8e08
10120f91:	03 c2                	add    eax,edx
10120f93:	8a 10                	mov    dl,BYTE PTR [eax]
10120f95:	3a 11                	cmp    dl,BYTE PTR [ecx]
10120f97:	75 1a                	jne    0x10120fb3
10120f99:	84 d2                	test   dl,dl
10120f9b:	74 12                	je     0x10120faf
10120f9d:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10120fa0:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10120fa3:	75 0e                	jne    0x10120fb3
10120fa5:	83 c0 02             	add    eax,0x2
10120fa8:	83 c1 02             	add    ecx,0x2
10120fab:	84 d2                	test   dl,dl
10120fad:	75 e4                	jne    0x10120f93
10120faf:	33 c0                	xor    eax,eax
10120fb1:	eb 05                	jmp    0x10120fb8
10120fb3:	1b c0                	sbb    eax,eax
10120fb5:	83 c8 01             	or     eax,0x1
10120fb8:	85 c0                	test   eax,eax
10120fba:	75 16                	jne    0x10120fd2
10120fbc:	51                   	push   ecx
10120fbd:	c7 04 24 00 00 00 40 	mov    DWORD PTR [esp],0x40000000
10120fc4:	68 18 88 1a 10       	push   0x101a8818
10120fc9:	ff 15 34 30 22 10    	call   DWORD PTR ds:0x10223034
10120fcf:	83 c4 08             	add    esp,0x8
10120fd2:	e8 39 e7 f8 ff       	call   0x100af710
10120fd7:	a3 e4 2e 22 10       	mov    ds:0x10222ee4,eax
10120fdc:	85 c0                	test   eax,eax
10120fde:	0f 84 5a 01 00 00    	je     0x1012113e
10120fe4:	c6 80 a8 00 00 00 00 	mov    BYTE PTR [eax+0xa8],0x0
10120feb:	a1 e4 2e 22 10       	mov    eax,ds:0x10222ee4
10120ff0:	c6 80 d4 00 00 00 00 	mov    BYTE PTR [eax+0xd4],0x0
10120ff7:	a1 e4 2e 22 10       	mov    eax,ds:0x10222ee4
10120ffc:	c7 80 d0 00 00 00 00 	mov    DWORD PTR [eax+0xd0],0x0
10121003:	00 00 00 
10121006:	a1 e4 2e 22 10       	mov    eax,ds:0x10222ee4
1012100b:	c7 80 cc 00 00 00 00 	mov    DWORD PTR [eax+0xcc],0x0
10121012:	00 00 00 
10121015:	a1 e4 2e 22 10       	mov    eax,ds:0x10222ee4
1012101a:	c6 80 d4 00 00 00 00 	mov    BYTE PTR [eax+0xd4],0x0
10121021:	a1 e4 2e 22 10       	mov    eax,ds:0x10222ee4
10121026:	c7 80 d8 00 00 00 00 	mov    DWORD PTR [eax+0xd8],0x0
1012102d:	00 00 00 
10121030:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
10121036:	85 c9                	test   ecx,ecx
10121038:	0f 84 00 01 00 00    	je     0x1012113e
1012103e:	8b 01                	mov    eax,DWORD PTR [ecx]
10121040:	ff 50 20             	call   DWORD PTR [eax+0x20]
10121043:	85 c0                	test   eax,eax
10121045:	0f 84 f3 00 00 00    	je     0x1012113e
1012104b:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1012104e:	83 b8 48 02 00 00 00 	cmp    DWORD PTR [eax+0x248],0x0
10121055:	0f 84 9a 00 00 00    	je     0x101210f5
1012105b:	a1 e4 2e 22 10       	mov    eax,ds:0x10222ee4
10121060:	c6 80 a8 00 00 00 01 	mov    BYTE PTR [eax+0xa8],0x1
10121067:	a1 10 2e 22 10       	mov    eax,ds:0x10222e10
1012106c:	85 c0                	test   eax,eax
1012106e:	74 13                	je     0x10121083
10121070:	68 38 0f 01 00       	push   0x10f38
10121075:	83 c0 04             	add    eax,0x4
10121078:	6a 00                	push   0x0
1012107a:	50                   	push   eax
1012107b:	e8 10 e4 01 00       	call   0x1013f490
10121080:	83 c4 0c             	add    esp,0xc
10121083:	68 dc d9 1c 10       	push   0x101cd9dc
10121088:	ff 15 2c 30 22 10    	call   DWORD PTR ds:0x1022302c
1012108e:	d9 5d f0             	fstp   DWORD PTR [ebp-0x10]
10121091:	f3 0f 10 45 f0       	movss  xmm0,DWORD PTR [ebp-0x10]
10121096:	83 c4 04             	add    esp,0x4
10121099:	0f 2f 05 90 13 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1390
101210a0:	76 2c                	jbe    0x101210ce
101210a2:	68 dc d9 1c 10       	push   0x101cd9dc
101210a7:	ff 15 2c 30 22 10    	call   DWORD PTR ds:0x1022302c
101210ad:	a1 88 31 22 10       	mov    eax,ds:0x10223188
101210b2:	83 c4 04             	add    esp,0x4
101210b5:	d8 00                	fadd   DWORD PTR [eax]
101210b7:	a1 e4 2e 22 10       	mov    eax,ds:0x10222ee4
101210bc:	d9 5d f0             	fstp   DWORD PTR [ebp-0x10]
101210bf:	f3 0f 10 45 f0       	movss  xmm0,DWORD PTR [ebp-0x10]
101210c4:	f3 0f 11 80 d8 00 00 	movss  DWORD PTR [eax+0xd8],xmm0
101210cb:	00 
101210cc:	eb 0f                	jmp    0x101210dd
101210ce:	a1 e4 2e 22 10       	mov    eax,ds:0x10222ee4
101210d3:	c7 80 d8 00 00 00 00 	mov    DWORD PTR [eax+0xd8],0x0
101210da:	00 00 00 
101210dd:	b9 01 00 00 00       	mov    ecx,0x1
101210e2:	a1 e4 2e 22 10       	mov    eax,ds:0x10222ee4
101210e7:	c6 84 08 a9 00 00 00 	mov    BYTE PTR [eax+ecx*1+0xa9],0x0
101210ee:	00 
101210ef:	41                   	inc    ecx
101210f0:	83 f9 20             	cmp    ecx,0x20
101210f3:	7e ed                	jle    0x101210e2
101210f5:	83 3d 10 2e 22 10 00 	cmp    DWORD PTR ds:0x10222e10,0x0
101210fc:	75 57                	jne    0x10121155
101210fe:	68 3c 0f 01 00       	push   0x10f3c
10121103:	e8 e1 d0 01 00       	call   0x1013e1e9
10121108:	83 c4 04             	add    esp,0x4
1012110b:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
1012110e:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
10121115:	85 c0                	test   eax,eax
10121117:	74 15                	je     0x1012112e
10121119:	8b c8                	mov    ecx,eax
1012111b:	e8 50 7f f0 ff       	call   0x10029070
10121120:	c7 45 fc ff ff ff ff 	mov    DWORD PTR [ebp-0x4],0xffffffff
10121127:	a3 10 2e 22 10       	mov    ds:0x10222e10,eax
1012112c:	eb 27                	jmp    0x10121155
1012112e:	33 c0                	xor    eax,eax
10121130:	c7 45 fc ff ff ff ff 	mov    DWORD PTR [ebp-0x4],0xffffffff
10121137:	a3 10 2e 22 10       	mov    ds:0x10222e10,eax
1012113c:	eb 17                	jmp    0x10121155
1012113e:	a1 10 2e 22 10       	mov    eax,ds:0x10222e10
10121143:	85 c0                	test   eax,eax
10121145:	74 0e                	je     0x10121155
10121147:	68 3c 0f 01 00       	push   0x10f3c
1012114c:	50                   	push   eax
1012114d:	e8 53 ca 01 00       	call   0x1013dba5
10121152:	83 c4 08             	add    esp,0x8
10121155:	6a 00                	push   0x0
10121157:	e8 94 f3 fd ff       	call   0x101004f0
1012115c:	a3 70 0d 23 10       	mov    ds:0x10230d70,eax
10121161:	83 c4 04             	add    esp,0x4
10121164:	8b c8                	mov    ecx,eax
10121166:	8b 10                	mov    edx,DWORD PTR [eax]
10121168:	ff 52 2c             	call   DWORD PTR [edx+0x2c]
1012116b:	83 3d 70 0d 23 10 00 	cmp    DWORD PTR ds:0x10230d70,0x0
10121172:	75 10                	jne    0x10121184
10121174:	68 60 6f 1e 10       	push   0x101e6f60
10121179:	6a 01                	push   0x1
1012117b:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10121181:	83 c4 08             	add    esp,0x8
10121184:	e8 57 f6 ff ff       	call   0x101207e0
10121189:	e8 e2 cd fd ff       	call   0x100fdf70
1012118e:	e8 cd dd fd ff       	call   0x100fef60
10121193:	e8 f8 eb ff ff       	call   0x1011fd90
10121198:	e8 d3 bd ef ff       	call   0x1001cf70
1012119d:	68 68 40 1a 10       	push   0x101a4068
101211a2:	e8 89 58 ff ff       	call   0x10116a30
101211a7:	68 a4 cc 1d 10       	push   0x101dcca4
101211ac:	e8 7f 58 ff ff       	call   0x10116a30
101211b1:	68 bc cc 1d 10       	push   0x101dccbc
101211b6:	e8 75 58 ff ff       	call   0x10116a30
101211bb:	68 3c 50 1d 10       	push   0x101d503c
101211c0:	e8 6b 58 ff ff       	call   0x10116a30
101211c5:	68 54 50 1d 10       	push   0x101d5054
101211ca:	e8 61 58 ff ff       	call   0x10116a30
101211cf:	68 70 ec 1b 10       	push   0x101bec70
101211d4:	c7 05 ec 2e 22 10 00 	mov    DWORD PTR ds:0x10222eec,0x0
101211db:	00 00 00 
101211de:	e8 ad 57 ff ff       	call   0x10116990
101211e3:	68 84 ec 1b 10       	push   0x101bec84
101211e8:	e8 a3 57 ff ff       	call   0x10116990
101211ed:	68 80 6f 1e 10       	push   0x101e6f80
101211f2:	e8 39 58 ff ff       	call   0x10116a30
101211f7:	68 98 6f 1e 10       	push   0x101e6f98
101211fc:	e8 2f 58 ff ff       	call   0x10116a30
10121201:	68 b0 6f 1e 10       	push   0x101e6fb0
10121206:	e8 25 58 ff ff       	call   0x10116a30
1012120b:	68 c8 6f 1e 10       	push   0x101e6fc8
10121210:	e8 1b 58 ff ff       	call   0x10116a30
10121215:	68 e0 6f 1e 10       	push   0x101e6fe0
1012121a:	e8 11 58 ff ff       	call   0x10116a30
1012121f:	68 f4 6f 1e 10       	push   0x101e6ff4
10121224:	e8 07 58 ff ff       	call   0x10116a30
10121229:	68 08 70 1e 10       	push   0x101e7008
1012122e:	e8 fd 57 ff ff       	call   0x10116a30
10121233:	68 1c 70 1e 10       	push   0x101e701c
10121238:	e8 f3 57 ff ff       	call   0x10116a30
1012123d:	68 30 70 1e 10       	push   0x101e7030
10121242:	e8 e9 57 ff ff       	call   0x10116a30
10121247:	83 c4 40             	add    esp,0x40
1012124a:	68 a0 82 1b 10       	push   0x101b82a0
1012124f:	e8 3c 57 ff ff       	call   0x10116990
10121254:	68 7c 97 1b 10       	push   0x101b977c
10121259:	e8 32 57 ff ff       	call   0x10116990
1012125e:	6a 01                	push   0x1
10121260:	e8 3b 06 00 00       	call   0x101218a0
10121265:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1012126a:	83 c4 0c             	add    esp,0xc
1012126d:	8b 50 0c             	mov    edx,DWORD PTR [eax+0xc]
10121270:	85 d2                	test   edx,edx
10121272:	74 43                	je     0x101212b7
10121274:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1012127a:	b9 1c 29 1e 10       	mov    ecx,0x101e291c
1012127f:	03 c2                	add    eax,edx
10121281:	8a 10                	mov    dl,BYTE PTR [eax]
10121283:	3a 11                	cmp    dl,BYTE PTR [ecx]
10121285:	75 1a                	jne    0x101212a1
10121287:	84 d2                	test   dl,dl
10121289:	74 12                	je     0x1012129d
1012128b:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1012128e:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10121291:	75 0e                	jne    0x101212a1
10121293:	83 c0 02             	add    eax,0x2
10121296:	83 c1 02             	add    ecx,0x2
10121299:	84 d2                	test   dl,dl
1012129b:	75 e4                	jne    0x10121281
1012129d:	33 c0                	xor    eax,eax
1012129f:	eb 05                	jmp    0x101212a6
101212a1:	1b c0                	sbb    eax,eax
101212a3:	83 c8 01             	or     eax,0x1
101212a6:	85 c0                	test   eax,eax
101212a8:	75 0d                	jne    0x101212b7
101212aa:	68 14 6e 1e 10       	push   0x101e6e14
101212af:	e8 dc 84 ff ff       	call   0x10119790
101212b4:	83 c4 04             	add    esp,0x4
101212b7:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
101212bd:	85 c9                	test   ecx,ecx
101212bf:	74 16                	je     0x101212d7
101212c1:	8b 01                	mov    eax,DWORD PTR [ecx]
101212c3:	ff 50 20             	call   DWORD PTR [eax+0x20]
101212c6:	85 c0                	test   eax,eax
101212c8:	74 0d                	je     0x101212d7
101212ca:	68 e4 21 1a 10       	push   0x101a21e4
101212cf:	e8 bc 84 ff ff       	call   0x10119790
101212d4:	83 c4 04             	add    esp,0x4
101212d7:	33 f6                	xor    esi,esi
101212d9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
101212e0:	56                   	push   esi
101212e1:	e8 1a 57 f9 ff       	call   0x100b6a00
101212e6:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
101212ec:	03 81 98 00 00 00    	add    eax,DWORD PTR [ecx+0x98]
101212f2:	50                   	push   eax
101212f3:	56                   	push   esi
101212f4:	ff 15 f4 2f 22 10    	call   DWORD PTR ds:0x10222ff4
101212fa:	46                   	inc    esi
101212fb:	83 c4 0c             	add    esp,0xc
101212fe:	83 fe 0d             	cmp    esi,0xd
10121301:	7e dd                	jle    0x101212e0
10121303:	68 18 b2 1c 10       	push   0x101cb218
10121308:	6a 3f                	push   0x3f
1012130a:	ff 15 f4 2f 22 10    	call   DWORD PTR ds:0x10222ff4
10121310:	68 18 b2 1c 10       	push   0x101cb218
10121315:	6a 3e                	push   0x3e
10121317:	ff 15 f4 2f 22 10    	call   DWORD PTR ds:0x10222ff4
1012131d:	68 18 b2 1c 10       	push   0x101cb218
10121322:	6a 3d                	push   0x3d
10121324:	ff 15 f4 2f 22 10    	call   DWORD PTR ds:0x10222ff4
1012132a:	83 c4 18             	add    esp,0x18
1012132d:	33 f6                	xor    esi,esi
1012132f:	90                   	nop
10121330:	ff b6 40 b9 21 10    	push   DWORD PTR [esi+0x1021b940]
10121336:	ff 15 f8 2f 22 10    	call   DWORD PTR ds:0x10222ff8
1012133c:	89 86 44 b9 21 10    	mov    DWORD PTR [esi+0x1021b944],eax
10121342:	83 c4 04             	add    esp,0x4
10121345:	83 c6 08             	add    esi,0x8
10121348:	81 fe 60 01 00 00    	cmp    esi,0x160
1012134e:	72 e0                	jb     0x10121330
10121350:	b9 b0 38 22 10       	mov    ecx,0x102238b0
10121355:	e8 c6 cb fa ff       	call   0x100cdf20
1012135a:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1012135f:	b9 b0 38 22 10       	mov    ecx,0x102238b0
10121364:	8b 90 98 00 00 00    	mov    edx,DWORD PTR [eax+0x98]
1012136a:	03 50 0c             	add    edx,DWORD PTR [eax+0xc]
1012136d:	52                   	push   edx
1012136e:	e8 7d a8 fa ff       	call   0x100cbbf0
10121373:	85 c0                	test   eax,eax
10121375:	75 0c                	jne    0x10121383
10121377:	b9 b0 38 22 10       	mov    ecx,0x102238b0
1012137c:	e8 ff 93 fa ff       	call   0x100ca780
10121381:	eb 49                	jmp    0x101213cc
10121383:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10121388:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
1012138e:	03 48 0c             	add    ecx,DWORD PTR [eax+0xc]
10121391:	51                   	push   ecx
10121392:	b9 b0 38 22 10       	mov    ecx,0x102238b0
10121397:	e8 74 b4 fa ff       	call   0x100cc810
1012139c:	85 c0                	test   eax,eax
1012139e:	75 1c                	jne    0x101213bc
101213a0:	68 44 70 1e 10       	push   0x101e7044
101213a5:	6a 01                	push   0x1
101213a7:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
101213ad:	83 c4 08             	add    esp,0x8
101213b0:	b9 b0 38 22 10       	mov    ecx,0x102238b0
101213b5:	e8 c6 93 fa ff       	call   0x100ca780
101213ba:	eb 10                	jmp    0x101213cc
101213bc:	68 60 70 1e 10       	push   0x101e7060
101213c1:	6a 01                	push   0x1
101213c3:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
101213c9:	83 c4 08             	add    esp,0x8
101213cc:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
101213cf:	0f 57 c9             	xorps  xmm1,xmm1
101213d2:	51                   	push   ecx
101213d3:	f3 0f 10 80 fc 01 00 	movss  xmm0,DWORD PTR [eax+0x1fc]
101213da:	00 
101213db:	0f 2f c1             	comiss xmm0,xmm1
101213de:	76 07                	jbe    0x101213e7
101213e0:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
101213e5:	eb 07                	jmp    0x101213ee
101213e7:	c7 04 24 00 00 80 45 	mov    DWORD PTR [esp],0x45800000
101213ee:	68 74 70 1e 10       	push   0x101e7074
101213f3:	ff 15 34 30 22 10    	call   DWORD PTR ds:0x10223034
101213f9:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
101213fc:	83 c4 08             	add    esp,0x8
101213ff:	8b 88 d4 01 00 00    	mov    ecx,DWORD PTR [eax+0x1d4]
10121405:	85 c9                	test   ecx,ecx
10121407:	74 7c                	je     0x10121485
10121409:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1012140e:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10121414:	03 c1                	add    eax,ecx
10121416:	50                   	push   eax
10121417:	68 7c 70 1e 10       	push   0x101e707c
1012141c:	6a 02                	push   0x2
1012141e:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10121424:	6a 00                	push   0x0
10121426:	68 34 2f 22 10       	push   0x10222f34
1012142b:	68 34 2f 22 10       	push   0x10222f34
10121430:	68 90 70 1e 10       	push   0x101e7090
10121435:	e8 16 65 ef ff       	call   0x10017950
1012143a:	8b f0                	mov    esi,eax
1012143c:	83 c4 1c             	add    esp,0x1c
1012143f:	85 f6                	test   esi,esi
10121441:	74 42                	je     0x10121485
10121443:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
10121446:	c7 46 78 b0 14 00 10 	mov    DWORD PTR [esi+0x78],0x100014b0
1012144d:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
10121450:	8b 89 d4 01 00 00    	mov    ecx,DWORD PTR [ecx+0x1d4]
10121456:	89 8a d8 01 00 00    	mov    DWORD PTR [edx+0x1d8],ecx
1012145c:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1012145f:	51                   	push   ecx
10121460:	8b ce                	mov    ecx,esi
10121462:	c7 04 24 9a 99 99 3e 	mov    DWORD PTR [esp],0x3e99999a
10121469:	c7 80 d4 01 00 00 00 	mov    DWORD PTR [eax+0x1d4],0x0
10121470:	00 00 00 
10121473:	8b 06                	mov    eax,DWORD PTR [esi]
10121475:	ff 50 08             	call   DWORD PTR [eax+0x8]
10121478:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1012147b:	c7 80 a4 01 00 00 01 	mov    DWORD PTR [eax+0x1a4],0x1
10121482:	00 00 00 
10121485:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10121488:	51                   	push   ecx
10121489:	f6 80 a4 01 00 00 01 	test   BYTE PTR [eax+0x1a4],0x1
10121490:	74 09                	je     0x1012149b
10121492:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
10121499:	eb 07                	jmp    0x101214a2
1012149b:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
101214a2:	68 40 b9 1d 10       	push   0x101db940
101214a7:	ff 15 34 30 22 10    	call   DWORD PTR ds:0x10223034
101214ad:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
101214b0:	83 c4 08             	add    esp,0x8
101214b3:	8b 80 a4 01 00 00    	mov    eax,DWORD PTR [eax+0x1a4]
101214b9:	d1 e8                	shr    eax,1
101214bb:	83 e0 01             	and    eax,0x1
101214be:	a3 00 2f 22 10       	mov    ds:0x10222f00,eax
101214c3:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
101214c6:	51                   	push   ecx
101214c7:	f6 80 a4 01 00 00 04 	test   BYTE PTR [eax+0x1a4],0x4
101214ce:	74 09                	je     0x101214d9
101214d0:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
101214d7:	eb 07                	jmp    0x101214e0
101214d9:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
101214e0:	68 38 b6 1c 10       	push   0x101cb638
101214e5:	ff 15 34 30 22 10    	call   DWORD PTR ds:0x10223034
101214eb:	83 c4 08             	add    esp,0x8
101214ee:	8d 87 00 01 00 00    	lea    eax,[edi+0x100]
101214f4:	68 00 04 00 00       	push   0x400
101214f9:	6a 00                	push   0x0
101214fb:	50                   	push   eax
101214fc:	e8 8f df 01 00       	call   0x1013f490
10121501:	83 c4 0c             	add    esp,0xc
10121504:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
10121507:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1012150e:	59                   	pop    ecx
1012150f:	5f                   	pop    edi
10121510:	5e                   	pop    esi
10121511:	8b e5                	mov    esp,ebp
10121513:	5d                   	pop    ebp
10121514:	c3                   	ret
