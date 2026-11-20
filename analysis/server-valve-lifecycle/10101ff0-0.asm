
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10101ff0 <.text+0x100ff0>:
10101ff0:	55                   	push   ebp
10101ff1:	8b ec                	mov    ebp,esp
10101ff3:	83 ec 68             	sub    esp,0x68
10101ff6:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
10101ffb:	33 c5                	xor    eax,ebp
10101ffd:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10102000:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
10102003:	53                   	push   ebx
10102004:	8b 5d 0c             	mov    ebx,DWORD PTR [ebp+0xc]
10102007:	57                   	push   edi
10102008:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1010200b:	89 5d a4             	mov    DWORD PTR [ebp-0x5c],ebx
1010200e:	89 45 98             	mov    DWORD PTR [ebp-0x68],eax
10102011:	89 7d 9c             	mov    DWORD PTR [ebp-0x64],edi
10102014:	89 5d a8             	mov    DWORD PTR [ebp-0x58],ebx
10102017:	85 ff                	test   edi,edi
10102019:	0f 84 91 01 00 00    	je     0x101021b0
1010201f:	83 7d 14 06          	cmp    DWORD PTR [ebp+0x14],0x6
10102023:	0f 84 87 01 00 00    	je     0x101021b0
10102029:	8a 07                	mov    al,BYTE PTR [edi]
1010202b:	3c 2b                	cmp    al,0x2b
1010202d:	75 0a                	jne    0x10102039
1010202f:	47                   	inc    edi
10102030:	c7 45 14 01 00 00 00 	mov    DWORD PTR [ebp+0x14],0x1
10102037:	eb 0a                	jmp    0x10102043
10102039:	3c 2d                	cmp    al,0x2d
1010203b:	75 06                	jne    0x10102043
1010203d:	47                   	inc    edi
1010203e:	33 c0                	xor    eax,eax
10102040:	89 45 14             	mov    DWORD PTR [ebp+0x14],eax
10102043:	56                   	push   esi
10102044:	53                   	push   ebx
10102045:	57                   	push   edi
10102046:	6a 00                	push   0x0
10102048:	e8 b3 64 01 00       	call   0x10118500
1010204d:	8b f0                	mov    esi,eax
1010204f:	83 c4 0c             	add    esp,0xc
10102052:	85 f6                	test   esi,esi
10102054:	0f 85 e6 00 00 00    	jne    0x10102140
1010205a:	8a 07                	mov    al,BYTE PTR [edi]
1010205c:	84 c0                	test   al,al
1010205e:	0f 84 4b 01 00 00    	je     0x101021af
10102064:	89 75 a0             	mov    DWORD PTR [ebp-0x60],esi
10102067:	46                   	inc    esi
10102068:	3c 28                	cmp    al,0x28
1010206a:	74 18                	je     0x10102084
1010206c:	8a 04 37             	mov    al,BYTE PTR [edi+esi*1]
1010206f:	84 c0                	test   al,al
10102071:	75 f1                	jne    0x10102064
10102073:	5e                   	pop    esi
10102074:	5f                   	pop    edi
10102075:	5b                   	pop    ebx
10102076:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10102079:	33 cd                	xor    ecx,ebp
1010207b:	e8 33 bb 03 00       	call   0x1013dbb3
10102080:	8b e5                	mov    esp,ebp
10102082:	5d                   	pop    ebp
10102083:	c3                   	ret
10102084:	8a 04 37             	mov    al,BYTE PTR [edi+esi*1]
10102087:	8d 0c 37             	lea    ecx,[edi+esi*1]
1010208a:	8b de                	mov    ebx,esi
1010208c:	84 c0                	test   al,al
1010208e:	74 0d                	je     0x1010209d
10102090:	3c 29                	cmp    al,0x29
10102092:	74 2d                	je     0x101020c1
10102094:	8a 44 1f 01          	mov    al,BYTE PTR [edi+ebx*1+0x1]
10102098:	43                   	inc    ebx
10102099:	84 c0                	test   al,al
1010209b:	75 f3                	jne    0x10102090
1010209d:	ff 75 9c             	push   DWORD PTR [ebp-0x64]
101020a0:	68 90 f4 1d 10       	push   0x101df490
101020a5:	6a 04                	push   0x4
101020a7:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
101020ad:	83 c4 0c             	add    esp,0xc
101020b0:	5e                   	pop    esi
101020b1:	5f                   	pop    edi
101020b2:	5b                   	pop    ebx
101020b3:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
101020b6:	33 cd                	xor    ecx,ebp
101020b8:	e8 f6 ba 03 00       	call   0x1013dbb3
101020bd:	8b e5                	mov    esp,ebp
101020bf:	5d                   	pop    ebp
101020c0:	c3                   	ret
101020c1:	2b de                	sub    ebx,esi
101020c3:	8d 45 ac             	lea    eax,[ebp-0x54]
101020c6:	53                   	push   ebx
101020c7:	51                   	push   ecx
101020c8:	50                   	push   eax
101020c9:	e8 32 d6 06 00       	call   0x1016f700
101020ce:	83 c4 0c             	add    esp,0xc
101020d1:	83 fb 50             	cmp    ebx,0x50
101020d4:	0f 83 e6 00 00 00    	jae    0x101021c0
101020da:	ff 75 a4             	push   DWORD PTR [ebp-0x5c]
101020dd:	8d 45 ac             	lea    eax,[ebp-0x54]
101020e0:	c6 44 1d ac 00       	mov    BYTE PTR [ebp+ebx*1-0x54],0x0
101020e5:	50                   	push   eax
101020e6:	6a 00                	push   0x0
101020e8:	e8 13 64 01 00       	call   0x10118500
101020ed:	8b d8                	mov    ebx,eax
101020ef:	83 c4 0c             	add    esp,0xc
101020f2:	85 db                	test   ebx,ebx
101020f4:	0f 84 b5 00 00 00    	je     0x101021af
101020fa:	ff 75 a0             	push   DWORD PTR [ebp-0x60]
101020fd:	8d 45 ac             	lea    eax,[ebp-0x54]
10102100:	57                   	push   edi
10102101:	50                   	push   eax
10102102:	e8 f9 d5 06 00       	call   0x1016f700
10102107:	4e                   	dec    esi
10102108:	83 c4 0c             	add    esp,0xc
1010210b:	83 fe 50             	cmp    esi,0x50
1010210e:	0f 83 ac 00 00 00    	jae    0x101021c0
10102114:	ff 75 a8             	push   DWORD PTR [ebp-0x58]
10102117:	8d 7d ac             	lea    edi,[ebp-0x54]
1010211a:	c6 44 35 ac 00       	mov    BYTE PTR [ebp+esi*1-0x54],0x0
1010211f:	8b c7                	mov    eax,edi
10102121:	50                   	push   eax
10102122:	6a 00                	push   0x0
10102124:	e8 d7 63 01 00       	call   0x10118500
10102129:	8b f0                	mov    esi,eax
1010212b:	83 c4 0c             	add    esp,0xc
1010212e:	85 f6                	test   esi,esi
10102130:	74 7d                	je     0x101021af
10102132:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
10102136:	66 66 0f 1f 84 00 00 	data16 nop WORD PTR [eax+eax*1+0x0]
1010213d:	00 00 00 
10102140:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10102143:	f7 81 a8 01 00 00 00 	test   DWORD PTR [ecx+0x1a8],0x40000000
1010214a:	00 00 40 
1010214d:	75 48                	jne    0x10102197
1010214f:	8b 55 14             	mov    edx,DWORD PTR [ebp+0x14]
10102152:	83 fa 04             	cmp    edx,0x4
10102155:	75 26                	jne    0x1010217d
10102157:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1010215c:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10102162:	03 01                	add    eax,DWORD PTR [ecx]
10102164:	50                   	push   eax
10102165:	68 b4 f4 1d 10       	push   0x101df4b4
1010216a:	6a 02                	push   0x2
1010216c:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10102172:	56                   	push   esi
10102173:	e8 88 77 01 00       	call   0x10119900
10102178:	83 c4 10             	add    esp,0x10
1010217b:	eb 1a                	jmp    0x10102197
1010217d:	f3 0f 10 45 18       	movss  xmm0,DWORD PTR [ebp+0x18]
10102182:	8b 06                	mov    eax,DWORD PTR [esi]
10102184:	51                   	push   ecx
10102185:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1010218a:	8b ce                	mov    ecx,esi
1010218c:	52                   	push   edx
1010218d:	ff 75 98             	push   DWORD PTR [ebp-0x68]
10102190:	53                   	push   ebx
10102191:	ff 90 e8 00 00 00    	call   DWORD PTR [eax+0xe8]
10102197:	ff 75 a8             	push   DWORD PTR [ebp-0x58]
1010219a:	57                   	push   edi
1010219b:	56                   	push   esi
1010219c:	e8 5f 63 01 00       	call   0x10118500
101021a1:	8b f0                	mov    esi,eax
101021a3:	83 c4 0c             	add    esp,0xc
101021a6:	85 f6                	test   esi,esi
101021a8:	75 96                	jne    0x10102140
101021aa:	e8 51 65 01 00       	call   0x10118700
101021af:	5e                   	pop    esi
101021b0:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
101021b3:	5f                   	pop    edi
101021b4:	33 cd                	xor    ecx,ebp
101021b6:	5b                   	pop    ebx
101021b7:	e8 f7 b9 03 00       	call   0x1013dbb3
101021bc:	8b e5                	mov    esp,ebp
101021be:	5d                   	pop    ebp
101021bf:	c3                   	ret
101021c0:	e8 83 bb 03 00       	call   0x1013dd48
