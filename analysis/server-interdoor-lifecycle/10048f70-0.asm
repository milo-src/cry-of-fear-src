
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10048f70 <.text+0x47f70>:
10048f70:	55                   	push   ebp
10048f71:	8b ec                	mov    ebp,esp
10048f73:	81 ec 88 00 00 00    	sub    esp,0x88
10048f79:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
10048f7e:	33 c5                	xor    eax,ebp
10048f80:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10048f83:	56                   	push   esi
10048f84:	57                   	push   edi
10048f85:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
10048f88:	8b f1                	mov    esi,ecx
10048f8a:	85 ff                	test   edi,edi
10048f8c:	0f 84 d4 02 00 00    	je     0x10049266
10048f92:	8b 07                	mov    eax,DWORD PTR [edi]
10048f94:	8b cf                	mov    ecx,edi
10048f96:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
10048f9c:	85 c0                	test   eax,eax
10048f9e:	0f 84 c2 02 00 00    	je     0x10049266
10048fa4:	57                   	push   edi
10048fa5:	ff b6 7c 01 00 00    	push   DWORD PTR [esi+0x17c]
10048fab:	e8 b0 00 0d 00       	call   0x10119060
10048fb0:	83 c4 08             	add    esp,0x8
10048fb3:	85 c0                	test   eax,eax
10048fb5:	0f 84 ab 02 00 00    	je     0x10049266
10048fbb:	80 be 80 01 00 00 00 	cmp    BYTE PTR [esi+0x180],0x0
10048fc2:	0f 85 9e 02 00 00    	jne    0x10049266
10048fc8:	f3 0f 10 86 a4 01 00 	movss  xmm0,DWORD PTR [esi+0x1a4]
10048fcf:	00 
10048fd0:	53                   	push   ebx
10048fd1:	8b 1d 88 31 22 10    	mov    ebx,DWORD PTR ds:0x10223188
10048fd7:	0f 2f 03             	comiss xmm0,DWORD PTR [ebx]
10048fda:	0f 87 85 02 00 00    	ja     0x10049265
10048fe0:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10048fe3:	b9 44 0c 1b 10       	mov    ecx,0x101b0c44
10048fe8:	8b 80 d0 01 00 00    	mov    eax,DWORD PTR [eax+0x1d0]
10048fee:	03 83 98 00 00 00    	add    eax,DWORD PTR [ebx+0x98]
10048ff4:	8a 10                	mov    dl,BYTE PTR [eax]
10048ff6:	3a 11                	cmp    dl,BYTE PTR [ecx]
10048ff8:	75 1a                	jne    0x10049014
10048ffa:	84 d2                	test   dl,dl
10048ffc:	74 12                	je     0x10049010
10048ffe:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10049001:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10049004:	75 0e                	jne    0x10049014
10049006:	83 c0 02             	add    eax,0x2
10049009:	83 c1 02             	add    ecx,0x2
1004900c:	84 d2                	test   dl,dl
1004900e:	75 e4                	jne    0x10048ff4
10049010:	33 c0                	xor    eax,eax
10049012:	eb 05                	jmp    0x10049019
10049014:	1b c0                	sbb    eax,eax
10049016:	83 c8 01             	or     eax,0x1
10049019:	85 c0                	test   eax,eax
1004901b:	0f 85 83 00 00 00    	jne    0x100490a4
10049021:	ff 77 04             	push   DWORD PTR [edi+0x4]
10049024:	e8 b7 95 fc ff       	call   0x100125e0
10049029:	83 c4 04             	add    esp,0x4
1004902c:	8b d8                	mov    ebx,eax
1004902e:	6a 00                	push   0x0
10049030:	85 db                	test   ebx,ebx
10049032:	74 55                	je     0x10049089
10049034:	6a 00                	push   0x0
10049036:	6a 01                	push   0x1
10049038:	8b cb                	mov    ecx,ebx
1004903a:	e8 c1 3f 09 00       	call   0x100dd000
1004903f:	84 c0                	test   al,al
10049041:	75 5b                	jne    0x1004909e
10049043:	6a 00                	push   0x0
10049045:	6a 00                	push   0x0
10049047:	6a 02                	push   0x2
10049049:	8b cb                	mov    ecx,ebx
1004904b:	e8 b0 3f 09 00       	call   0x100dd000
10049050:	84 c0                	test   al,al
10049052:	75 4a                	jne    0x1004909e
10049054:	6a 00                	push   0x0
10049056:	6a 00                	push   0x0
10049058:	6a 04                	push   0x4
1004905a:	8b cb                	mov    ecx,ebx
1004905c:	e8 9f 3f 09 00       	call   0x100dd000
10049061:	84 c0                	test   al,al
10049063:	75 39                	jne    0x1004909e
10049065:	6a 00                	push   0x0
10049067:	6a 00                	push   0x0
10049069:	6a 08                	push   0x8
1004906b:	8b cb                	mov    ecx,ebx
1004906d:	e8 8e 3f 09 00       	call   0x100dd000
10049072:	84 c0                	test   al,al
10049074:	75 28                	jne    0x1004909e
10049076:	6a 00                	push   0x0
10049078:	6a 00                	push   0x0
1004907a:	6a 10                	push   0x10
1004907c:	8b cb                	mov    ecx,ebx
1004907e:	e8 7d 3f 09 00       	call   0x100dd000
10049083:	84 c0                	test   al,al
10049085:	75 17                	jne    0x1004909e
10049087:	6a 00                	push   0x0
10049089:	6a 05                	push   0x5
1004908b:	68 54 0c 1b 10       	push   0x101b0c54
10049090:	57                   	push   edi
10049091:	e8 7a 07 0d 00       	call   0x10119810
10049096:	83 c4 10             	add    esp,0x10
10049099:	e9 ae 01 00 00       	jmp    0x1004924c
1004909e:	8b 1d 88 31 22 10    	mov    ebx,DWORD PTR ds:0x10223188
100490a4:	8b 8e a0 01 00 00    	mov    ecx,DWORD PTR [esi+0x1a0]
100490aa:	85 c9                	test   ecx,ecx
100490ac:	0f 84 92 00 00 00    	je     0x10049144
100490b2:	8b 83 98 00 00 00    	mov    eax,DWORD PTR [ebx+0x98]
100490b8:	03 c1                	add    eax,ecx
100490ba:	50                   	push   eax
100490bb:	6a 00                	push   0x0
100490bd:	e8 ce f4 0c 00       	call   0x10118590
100490c2:	8b 1d 88 31 22 10    	mov    ebx,DWORD PTR ds:0x10223188
100490c8:	83 c4 08             	add    esp,0x8
100490cb:	85 c0                	test   eax,eax
100490cd:	74 75                	je     0x10049144
100490cf:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
100490d2:	b9 84 0c 1b 10       	mov    ecx,0x101b0c84
100490d7:	8b 83 98 00 00 00    	mov    eax,DWORD PTR [ebx+0x98]
100490dd:	89 95 78 ff ff ff    	mov    DWORD PTR [ebp-0x88],edx
100490e3:	03 02                	add    eax,DWORD PTR [edx]
100490e5:	8a 10                	mov    dl,BYTE PTR [eax]
100490e7:	3a 11                	cmp    dl,BYTE PTR [ecx]
100490e9:	75 1a                	jne    0x10049105
100490eb:	84 d2                	test   dl,dl
100490ed:	74 12                	je     0x10049101
100490ef:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100490f2:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100490f5:	75 0e                	jne    0x10049105
100490f7:	83 c0 02             	add    eax,0x2
100490fa:	83 c1 02             	add    ecx,0x2
100490fd:	84 d2                	test   dl,dl
100490ff:	75 e4                	jne    0x100490e5
10049101:	33 c0                	xor    eax,eax
10049103:	eb 05                	jmp    0x1004910a
10049105:	1b c0                	sbb    eax,eax
10049107:	83 c8 01             	or     eax,0x1
1004910a:	85 c0                	test   eax,eax
1004910c:	75 36                	jne    0x10049144
1004910e:	ff b5 78 ff ff ff    	push   DWORD PTR [ebp-0x88]
10049114:	e8 f7 ed ff ff       	call   0x10047f10
10049119:	8b d8                	mov    ebx,eax
1004911b:	83 c4 04             	add    esp,0x4
1004911e:	85 db                	test   ebx,ebx
10049120:	74 13                	je     0x10049135
10049122:	8b cb                	mov    ecx,ebx
10049124:	e8 17 f4 ff ff       	call   0x10048540
10049129:	85 c0                	test   eax,eax
1004912b:	74 08                	je     0x10049135
1004912d:	57                   	push   edi
1004912e:	8b cb                	mov    ecx,ebx
10049130:	e8 0b fd ff ff       	call   0x10048e40
10049135:	c7 86 a0 01 00 00 00 	mov    DWORD PTR [esi+0x1a0],0x0
1004913c:	00 00 00 
1004913f:	e9 08 01 00 00       	jmp    0x1004924c
10049144:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10049147:	8b 80 9c 01 00 00    	mov    eax,DWORD PTR [eax+0x19c]
1004914d:	85 c0                	test   eax,eax
1004914f:	74 3d                	je     0x1004918e
10049151:	8b 40 7c             	mov    eax,DWORD PTR [eax+0x7c]
10049154:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10049157:	8b 80 d4 01 00 00    	mov    eax,DWORD PTR [eax+0x1d4]
1004915d:	03 83 98 00 00 00    	add    eax,DWORD PTR [ebx+0x98]
10049163:	50                   	push   eax
10049164:	8d 85 7c ff ff ff    	lea    eax,[ebp-0x84]
1004916a:	68 90 0c 1b 10       	push   0x101b0c90
1004916f:	50                   	push   eax
10049170:	e8 eb 5f fd ff       	call   0x1001f160
10049175:	6a 00                	push   0x0
10049177:	6a 05                	push   0x5
10049179:	8d 85 7c ff ff ff    	lea    eax,[ebp-0x84]
1004917f:	50                   	push   eax
10049180:	57                   	push   edi
10049181:	e8 8a 06 0d 00       	call   0x10119810
10049186:	83 c4 1c             	add    esp,0x1c
10049189:	e9 be 00 00 00       	jmp    0x1004924c
1004918e:	8b 07                	mov    eax,DWORD PTR [edi]
10049190:	8b cf                	mov    ecx,edi
10049192:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
10049198:	85 c0                	test   eax,eax
1004919a:	74 24                	je     0x100491c0
1004919c:	83 be 84 01 00 00 00 	cmp    DWORD PTR [esi+0x184],0x0
100491a3:	74 1b                	je     0x100491c0
100491a5:	ff 77 04             	push   DWORD PTR [edi+0x4]
100491a8:	e8 33 94 fc ff       	call   0x100125e0
100491ad:	83 c4 04             	add    esp,0x4
100491b0:	85 c0                	test   eax,eax
100491b2:	74 0c                	je     0x100491c0
100491b4:	8b 8e 84 01 00 00    	mov    ecx,DWORD PTR [esi+0x184]
100491ba:	89 88 ec 05 00 00    	mov    DWORD PTR [eax+0x5ec],ecx
100491c0:	8b ce                	mov    ecx,esi
100491c2:	e8 79 f3 ff ff       	call   0x10048540
100491c7:	85 c0                	test   eax,eax
100491c9:	74 68                	je     0x10049233
100491cb:	8b 8e 94 01 00 00    	mov    ecx,DWORD PTR [esi+0x194]
100491d1:	85 c9                	test   ecx,ecx
100491d3:	74 1b                	je     0x100491f0
100491d5:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100491da:	6a 00                	push   0x0
100491dc:	6a 05                	push   0x5
100491de:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100491e4:	03 c1                	add    eax,ecx
100491e6:	50                   	push   eax
100491e7:	57                   	push   edi
100491e8:	e8 23 06 0d 00       	call   0x10119810
100491ed:	83 c4 10             	add    esp,0x10
100491f0:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100491f3:	8b 91 f4 01 00 00    	mov    edx,DWORD PTR [ecx+0x1f4]
100491f9:	85 d2                	test   edx,edx
100491fb:	74 4f                	je     0x1004924c
100491fd:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10049202:	6a 64                	push   0x64
10049204:	6a 00                	push   0x0
10049206:	83 ec 08             	sub    esp,0x8
10049209:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1004920f:	03 c2                	add    eax,edx
10049211:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
10049218:	3f 
10049219:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
10049220:	50                   	push   eax
10049221:	6a 04                	push   0x4
10049223:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
10049229:	e8 c2 37 0b 00       	call   0x100fc9f0
1004922e:	83 c4 1c             	add    esp,0x1c
10049231:	eb 19                	jmp    0x1004924c
10049233:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10049236:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10049239:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
1004923f:	89 81 9c 01 00 00    	mov    DWORD PTR [ecx+0x19c],eax
10049245:	8b ce                	mov    ecx,esi
10049247:	e8 64 fa ff ff       	call   0x10048cb0
1004924c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10049251:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10049255:	f3 0f 58 05 90 13 1a 	addss  xmm0,DWORD PTR ds:0x101a1390
1004925c:	10 
1004925d:	f3 0f 11 86 a4 01 00 	movss  DWORD PTR [esi+0x1a4],xmm0
10049264:	00 
10049265:	5b                   	pop    ebx
10049266:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10049269:	5f                   	pop    edi
1004926a:	33 cd                	xor    ecx,ebp
1004926c:	5e                   	pop    esi
1004926d:	e8 41 49 0f 00       	call   0x1013dbb3
10049272:	8b e5                	mov    esp,ebp
10049274:	5d                   	pop    ebp
10049275:	c2 10 00             	ret    0x10
