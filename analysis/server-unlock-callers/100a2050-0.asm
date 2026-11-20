
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100a2050 <.text+0xa1050>:
100a2050:	55                   	push   ebp
100a2051:	8b ec                	mov    ebp,esp
100a2053:	83 ec 08             	sub    esp,0x8
100a2056:	68 30 21 1a 10       	push   0x101a2130
100a205b:	6a 00                	push   0x0
100a205d:	89 4d fc             	mov    DWORD PTR [ebp-0x4],ecx
100a2060:	e8 fb 63 07 00       	call   0x10118460
100a2065:	83 c4 08             	add    esp,0x8
100a2068:	85 c0                	test   eax,eax
100a206a:	0f 84 a1 02 00 00    	je     0x100a2311
100a2070:	57                   	push   edi
100a2071:	ff 70 04             	push   DWORD PTR [eax+0x4]
100a2074:	e8 67 05 f7 ff       	call   0x100125e0
100a2079:	8b f8                	mov    edi,eax
100a207b:	83 c4 04             	add    esp,0x4
100a207e:	85 ff                	test   edi,edi
100a2080:	0f 84 8a 02 00 00    	je     0x100a2310
100a2086:	53                   	push   ebx
100a2087:	56                   	push   esi
100a2088:	33 f6                	xor    esi,esi
100a208a:	8b cf                	mov    ecx,edi
100a208c:	56                   	push   esi
100a208d:	56                   	push   esi
100a208e:	68 80 00 00 00       	push   0x80
100a2093:	e8 68 af 03 00       	call   0x100dd000
100a2098:	6a 00                	push   0x0
100a209a:	84 c0                	test   al,al
100a209c:	b9 01 00 00 00       	mov    ecx,0x1
100a20a1:	6a 00                	push   0x0
100a20a3:	0f 45 f1             	cmovne esi,ecx
100a20a6:	8b cf                	mov    ecx,edi
100a20a8:	68 00 01 00 00       	push   0x100
100a20ad:	8b de                	mov    ebx,esi
100a20af:	e8 4c af 03 00       	call   0x100dd000
100a20b4:	84 c0                	test   al,al
100a20b6:	74 08                	je     0x100a20c0
100a20b8:	bb 01 00 00 00       	mov    ebx,0x1
100a20bd:	83 ce 02             	or     esi,0x2
100a20c0:	6a 00                	push   0x0
100a20c2:	6a 00                	push   0x0
100a20c4:	68 00 02 00 00       	push   0x200
100a20c9:	8b cf                	mov    ecx,edi
100a20cb:	e8 30 af 03 00       	call   0x100dd000
100a20d0:	84 c0                	test   al,al
100a20d2:	74 08                	je     0x100a20dc
100a20d4:	bb 01 00 00 00       	mov    ebx,0x1
100a20d9:	83 ce 04             	or     esi,0x4
100a20dc:	6a 00                	push   0x0
100a20de:	6a 00                	push   0x0
100a20e0:	68 00 04 00 00       	push   0x400
100a20e5:	8b cf                	mov    ecx,edi
100a20e7:	e8 14 af 03 00       	call   0x100dd000
100a20ec:	84 c0                	test   al,al
100a20ee:	74 08                	je     0x100a20f8
100a20f0:	bb 01 00 00 00       	mov    ebx,0x1
100a20f5:	83 ce 08             	or     esi,0x8
100a20f8:	6a 00                	push   0x0
100a20fa:	6a 00                	push   0x0
100a20fc:	68 00 08 00 00       	push   0x800
100a2101:	8b cf                	mov    ecx,edi
100a2103:	e8 f8 ae 03 00       	call   0x100dd000
100a2108:	84 c0                	test   al,al
100a210a:	74 08                	je     0x100a2114
100a210c:	bb 01 00 00 00       	mov    ebx,0x1
100a2111:	83 ce 10             	or     esi,0x10
100a2114:	6a 00                	push   0x0
100a2116:	6a 00                	push   0x0
100a2118:	68 00 10 00 00       	push   0x1000
100a211d:	8b cf                	mov    ecx,edi
100a211f:	e8 dc ae 03 00       	call   0x100dd000
100a2124:	84 c0                	test   al,al
100a2126:	74 08                	je     0x100a2130
100a2128:	bb 01 00 00 00       	mov    ebx,0x1
100a212d:	83 ce 20             	or     esi,0x20
100a2130:	6a 00                	push   0x0
100a2132:	6a 00                	push   0x0
100a2134:	68 00 20 00 00       	push   0x2000
100a2139:	8b cf                	mov    ecx,edi
100a213b:	e8 c0 ae 03 00       	call   0x100dd000
100a2140:	84 c0                	test   al,al
100a2142:	74 08                	je     0x100a214c
100a2144:	bb 01 00 00 00       	mov    ebx,0x1
100a2149:	83 ce 40             	or     esi,0x40
100a214c:	6a 00                	push   0x0
100a214e:	6a 00                	push   0x0
100a2150:	68 00 40 00 00       	push   0x4000
100a2155:	8b cf                	mov    ecx,edi
100a2157:	e8 a4 ae 03 00       	call   0x100dd000
100a215c:	84 c0                	test   al,al
100a215e:	74 0b                	je     0x100a216b
100a2160:	bb 01 00 00 00       	mov    ebx,0x1
100a2165:	81 ce 80 00 00 00    	or     esi,0x80
100a216b:	6a 00                	push   0x0
100a216d:	6a 00                	push   0x0
100a216f:	68 00 80 00 00       	push   0x8000
100a2174:	8b cf                	mov    ecx,edi
100a2176:	e8 85 ae 03 00       	call   0x100dd000
100a217b:	84 c0                	test   al,al
100a217d:	74 0b                	je     0x100a218a
100a217f:	bb 01 00 00 00       	mov    ebx,0x1
100a2184:	81 ce 00 01 00 00    	or     esi,0x100
100a218a:	6a 00                	push   0x0
100a218c:	6a 00                	push   0x0
100a218e:	68 00 00 01 00       	push   0x10000
100a2193:	8b cf                	mov    ecx,edi
100a2195:	e8 66 ae 03 00       	call   0x100dd000
100a219a:	84 c0                	test   al,al
100a219c:	74 0b                	je     0x100a21a9
100a219e:	bb 01 00 00 00       	mov    ebx,0x1
100a21a3:	81 ce 00 02 00 00    	or     esi,0x200
100a21a9:	6a 00                	push   0x0
100a21ab:	6a 00                	push   0x0
100a21ad:	68 00 00 02 00       	push   0x20000
100a21b2:	8b cf                	mov    ecx,edi
100a21b4:	e8 47 ae 03 00       	call   0x100dd000
100a21b9:	84 c0                	test   al,al
100a21bb:	74 0b                	je     0x100a21c8
100a21bd:	bb 01 00 00 00       	mov    ebx,0x1
100a21c2:	81 ce 00 04 00 00    	or     esi,0x400
100a21c8:	6a 00                	push   0x0
100a21ca:	6a 00                	push   0x0
100a21cc:	68 00 00 04 00       	push   0x40000
100a21d1:	8b cf                	mov    ecx,edi
100a21d3:	e8 28 ae 03 00       	call   0x100dd000
100a21d8:	84 c0                	test   al,al
100a21da:	74 0b                	je     0x100a21e7
100a21dc:	bb 01 00 00 00       	mov    ebx,0x1
100a21e1:	81 ce 00 08 00 00    	or     esi,0x800
100a21e7:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100a21ea:	8b 88 e0 00 00 00    	mov    ecx,DWORD PTR [eax+0xe0]
100a21f0:	85 c9                	test   ecx,ecx
100a21f2:	0f 84 c1 00 00 00    	je     0x100a22b9
100a21f8:	83 b8 dc 00 00 00 00 	cmp    DWORD PTR [eax+0xdc],0x0
100a21ff:	0f 84 b4 00 00 00    	je     0x100a22b9
100a2205:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100a220a:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100a2210:	03 c1                	add    eax,ecx
100a2212:	50                   	push   eax
100a2213:	6a 00                	push   0x0
100a2215:	e8 76 63 07 00       	call   0x10118590
100a221a:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100a2220:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
100a2223:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100a2226:	8b 89 98 00 00 00    	mov    ecx,DWORD PTR [ecx+0x98]
100a222c:	03 88 dc 00 00 00    	add    ecx,DWORD PTR [eax+0xdc]
100a2232:	51                   	push   ecx
100a2233:	6a 00                	push   0x0
100a2235:	e8 56 63 07 00       	call   0x10118590
100a223a:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
100a223f:	83 c4 10             	add    esp,0x10
100a2242:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
100a2245:	0f 57 c9             	xorps  xmm1,xmm1
100a2248:	0f 2e c1             	ucomiss xmm0,xmm1
100a224b:	8b d0                	mov    edx,eax
100a224d:	9f                   	lahf
100a224e:	f6 c4 44             	test   ah,0x44
100a2251:	7a 2e                	jp     0x100a2281
100a2253:	85 c9                	test   ecx,ecx
100a2255:	74 1a                	je     0x100a2271
100a2257:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
100a225a:	c7 80 4c 01 00 00 00 	mov    DWORD PTR [eax+0x14c],0x0
100a2261:	00 00 00 
100a2264:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
100a2267:	c7 80 50 01 00 00 00 	mov    DWORD PTR [eax+0x150],0x437f0000
100a226e:	00 7f 43 
100a2271:	85 d2                	test   edx,edx
100a2273:	74 4c                	je     0x100a22c1
100a2275:	51                   	push   ecx
100a2276:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100a227d:	6a 01                	push   0x1
100a227f:	eb 2c                	jmp    0x100a22ad
100a2281:	85 c9                	test   ecx,ecx
100a2283:	74 1a                	je     0x100a229f
100a2285:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
100a2288:	c7 80 4c 01 00 00 05 	mov    DWORD PTR [eax+0x14c],0x5
100a228f:	00 00 00 
100a2292:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
100a2295:	c7 80 50 01 00 00 00 	mov    DWORD PTR [eax+0x150],0x0
100a229c:	00 00 00 
100a229f:	85 d2                	test   edx,edx
100a22a1:	74 1e                	je     0x100a22c1
100a22a3:	51                   	push   ecx
100a22a4:	c7 04 24 00 80 26 44 	mov    DWORD PTR [esp],0x44268000
100a22ab:	6a 00                	push   0x0
100a22ad:	8b 02                	mov    eax,DWORD PTR [edx]
100a22af:	8b ca                	mov    ecx,edx
100a22b1:	57                   	push   edi
100a22b2:	57                   	push   edi
100a22b3:	ff 90 e8 00 00 00    	call   DWORD PTR [eax+0xe8]
100a22b9:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
100a22be:	0f 57 c9             	xorps  xmm1,xmm1
100a22c1:	0f 2e c1             	ucomiss xmm0,xmm1
100a22c4:	9f                   	lahf
100a22c5:	f6 c4 44             	test   ah,0x44
100a22c8:	7a 44                	jp     0x100a230e
100a22ca:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100a22cd:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100a22d3:	6a 00                	push   0x0
100a22d5:	ff 35 98 66 22 10    	push   DWORD PTR ds:0x10226698
100a22db:	6a 01                	push   0x1
100a22dd:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100a22e3:	56                   	push   esi
100a22e4:	ff 15 14 30 22 10    	call   DWORD PTR ds:0x10223014
100a22ea:	53                   	push   ebx
100a22eb:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a22f1:	ff b7 24 04 00 00    	push   DWORD PTR [edi+0x424]
100a22f7:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a22fd:	6a 01                	push   0x1
100a22ff:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a2305:	83 c4 20             	add    esp,0x20
100a2308:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100a230e:	5e                   	pop    esi
100a230f:	5b                   	pop    ebx
100a2310:	5f                   	pop    edi
100a2311:	8b e5                	mov    esp,ebp
100a2313:	5d                   	pop    ebp
100a2314:	c2 10 00             	ret    0x10
