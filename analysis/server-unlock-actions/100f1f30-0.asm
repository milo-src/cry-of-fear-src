
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100f1f30 <.text+0xf0f30>:
100f1f30:	55                   	push   ebp
100f1f31:	8b ec                	mov    ebp,esp
100f1f33:	83 ec 0c             	sub    esp,0xc
100f1f36:	53                   	push   ebx
100f1f37:	57                   	push   edi
100f1f38:	6a 01                	push   0x1
100f1f3a:	8b d9                	mov    ebx,ecx
100f1f3c:	ff 15 68 30 22 10    	call   DWORD PTR ds:0x10223068
100f1f42:	8b f8                	mov    edi,eax
100f1f44:	83 c4 04             	add    esp,0x4
100f1f47:	89 7d f8             	mov    DWORD PTR [ebp-0x8],edi
100f1f4a:	85 ff                	test   edi,edi
100f1f4c:	0f 84 f7 0a 00 00    	je     0x100f2a49
100f1f52:	56                   	push   esi
100f1f53:	68 14 a4 1c 10       	push   0x101ca414
100f1f58:	6a 00                	push   0x0
100f1f5a:	e8 01 65 02 00       	call   0x10118460
100f1f5f:	8b f0                	mov    esi,eax
100f1f61:	83 c4 08             	add    esp,0x8
100f1f64:	85 f6                	test   esi,esi
100f1f66:	74 53                	je     0x100f1fbb
100f1f68:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [eax+eax*1+0x0]
100f1f6f:	00 
100f1f70:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100f1f73:	83 b9 4c 02 00 00 00 	cmp    DWORD PTR [ecx+0x24c],0x0
100f1f7a:	75 16                	jne    0x100f1f92
100f1f7c:	8b 06                	mov    eax,DWORD PTR [esi]
100f1f7e:	51                   	push   ecx
100f1f7f:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100f1f86:	8b ce                	mov    ecx,esi
100f1f88:	6a 03                	push   0x3
100f1f8a:	53                   	push   ebx
100f1f8b:	53                   	push   ebx
100f1f8c:	ff 90 e8 00 00 00    	call   DWORD PTR [eax+0xe8]
100f1f92:	0f 28 05 00 db 1d 10 	movaps xmm0,XMMWORD PTR ds:0x101ddb00
100f1f99:	68 14 a4 1c 10       	push   0x101ca414
100f1f9e:	0f 11 83 f4 03 00 00 	movups XMMWORD PTR [ebx+0x3f4],xmm0
100f1fa5:	56                   	push   esi
100f1fa6:	0f 11 83 04 04 00 00 	movups XMMWORD PTR [ebx+0x404],xmm0
100f1fad:	e8 ae 64 02 00       	call   0x10118460
100f1fb2:	8b f0                	mov    esi,eax
100f1fb4:	83 c4 08             	add    esp,0x8
100f1fb7:	85 f6                	test   esi,esi
100f1fb9:	75 b5                	jne    0x100f1f70
100f1fbb:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100f1fc1:	85 c9                	test   ecx,ecx
100f1fc3:	74 54                	je     0x100f2019
100f1fc5:	8b 01                	mov    eax,DWORD PTR [ecx]
100f1fc7:	ff 50 20             	call   DWORD PTR [eax+0x20]
100f1fca:	85 c0                	test   eax,eax
100f1fcc:	74 4b                	je     0x100f2019
100f1fce:	68 c4 b8 1d 10       	push   0x101db8c4
100f1fd3:	6a 00                	push   0x0
100f1fd5:	e8 86 64 02 00       	call   0x10118460
100f1fda:	8b f0                	mov    esi,eax
100f1fdc:	83 c4 08             	add    esp,0x8
100f1fdf:	85 f6                	test   esi,esi
100f1fe1:	74 36                	je     0x100f2019
100f1fe3:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100f1fe6:	83 b9 48 02 00 00 00 	cmp    DWORD PTR [ecx+0x248],0x0
100f1fed:	74 16                	je     0x100f2005
100f1fef:	8b 06                	mov    eax,DWORD PTR [esi]
100f1ff1:	51                   	push   ecx
100f1ff2:	c7 04 24 00 80 26 44 	mov    DWORD PTR [esp],0x44268000
100f1ff9:	8b ce                	mov    ecx,esi
100f1ffb:	6a 03                	push   0x3
100f1ffd:	53                   	push   ebx
100f1ffe:	53                   	push   ebx
100f1fff:	ff 90 e8 00 00 00    	call   DWORD PTR [eax+0xe8]
100f2005:	68 c4 b8 1d 10       	push   0x101db8c4
100f200a:	56                   	push   esi
100f200b:	e8 50 64 02 00       	call   0x10118460
100f2010:	8b f0                	mov    esi,eax
100f2012:	83 c4 08             	add    esp,0x8
100f2015:	85 f6                	test   esi,esi
100f2017:	75 ca                	jne    0x100f1fe3
100f2019:	68 d8 b8 1d 10       	push   0x101db8d8
100f201e:	6a 00                	push   0x0
100f2020:	e8 3b 64 02 00       	call   0x10118460
100f2025:	8b f0                	mov    esi,eax
100f2027:	83 c4 08             	add    esp,0x8
100f202a:	85 f6                	test   esi,esi
100f202c:	74 2c                	je     0x100f205a
100f202e:	66 90                	xchg   ax,ax
100f2030:	8b 16                	mov    edx,DWORD PTR [esi]
100f2032:	51                   	push   ecx
100f2033:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100f203a:	8b ce                	mov    ecx,esi
100f203c:	6a 03                	push   0x3
100f203e:	53                   	push   ebx
100f203f:	53                   	push   ebx
100f2040:	ff 92 e8 00 00 00    	call   DWORD PTR [edx+0xe8]
100f2046:	68 d8 b8 1d 10       	push   0x101db8d8
100f204b:	56                   	push   esi
100f204c:	e8 0f 64 02 00       	call   0x10118460
100f2051:	8b f0                	mov    esi,eax
100f2053:	83 c4 08             	add    esp,0x8
100f2056:	85 f6                	test   esi,esi
100f2058:	75 d6                	jne    0x100f2030
100f205a:	68 e4 b8 1d 10       	push   0x101db8e4
100f205f:	6a 00                	push   0x0
100f2061:	e8 fa 63 02 00       	call   0x10118460
100f2066:	8b f0                	mov    esi,eax
100f2068:	83 c4 08             	add    esp,0x8
100f206b:	85 f6                	test   esi,esi
100f206d:	74 2e                	je     0x100f209d
100f206f:	90                   	nop
100f2070:	6a 21                	push   0x21
100f2072:	8b cb                	mov    ecx,ebx
100f2074:	e8 d7 1f 00 00       	call   0x100f4050
100f2079:	83 8b 00 25 00 00 08 	or     DWORD PTR [ebx+0x2500],0x8
100f2080:	8b cb                	mov    ecx,ebx
100f2082:	6a 00                	push   0x0
100f2084:	e8 67 cf fe ff       	call   0x100deff0
100f2089:	68 e4 b8 1d 10       	push   0x101db8e4
100f208e:	56                   	push   esi
100f208f:	e8 cc 63 02 00       	call   0x10118460
100f2094:	8b f0                	mov    esi,eax
100f2096:	83 c4 08             	add    esp,0x8
100f2099:	85 f6                	test   esi,esi
100f209b:	75 d3                	jne    0x100f2070
100f209d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f20a2:	68 d4 8b 1a 10       	push   0x101a8bd4
100f20a7:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
100f20ad:	03 48 0c             	add    ecx,DWORD PTR [eax+0xc]
100f20b0:	51                   	push   ecx
100f20b1:	e8 3a d5 04 00       	call   0x1013f5f0
100f20b6:	83 c4 08             	add    esp,0x8
100f20b9:	85 c0                	test   eax,eax
100f20bb:	75 40                	jne    0x100f20fd
100f20bd:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f20c2:	ba f8 b8 1d 10       	mov    edx,0x101db8f8
100f20c7:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
100f20cd:	03 48 0c             	add    ecx,DWORD PTR [eax+0xc]
100f20d0:	8a 01                	mov    al,BYTE PTR [ecx]
100f20d2:	3a 02                	cmp    al,BYTE PTR [edx]
100f20d4:	75 1a                	jne    0x100f20f0
100f20d6:	84 c0                	test   al,al
100f20d8:	74 12                	je     0x100f20ec
100f20da:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100f20dd:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
100f20e0:	75 0e                	jne    0x100f20f0
100f20e2:	83 c1 02             	add    ecx,0x2
100f20e5:	83 c2 02             	add    edx,0x2
100f20e8:	84 c0                	test   al,al
100f20ea:	75 e4                	jne    0x100f20d0
100f20ec:	33 c0                	xor    eax,eax
100f20ee:	eb 05                	jmp    0x100f20f5
100f20f0:	1b c0                	sbb    eax,eax
100f20f2:	83 c8 01             	or     eax,0x1
100f20f5:	85 c0                	test   eax,eax
100f20f7:	0f 85 e2 03 00 00    	jne    0x100f24df
100f20fd:	33 f6                	xor    esi,esi
100f20ff:	8b cb                	mov    ecx,ebx
100f2101:	56                   	push   esi
100f2102:	56                   	push   esi
100f2103:	6a 01                	push   0x1
100f2105:	e8 f6 ae fe ff       	call   0x100dd000
100f210a:	84 c0                	test   al,al
100f210c:	8b cb                	mov    ecx,ebx
100f210e:	6a 00                	push   0x0
100f2110:	b8 01 00 00 00       	mov    eax,0x1
100f2115:	6a 00                	push   0x0
100f2117:	0f 45 f0             	cmovne esi,eax
100f211a:	6a 02                	push   0x2
100f211c:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100f211f:	e8 dc ae fe ff       	call   0x100dd000
100f2124:	84 c0                	test   al,al
100f2126:	74 06                	je     0x100f212e
100f2128:	83 ce 02             	or     esi,0x2
100f212b:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100f212e:	6a 00                	push   0x0
100f2130:	6a 00                	push   0x0
100f2132:	6a 04                	push   0x4
100f2134:	8b cb                	mov    ecx,ebx
100f2136:	e8 c5 ae fe ff       	call   0x100dd000
100f213b:	84 c0                	test   al,al
100f213d:	74 06                	je     0x100f2145
100f213f:	83 ce 04             	or     esi,0x4
100f2142:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100f2145:	6a 00                	push   0x0
100f2147:	6a 00                	push   0x0
100f2149:	6a 08                	push   0x8
100f214b:	8b cb                	mov    ecx,ebx
100f214d:	e8 ae ae fe ff       	call   0x100dd000
100f2152:	84 c0                	test   al,al
100f2154:	74 06                	je     0x100f215c
100f2156:	83 ce 08             	or     esi,0x8
100f2159:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100f215c:	6a 00                	push   0x0
100f215e:	6a 00                	push   0x0
100f2160:	6a 10                	push   0x10
100f2162:	8b cb                	mov    ecx,ebx
100f2164:	e8 97 ae fe ff       	call   0x100dd000
100f2169:	84 c0                	test   al,al
100f216b:	74 06                	je     0x100f2173
100f216d:	83 ce 10             	or     esi,0x10
100f2170:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100f2173:	6a 00                	push   0x0
100f2175:	6a 00                	push   0x0
100f2177:	6a 20                	push   0x20
100f2179:	8b cb                	mov    ecx,ebx
100f217b:	e8 80 ae fe ff       	call   0x100dd000
100f2180:	84 c0                	test   al,al
100f2182:	74 06                	je     0x100f218a
100f2184:	83 ce 20             	or     esi,0x20
100f2187:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100f218a:	6a 00                	push   0x0
100f218c:	6a 00                	push   0x0
100f218e:	6a 40                	push   0x40
100f2190:	8b cb                	mov    ecx,ebx
100f2192:	e8 69 ae fe ff       	call   0x100dd000
100f2197:	84 c0                	test   al,al
100f2199:	74 06                	je     0x100f21a1
100f219b:	83 ce 40             	or     esi,0x40
100f219e:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100f21a1:	6a 00                	push   0x0
100f21a3:	6a 00                	push   0x0
100f21a5:	68 80 00 00 00       	push   0x80
100f21aa:	8b cb                	mov    ecx,ebx
100f21ac:	e8 4f ae fe ff       	call   0x100dd000
100f21b1:	84 c0                	test   al,al
100f21b3:	74 09                	je     0x100f21be
100f21b5:	81 ce 80 00 00 00    	or     esi,0x80
100f21bb:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100f21be:	6a 00                	push   0x0
100f21c0:	6a 00                	push   0x0
100f21c2:	68 00 01 00 00       	push   0x100
100f21c7:	8b cb                	mov    ecx,ebx
100f21c9:	e8 32 ae fe ff       	call   0x100dd000
100f21ce:	84 c0                	test   al,al
100f21d0:	74 09                	je     0x100f21db
100f21d2:	81 ce 00 01 00 00    	or     esi,0x100
100f21d8:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100f21db:	6a 00                	push   0x0
100f21dd:	6a 00                	push   0x0
100f21df:	68 00 02 00 00       	push   0x200
100f21e4:	8b cb                	mov    ecx,ebx
100f21e6:	e8 15 ae fe ff       	call   0x100dd000
100f21eb:	84 c0                	test   al,al
100f21ed:	74 09                	je     0x100f21f8
100f21ef:	81 ce 00 02 00 00    	or     esi,0x200
100f21f5:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100f21f8:	6a 00                	push   0x0
100f21fa:	6a 00                	push   0x0
100f21fc:	68 00 04 00 00       	push   0x400
100f2201:	8b cb                	mov    ecx,ebx
100f2203:	e8 f8 ad fe ff       	call   0x100dd000
100f2208:	84 c0                	test   al,al
100f220a:	74 09                	je     0x100f2215
100f220c:	81 ce 00 04 00 00    	or     esi,0x400
100f2212:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100f2215:	6a 00                	push   0x0
100f2217:	6a 00                	push   0x0
100f2219:	68 00 08 00 00       	push   0x800
100f221e:	8b cb                	mov    ecx,ebx
100f2220:	e8 db ad fe ff       	call   0x100dd000
100f2225:	84 c0                	test   al,al
100f2227:	74 09                	je     0x100f2232
100f2229:	81 ce 00 08 00 00    	or     esi,0x800
100f222f:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100f2232:	6a 00                	push   0x0
100f2234:	6a 00                	push   0x0
100f2236:	68 00 10 00 00       	push   0x1000
100f223b:	8b cb                	mov    ecx,ebx
100f223d:	e8 be ad fe ff       	call   0x100dd000
100f2242:	84 c0                	test   al,al
100f2244:	74 09                	je     0x100f224f
100f2246:	81 ce 00 10 00 00    	or     esi,0x1000
100f224c:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100f224f:	6a 00                	push   0x0
100f2251:	6a 00                	push   0x0
100f2253:	68 00 20 00 00       	push   0x2000
100f2258:	8b cb                	mov    ecx,ebx
100f225a:	e8 a1 ad fe ff       	call   0x100dd000
100f225f:	84 c0                	test   al,al
100f2261:	74 09                	je     0x100f226c
100f2263:	81 ce 00 20 00 00    	or     esi,0x2000
100f2269:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100f226c:	6a 00                	push   0x0
100f226e:	6a 00                	push   0x0
100f2270:	68 00 40 00 00       	push   0x4000
100f2275:	8b cb                	mov    ecx,ebx
100f2277:	e8 84 ad fe ff       	call   0x100dd000
100f227c:	84 c0                	test   al,al
100f227e:	74 09                	je     0x100f2289
100f2280:	81 ce 00 40 00 00    	or     esi,0x4000
100f2286:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100f2289:	6a 00                	push   0x0
100f228b:	6a 00                	push   0x0
100f228d:	68 00 80 00 00       	push   0x8000
100f2292:	8b cb                	mov    ecx,ebx
100f2294:	e8 67 ad fe ff       	call   0x100dd000
100f2299:	84 c0                	test   al,al
100f229b:	74 09                	je     0x100f22a6
100f229d:	81 ce 00 80 00 00    	or     esi,0x8000
100f22a3:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100f22a6:	6a 00                	push   0x0
100f22a8:	6a 00                	push   0x0
100f22aa:	68 00 00 01 00       	push   0x10000
100f22af:	8b cb                	mov    ecx,ebx
100f22b1:	e8 4a ad fe ff       	call   0x100dd000
100f22b6:	84 c0                	test   al,al
100f22b8:	74 09                	je     0x100f22c3
100f22ba:	81 ce 00 00 01 00    	or     esi,0x10000
100f22c0:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100f22c3:	6a 00                	push   0x0
100f22c5:	6a 00                	push   0x0
100f22c7:	68 00 00 02 00       	push   0x20000
100f22cc:	8b cb                	mov    ecx,ebx
100f22ce:	e8 2d ad fe ff       	call   0x100dd000
100f22d3:	84 c0                	test   al,al
100f22d5:	74 09                	je     0x100f22e0
100f22d7:	81 ce 00 00 02 00    	or     esi,0x20000
100f22dd:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100f22e0:	6a 00                	push   0x0
100f22e2:	6a 00                	push   0x0
100f22e4:	68 00 00 04 00       	push   0x40000
100f22e9:	8b cb                	mov    ecx,ebx
100f22eb:	e8 10 ad fe ff       	call   0x100dd000
100f22f0:	84 c0                	test   al,al
100f22f2:	74 09                	je     0x100f22fd
100f22f4:	81 ce 00 00 04 00    	or     esi,0x40000
100f22fa:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100f22fd:	6a 00                	push   0x0
100f22ff:	6a 00                	push   0x0
100f2301:	68 00 00 08 00       	push   0x80000
100f2306:	8b cb                	mov    ecx,ebx
100f2308:	e8 f3 ac fe ff       	call   0x100dd000
100f230d:	84 c0                	test   al,al
100f230f:	74 09                	je     0x100f231a
100f2311:	81 ce 00 00 08 00    	or     esi,0x80000
100f2317:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100f231a:	6a 00                	push   0x0
100f231c:	6a 00                	push   0x0
100f231e:	68 00 00 10 00       	push   0x100000
100f2323:	8b cb                	mov    ecx,ebx
100f2325:	e8 d6 ac fe ff       	call   0x100dd000
100f232a:	84 c0                	test   al,al
100f232c:	74 09                	je     0x100f2337
100f232e:	81 ce 00 00 10 00    	or     esi,0x100000
100f2334:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100f2337:	6a 00                	push   0x0
100f2339:	6a 00                	push   0x0
100f233b:	68 00 00 20 00       	push   0x200000
100f2340:	8b cb                	mov    ecx,ebx
100f2342:	e8 b9 ac fe ff       	call   0x100dd000
100f2347:	84 c0                	test   al,al
100f2349:	74 09                	je     0x100f2354
100f234b:	81 ce 00 00 20 00    	or     esi,0x200000
100f2351:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100f2354:	6a 00                	push   0x0
100f2356:	6a 00                	push   0x0
100f2358:	68 00 00 40 00       	push   0x400000
100f235d:	8b cb                	mov    ecx,ebx
100f235f:	e8 9c ac fe ff       	call   0x100dd000
100f2364:	84 c0                	test   al,al
100f2366:	74 09                	je     0x100f2371
100f2368:	81 ce 00 00 40 00    	or     esi,0x400000
100f236e:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100f2371:	6a 00                	push   0x0
100f2373:	6a 00                	push   0x0
100f2375:	68 00 00 80 00       	push   0x800000
100f237a:	8b cb                	mov    ecx,ebx
100f237c:	e8 7f ac fe ff       	call   0x100dd000
100f2381:	84 c0                	test   al,al
100f2383:	74 09                	je     0x100f238e
100f2385:	81 ce 00 00 80 00    	or     esi,0x800000
100f238b:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100f238e:	6a 00                	push   0x0
100f2390:	6a 00                	push   0x0
100f2392:	68 00 00 00 01       	push   0x1000000
100f2397:	8b cb                	mov    ecx,ebx
100f2399:	e8 62 ac fe ff       	call   0x100dd000
100f239e:	84 c0                	test   al,al
100f23a0:	74 09                	je     0x100f23ab
100f23a2:	81 ce 00 00 00 01    	or     esi,0x1000000
100f23a8:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100f23ab:	6a 00                	push   0x0
100f23ad:	6a 00                	push   0x0
100f23af:	68 00 00 00 02       	push   0x2000000
100f23b4:	8b cb                	mov    ecx,ebx
100f23b6:	e8 45 ac fe ff       	call   0x100dd000
100f23bb:	84 c0                	test   al,al
100f23bd:	74 09                	je     0x100f23c8
100f23bf:	81 ce 00 00 00 02    	or     esi,0x2000000
100f23c5:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100f23c8:	6a 00                	push   0x0
100f23ca:	6a 00                	push   0x0
100f23cc:	68 00 00 00 04       	push   0x4000000
100f23d1:	8b cb                	mov    ecx,ebx
100f23d3:	e8 28 ac fe ff       	call   0x100dd000
100f23d8:	84 c0                	test   al,al
100f23da:	74 09                	je     0x100f23e5
100f23dc:	81 ce 00 00 00 04    	or     esi,0x4000000
100f23e2:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100f23e5:	6a 00                	push   0x0
100f23e7:	6a 00                	push   0x0
100f23e9:	68 00 00 00 08       	push   0x8000000
100f23ee:	8b cb                	mov    ecx,ebx
100f23f0:	e8 0b ac fe ff       	call   0x100dd000
100f23f5:	84 c0                	test   al,al
100f23f7:	74 09                	je     0x100f2402
100f23f9:	81 ce 00 00 00 08    	or     esi,0x8000000
100f23ff:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100f2402:	6a 00                	push   0x0
100f2404:	6a 00                	push   0x0
100f2406:	68 00 00 00 10       	push   0x10000000
100f240b:	8b cb                	mov    ecx,ebx
100f240d:	e8 ee ab fe ff       	call   0x100dd000
100f2412:	84 c0                	test   al,al
100f2414:	74 09                	je     0x100f241f
100f2416:	81 ce 00 00 00 10    	or     esi,0x10000000
100f241c:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100f241f:	6a 00                	push   0x0
100f2421:	6a 00                	push   0x0
100f2423:	68 00 00 00 20       	push   0x20000000
100f2428:	8b cb                	mov    ecx,ebx
100f242a:	e8 d1 ab fe ff       	call   0x100dd000
100f242f:	84 c0                	test   al,al
100f2431:	74 09                	je     0x100f243c
100f2433:	81 ce 00 00 00 20    	or     esi,0x20000000
100f2439:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100f243c:	6a 00                	push   0x0
100f243e:	6a 00                	push   0x0
100f2440:	68 00 00 00 40       	push   0x40000000
100f2445:	8b cb                	mov    ecx,ebx
100f2447:	e8 b4 ab fe ff       	call   0x100dd000
100f244c:	84 c0                	test   al,al
100f244e:	74 09                	je     0x100f2459
100f2450:	81 ce 00 00 00 40    	or     esi,0x40000000
100f2456:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100f2459:	6a 00                	push   0x0
100f245b:	6a 00                	push   0x0
100f245d:	68 00 00 00 80       	push   0x80000000
100f2462:	8b cb                	mov    ecx,ebx
100f2464:	e8 97 ab fe ff       	call   0x100dd000
100f2469:	84 c0                	test   al,al
100f246b:	74 09                	je     0x100f2476
100f246d:	81 ce 00 00 00 80    	or     esi,0x80000000
100f2473:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100f2476:	33 ff                	xor    edi,edi
100f2478:	8b cb                	mov    ecx,ebx
100f247a:	57                   	push   edi
100f247b:	6a 01                	push   0x1
100f247d:	57                   	push   edi
100f247e:	33 f6                	xor    esi,esi
100f2480:	e8 7b ab fe ff       	call   0x100dd000
100f2485:	84 c0                	test   al,al
100f2487:	8b cb                	mov    ecx,ebx
100f2489:	b8 01 00 00 00       	mov    eax,0x1
100f248e:	50                   	push   eax
100f248f:	57                   	push   edi
100f2490:	57                   	push   edi
100f2491:	0f 45 f0             	cmovne esi,eax
100f2494:	e8 67 ab fe ff       	call   0x100dd000
100f2499:	84 c0                	test   al,al
100f249b:	b8 01 00 00 00       	mov    eax,0x1
100f24a0:	0f 45 f8             	cmovne edi,eax
100f24a3:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f24a6:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f24ac:	6a 00                	push   0x0
100f24ae:	ff 35 a0 66 22 10    	push   DWORD PTR ds:0x102266a0
100f24b4:	6a 01                	push   0x1
100f24b6:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f24bc:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
100f24bf:	ff 15 14 30 22 10    	call   DWORD PTR ds:0x10223014
100f24c5:	56                   	push   esi
100f24c6:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f24cc:	57                   	push   edi
100f24cd:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f24d3:	83 c4 1c             	add    esp,0x1c
100f24d6:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f24dc:	8b 7d f8             	mov    edi,DWORD PTR [ebp-0x8]
100f24df:	68 08 b9 1d 10       	push   0x101db908
100f24e4:	6a 00                	push   0x0
100f24e6:	e8 75 5f 02 00       	call   0x10118460
100f24eb:	8b f0                	mov    esi,eax
100f24ed:	83 c4 08             	add    esp,0x8
100f24f0:	85 f6                	test   esi,esi
100f24f2:	74 30                	je     0x100f2524
100f24f4:	68 bc 00 00 00       	push   0xbc
100f24f9:	8b cb                	mov    ecx,ebx
100f24fb:	e8 50 1b 00 00       	call   0x100f4050
100f2500:	83 8b 00 25 00 00 08 	or     DWORD PTR [ebx+0x2500],0x8
100f2507:	8b cb                	mov    ecx,ebx
100f2509:	6a 00                	push   0x0
100f250b:	e8 e0 ca fe ff       	call   0x100deff0
100f2510:	68 08 b9 1d 10       	push   0x101db908
100f2515:	56                   	push   esi
100f2516:	e8 45 5f 02 00       	call   0x10118460
100f251b:	8b f0                	mov    esi,eax
100f251d:	83 c4 08             	add    esp,0x8
100f2520:	85 f6                	test   esi,esi
100f2522:	75 d0                	jne    0x100f24f4
100f2524:	68 18 b9 1d 10       	push   0x101db918
100f2529:	6a 00                	push   0x0
100f252b:	e8 30 5f 02 00       	call   0x10118460
100f2530:	83 c4 08             	add    esp,0x8
100f2533:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100f2536:	85 c0                	test   eax,eax
100f2538:	0f 84 c9 03 00 00    	je     0x100f2907
100f253e:	8b f8                	mov    edi,eax
100f2540:	33 f6                	xor    esi,esi
100f2542:	8b cb                	mov    ecx,ebx
100f2544:	56                   	push   esi
100f2545:	56                   	push   esi
100f2546:	6a 01                	push   0x1
100f2548:	e8 b3 aa fe ff       	call   0x100dd000
100f254d:	6a 00                	push   0x0
100f254f:	84 c0                	test   al,al
100f2551:	8b cb                	mov    ecx,ebx
100f2553:	6a 00                	push   0x0
100f2555:	b8 01 00 00 00       	mov    eax,0x1
100f255a:	6a 02                	push   0x2
100f255c:	0f 45 f0             	cmovne esi,eax
100f255f:	e8 9c aa fe ff       	call   0x100dd000
100f2564:	84 c0                	test   al,al
100f2566:	74 03                	je     0x100f256b
100f2568:	83 ce 02             	or     esi,0x2
100f256b:	6a 00                	push   0x0
100f256d:	6a 00                	push   0x0
100f256f:	6a 04                	push   0x4
100f2571:	8b cb                	mov    ecx,ebx
100f2573:	e8 88 aa fe ff       	call   0x100dd000
100f2578:	84 c0                	test   al,al
100f257a:	74 03                	je     0x100f257f
100f257c:	83 ce 04             	or     esi,0x4
100f257f:	6a 00                	push   0x0
100f2581:	6a 00                	push   0x0
100f2583:	6a 08                	push   0x8
100f2585:	8b cb                	mov    ecx,ebx
100f2587:	e8 74 aa fe ff       	call   0x100dd000
100f258c:	84 c0                	test   al,al
100f258e:	74 03                	je     0x100f2593
100f2590:	83 ce 08             	or     esi,0x8
100f2593:	6a 00                	push   0x0
100f2595:	6a 00                	push   0x0
100f2597:	6a 10                	push   0x10
100f2599:	8b cb                	mov    ecx,ebx
100f259b:	e8 60 aa fe ff       	call   0x100dd000
100f25a0:	84 c0                	test   al,al
100f25a2:	74 03                	je     0x100f25a7
100f25a4:	83 ce 10             	or     esi,0x10
100f25a7:	6a 00                	push   0x0
100f25a9:	6a 01                	push   0x1
100f25ab:	6a 00                	push   0x0
100f25ad:	8b cb                	mov    ecx,ebx
100f25af:	e8 4c aa fe ff       	call   0x100dd000
100f25b4:	b9 01 00 00 00       	mov    ecx,0x1
100f25b9:	84 c0                	test   al,al
100f25bb:	51                   	push   ecx
100f25bc:	b8 00 00 00 00       	mov    eax,0x0
100f25c1:	0f 45 c1             	cmovne eax,ecx
100f25c4:	8b cb                	mov    ecx,ebx
100f25c6:	6a 00                	push   0x0
100f25c8:	6a 00                	push   0x0
100f25ca:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100f25cd:	e8 2e aa fe ff       	call   0x100dd000
100f25d2:	84 c0                	test   al,al
100f25d4:	b9 01 00 00 00       	mov    ecx,0x1
100f25d9:	6a 00                	push   0x0
100f25db:	b8 00 00 00 00       	mov    eax,0x0
100f25e0:	0f 45 c1             	cmovne eax,ecx
100f25e3:	8b cb                	mov    ecx,ebx
100f25e5:	6a 00                	push   0x0
100f25e7:	6a 20                	push   0x20
100f25e9:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
100f25ec:	e8 0f aa fe ff       	call   0x100dd000
100f25f1:	84 c0                	test   al,al
100f25f3:	74 03                	je     0x100f25f8
100f25f5:	83 ce 20             	or     esi,0x20
100f25f8:	6a 00                	push   0x0
100f25fa:	6a 00                	push   0x0
100f25fc:	6a 40                	push   0x40
100f25fe:	8b cb                	mov    ecx,ebx
100f2600:	e8 fb a9 fe ff       	call   0x100dd000
100f2605:	84 c0                	test   al,al
100f2607:	74 03                	je     0x100f260c
100f2609:	83 ce 40             	or     esi,0x40
100f260c:	6a 00                	push   0x0
100f260e:	6a 00                	push   0x0
100f2610:	68 80 00 00 00       	push   0x80
100f2615:	8b cb                	mov    ecx,ebx
100f2617:	e8 e4 a9 fe ff       	call   0x100dd000
100f261c:	84 c0                	test   al,al
100f261e:	74 06                	je     0x100f2626
100f2620:	81 ce 80 00 00 00    	or     esi,0x80
100f2626:	6a 00                	push   0x0
100f2628:	6a 00                	push   0x0
100f262a:	68 00 01 00 00       	push   0x100
100f262f:	8b cb                	mov    ecx,ebx
100f2631:	e8 ca a9 fe ff       	call   0x100dd000
100f2636:	84 c0                	test   al,al
100f2638:	74 06                	je     0x100f2640
100f263a:	81 ce 00 01 00 00    	or     esi,0x100
100f2640:	6a 00                	push   0x0
100f2642:	6a 00                	push   0x0
100f2644:	68 00 02 00 00       	push   0x200
100f2649:	8b cb                	mov    ecx,ebx
100f264b:	e8 b0 a9 fe ff       	call   0x100dd000
100f2650:	84 c0                	test   al,al
100f2652:	74 06                	je     0x100f265a
100f2654:	81 ce 00 02 00 00    	or     esi,0x200
100f265a:	6a 00                	push   0x0
100f265c:	6a 00                	push   0x0
100f265e:	68 00 04 00 00       	push   0x400
100f2663:	8b cb                	mov    ecx,ebx
100f2665:	e8 96 a9 fe ff       	call   0x100dd000
100f266a:	84 c0                	test   al,al
100f266c:	74 06                	je     0x100f2674
100f266e:	81 ce 00 04 00 00    	or     esi,0x400
100f2674:	6a 00                	push   0x0
100f2676:	6a 00                	push   0x0
100f2678:	68 00 08 00 00       	push   0x800
100f267d:	8b cb                	mov    ecx,ebx
100f267f:	e8 7c a9 fe ff       	call   0x100dd000
100f2684:	84 c0                	test   al,al
100f2686:	74 06                	je     0x100f268e
100f2688:	81 ce 00 08 00 00    	or     esi,0x800
100f268e:	6a 00                	push   0x0
100f2690:	6a 00                	push   0x0
100f2692:	68 00 10 00 00       	push   0x1000
100f2697:	8b cb                	mov    ecx,ebx
100f2699:	e8 62 a9 fe ff       	call   0x100dd000
100f269e:	84 c0                	test   al,al
100f26a0:	74 06                	je     0x100f26a8
100f26a2:	81 ce 00 10 00 00    	or     esi,0x1000
100f26a8:	6a 00                	push   0x0
100f26aa:	6a 00                	push   0x0
100f26ac:	68 00 20 00 00       	push   0x2000
100f26b1:	8b cb                	mov    ecx,ebx
100f26b3:	e8 48 a9 fe ff       	call   0x100dd000
100f26b8:	84 c0                	test   al,al
100f26ba:	74 06                	je     0x100f26c2
100f26bc:	81 ce 00 20 00 00    	or     esi,0x2000
100f26c2:	6a 00                	push   0x0
100f26c4:	6a 00                	push   0x0
100f26c6:	68 00 40 00 00       	push   0x4000
100f26cb:	8b cb                	mov    ecx,ebx
100f26cd:	e8 2e a9 fe ff       	call   0x100dd000
100f26d2:	84 c0                	test   al,al
100f26d4:	74 06                	je     0x100f26dc
100f26d6:	81 ce 00 40 00 00    	or     esi,0x4000
100f26dc:	6a 00                	push   0x0
100f26de:	6a 00                	push   0x0
100f26e0:	68 00 80 00 00       	push   0x8000
100f26e5:	8b cb                	mov    ecx,ebx
100f26e7:	e8 14 a9 fe ff       	call   0x100dd000
100f26ec:	84 c0                	test   al,al
100f26ee:	74 06                	je     0x100f26f6
100f26f0:	81 ce 00 80 00 00    	or     esi,0x8000
100f26f6:	6a 00                	push   0x0
100f26f8:	6a 00                	push   0x0
100f26fa:	68 00 00 01 00       	push   0x10000
100f26ff:	8b cb                	mov    ecx,ebx
100f2701:	e8 fa a8 fe ff       	call   0x100dd000
100f2706:	84 c0                	test   al,al
100f2708:	74 06                	je     0x100f2710
100f270a:	81 ce 00 00 01 00    	or     esi,0x10000
100f2710:	6a 00                	push   0x0
100f2712:	6a 00                	push   0x0
100f2714:	68 00 00 02 00       	push   0x20000
100f2719:	8b cb                	mov    ecx,ebx
100f271b:	e8 e0 a8 fe ff       	call   0x100dd000
100f2720:	84 c0                	test   al,al
100f2722:	74 06                	je     0x100f272a
100f2724:	81 ce 00 00 02 00    	or     esi,0x20000
100f272a:	6a 00                	push   0x0
100f272c:	6a 00                	push   0x0
100f272e:	68 00 00 04 00       	push   0x40000
100f2733:	8b cb                	mov    ecx,ebx
100f2735:	e8 c6 a8 fe ff       	call   0x100dd000
100f273a:	84 c0                	test   al,al
100f273c:	74 06                	je     0x100f2744
100f273e:	81 ce 00 00 04 00    	or     esi,0x40000
100f2744:	6a 00                	push   0x0
100f2746:	6a 00                	push   0x0
100f2748:	68 00 00 08 00       	push   0x80000
100f274d:	8b cb                	mov    ecx,ebx
100f274f:	e8 ac a8 fe ff       	call   0x100dd000
100f2754:	84 c0                	test   al,al
100f2756:	74 06                	je     0x100f275e
100f2758:	81 ce 00 00 08 00    	or     esi,0x80000
100f275e:	6a 00                	push   0x0
100f2760:	6a 00                	push   0x0
100f2762:	68 00 00 10 00       	push   0x100000
100f2767:	8b cb                	mov    ecx,ebx
100f2769:	e8 92 a8 fe ff       	call   0x100dd000
100f276e:	84 c0                	test   al,al
100f2770:	74 06                	je     0x100f2778
100f2772:	81 ce 00 00 10 00    	or     esi,0x100000
100f2778:	6a 00                	push   0x0
100f277a:	6a 00                	push   0x0
100f277c:	68 00 00 20 00       	push   0x200000
100f2781:	8b cb                	mov    ecx,ebx
100f2783:	e8 78 a8 fe ff       	call   0x100dd000
100f2788:	84 c0                	test   al,al
100f278a:	74 06                	je     0x100f2792
100f278c:	81 ce 00 00 20 00    	or     esi,0x200000
100f2792:	6a 00                	push   0x0
100f2794:	6a 00                	push   0x0
100f2796:	68 00 00 40 00       	push   0x400000
100f279b:	8b cb                	mov    ecx,ebx
100f279d:	e8 5e a8 fe ff       	call   0x100dd000
100f27a2:	84 c0                	test   al,al
100f27a4:	74 06                	je     0x100f27ac
100f27a6:	81 ce 00 00 40 00    	or     esi,0x400000
100f27ac:	6a 00                	push   0x0
100f27ae:	6a 00                	push   0x0
100f27b0:	68 00 00 80 00       	push   0x800000
100f27b5:	8b cb                	mov    ecx,ebx
100f27b7:	e8 44 a8 fe ff       	call   0x100dd000
100f27bc:	84 c0                	test   al,al
100f27be:	74 06                	je     0x100f27c6
100f27c0:	81 ce 00 00 80 00    	or     esi,0x800000
100f27c6:	6a 00                	push   0x0
100f27c8:	6a 00                	push   0x0
100f27ca:	68 00 00 00 01       	push   0x1000000
100f27cf:	8b cb                	mov    ecx,ebx
100f27d1:	e8 2a a8 fe ff       	call   0x100dd000
100f27d6:	84 c0                	test   al,al
100f27d8:	74 06                	je     0x100f27e0
100f27da:	81 ce 00 00 00 01    	or     esi,0x1000000
100f27e0:	6a 00                	push   0x0
100f27e2:	6a 00                	push   0x0
100f27e4:	68 00 00 00 02       	push   0x2000000
100f27e9:	8b cb                	mov    ecx,ebx
100f27eb:	e8 10 a8 fe ff       	call   0x100dd000
100f27f0:	84 c0                	test   al,al
100f27f2:	74 06                	je     0x100f27fa
100f27f4:	81 ce 00 00 00 02    	or     esi,0x2000000
100f27fa:	6a 00                	push   0x0
100f27fc:	6a 00                	push   0x0
100f27fe:	68 00 00 00 04       	push   0x4000000
100f2803:	8b cb                	mov    ecx,ebx
100f2805:	e8 f6 a7 fe ff       	call   0x100dd000
100f280a:	84 c0                	test   al,al
100f280c:	74 06                	je     0x100f2814
100f280e:	81 ce 00 00 00 04    	or     esi,0x4000000
100f2814:	6a 00                	push   0x0
100f2816:	6a 00                	push   0x0
100f2818:	68 00 00 00 08       	push   0x8000000
100f281d:	8b cb                	mov    ecx,ebx
100f281f:	e8 dc a7 fe ff       	call   0x100dd000
100f2824:	84 c0                	test   al,al
100f2826:	74 06                	je     0x100f282e
100f2828:	81 ce 00 00 00 08    	or     esi,0x8000000
100f282e:	6a 00                	push   0x0
100f2830:	6a 00                	push   0x0
100f2832:	68 00 00 00 10       	push   0x10000000
100f2837:	8b cb                	mov    ecx,ebx
100f2839:	e8 c2 a7 fe ff       	call   0x100dd000
100f283e:	84 c0                	test   al,al
100f2840:	74 06                	je     0x100f2848
100f2842:	81 ce 00 00 00 10    	or     esi,0x10000000
100f2848:	6a 00                	push   0x0
100f284a:	6a 00                	push   0x0
100f284c:	68 00 00 00 20       	push   0x20000000
100f2851:	8b cb                	mov    ecx,ebx
100f2853:	e8 a8 a7 fe ff       	call   0x100dd000
100f2858:	84 c0                	test   al,al
100f285a:	74 06                	je     0x100f2862
100f285c:	81 ce 00 00 00 20    	or     esi,0x20000000
100f2862:	6a 00                	push   0x0
100f2864:	6a 00                	push   0x0
100f2866:	68 00 00 00 40       	push   0x40000000
100f286b:	8b cb                	mov    ecx,ebx
100f286d:	e8 8e a7 fe ff       	call   0x100dd000
100f2872:	84 c0                	test   al,al
100f2874:	74 06                	je     0x100f287c
100f2876:	81 ce 00 00 00 40    	or     esi,0x40000000
100f287c:	6a 00                	push   0x0
100f287e:	6a 00                	push   0x0
100f2880:	68 00 00 00 80       	push   0x80000000
100f2885:	8b cb                	mov    ecx,ebx
100f2887:	e8 74 a7 fe ff       	call   0x100dd000
100f288c:	84 c0                	test   al,al
100f288e:	74 06                	je     0x100f2896
100f2890:	81 ce 00 00 00 80    	or     esi,0x80000000
100f2896:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f2899:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f289f:	6a 00                	push   0x0
100f28a1:	ff 35 a0 66 22 10    	push   DWORD PTR ds:0x102266a0
100f28a7:	6a 01                	push   0x1
100f28a9:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f28af:	56                   	push   esi
100f28b0:	ff 15 14 30 22 10    	call   DWORD PTR ds:0x10223014
100f28b6:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100f28b9:	50                   	push   eax
100f28ba:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f28c0:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
100f28c3:	50                   	push   eax
100f28c4:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f28ca:	83 c4 1c             	add    esp,0x1c
100f28cd:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f28d3:	6a 20                	push   0x20
100f28d5:	8b cb                	mov    ecx,ebx
100f28d7:	e8 74 17 00 00       	call   0x100f4050
100f28dc:	83 8b 00 25 00 00 08 	or     DWORD PTR [ebx+0x2500],0x8
100f28e3:	8b cb                	mov    ecx,ebx
100f28e5:	6a 00                	push   0x0
100f28e7:	e8 04 c7 fe ff       	call   0x100deff0
100f28ec:	68 18 b9 1d 10       	push   0x101db918
100f28f1:	57                   	push   edi
100f28f2:	e8 69 5b 02 00       	call   0x10118460
100f28f7:	8b f8                	mov    edi,eax
100f28f9:	83 c4 08             	add    esp,0x8
100f28fc:	85 ff                	test   edi,edi
100f28fe:	0f 85 3c fc ff ff    	jne    0x100f2540
100f2904:	8b 7d f8             	mov    edi,DWORD PTR [ebp-0x8]
100f2907:	68 30 b9 1d 10       	push   0x101db930
100f290c:	6a 00                	push   0x0
100f290e:	e8 4d 5b 02 00       	call   0x10118460
100f2913:	8b f0                	mov    esi,eax
100f2915:	83 c4 08             	add    esp,0x8
100f2918:	85 f6                	test   esi,esi
100f291a:	74 4a                	je     0x100f2966
100f291c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100f2920:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
100f2923:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
100f2929:	6a 00                	push   0x0
100f292b:	ff 35 d4 65 22 10    	push   DWORD PTR ds:0x102265d4
100f2931:	6a 01                	push   0x1
100f2933:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f2939:	6a 01                	push   0x1
100f293b:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f2941:	68 f0 8b 1a 10       	push   0x101a8bf0
100f2946:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100f294c:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f2952:	68 30 b9 1d 10       	push   0x101db930
100f2957:	56                   	push   esi
100f2958:	e8 03 5b 02 00       	call   0x10118460
100f295d:	8b f0                	mov    esi,eax
100f295f:	83 c4 20             	add    esp,0x20
100f2962:	85 f6                	test   esi,esi
100f2964:	75 ba                	jne    0x100f2920
100f2966:	68 e0 8b 1a 10       	push   0x101a8be0
100f296b:	6a 00                	push   0x0
100f296d:	e8 ee 5a 02 00       	call   0x10118460
100f2972:	8b f0                	mov    esi,eax
100f2974:	83 c4 08             	add    esp,0x8
100f2977:	85 f6                	test   esi,esi
100f2979:	74 38                	je     0x100f29b3
100f297b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100f2980:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
100f2983:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
100f2989:	6a 00                	push   0x0
100f298b:	ff 35 d8 65 22 10    	push   DWORD PTR ds:0x102265d8
100f2991:	6a 01                	push   0x1
100f2993:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f2999:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f299f:	68 e0 8b 1a 10       	push   0x101a8be0
100f29a4:	56                   	push   esi
100f29a5:	e8 b6 5a 02 00       	call   0x10118460
100f29aa:	8b f0                	mov    esi,eax
100f29ac:	83 c4 18             	add    esp,0x18
100f29af:	85 f6                	test   esi,esi
100f29b1:	75 cd                	jne    0x100f2980
100f29b3:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f29b8:	be 01 00 00 00       	mov    esi,0x1
100f29bd:	39 b0 94 00 00 00    	cmp    DWORD PTR [eax+0x94],esi
100f29c3:	7e 29                	jle    0x100f29ee
100f29c5:	83 3f 00             	cmp    DWORD PTR [edi],0x0
100f29c8:	75 15                	jne    0x100f29df
100f29ca:	8b 4f 7c             	mov    ecx,DWORD PTR [edi+0x7c]
100f29cd:	85 c9                	test   ecx,ecx
100f29cf:	74 0e                	je     0x100f29df
100f29d1:	8b 01                	mov    eax,DWORD PTR [ecx]
100f29d3:	53                   	push   ebx
100f29d4:	ff 90 18 01 00 00    	call   DWORD PTR [eax+0x118]
100f29da:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f29df:	46                   	inc    esi
100f29e0:	81 c7 2c 03 00 00    	add    edi,0x32c
100f29e6:	3b b0 94 00 00 00    	cmp    esi,DWORD PTR [eax+0x94]
100f29ec:	7c d7                	jl     0x100f29c5
100f29ee:	83 bb ec 05 00 00 00 	cmp    DWORD PTR [ebx+0x5ec],0x0
100f29f5:	8b 03                	mov    eax,DWORD PTR [ebx]
100f29f7:	5e                   	pop    esi
100f29f8:	51                   	push   ecx
100f29f9:	8b cb                	mov    ecx,ebx
100f29fb:	74 29                	je     0x100f2a26
100f29fd:	c7 04 24 00 00 00 3f 	mov    DWORD PTR [esp],0x3f000000
100f2a04:	ff 50 08             	call   DWORD PTR [eax+0x8]
100f2a07:	51                   	push   ecx
100f2a08:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100f2a0f:	68 40 b9 1d 10       	push   0x101db940
100f2a14:	c7 43 78 f0 a1 0e 10 	mov    DWORD PTR [ebx+0x78],0x100ea1f0
100f2a1b:	ff 15 34 30 22 10    	call   DWORD PTR ds:0x10223034
100f2a21:	83 c4 08             	add    esp,0x8
100f2a24:	eb 11                	jmp    0x100f2a37
100f2a26:	c7 43 78 00 00 00 00 	mov    DWORD PTR [ebx+0x78],0x0
100f2a2d:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100f2a34:	ff 50 08             	call   DWORD PTR [eax+0x8]
100f2a37:	6a 00                	push   0x0
100f2a39:	6a 02                	push   0x2
100f2a3b:	68 b0 5f 1b 10       	push   0x101b5fb0
100f2a40:	53                   	push   ebx
100f2a41:	e8 ca 6d 02 00       	call   0x10119810
100f2a46:	83 c4 10             	add    esp,0x10
100f2a49:	5f                   	pop    edi
100f2a4a:	5b                   	pop    ebx
100f2a4b:	8b e5                	mov    esp,ebp
100f2a4d:	5d                   	pop    ebp
100f2a4e:	c3                   	ret
