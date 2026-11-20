
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10104040 <.text+0x103040>:
10104040:	55                   	push   ebp
10104041:	8b ec                	mov    ebp,esp
10104043:	83 ec 44             	sub    esp,0x44
10104046:	53                   	push   ebx
10104047:	56                   	push   esi
10104048:	57                   	push   edi
10104049:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1010404c:	8b f9                	mov    edi,ecx
1010404e:	8b 07                	mov    eax,DWORD PTR [edi]
10104050:	ff 90 50 02 00 00    	call   DWORD PTR [eax+0x250]
10104056:	8b 04 85 c8 9c 21 10 	mov    eax,DWORD PTR [eax*4+0x10219cc8]
1010405d:	50                   	push   eax
1010405e:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10104061:	89 45 0c             	mov    DWORD PTR [ebp+0xc],eax
10104064:	e8 f7 43 01 00       	call   0x10118460
10104069:	8b f0                	mov    esi,eax
1010406b:	83 c4 08             	add    esp,0x8
1010406e:	85 f6                	test   esi,esi
10104070:	74 7f                	je     0x101040f1
10104072:	8b 5d 10             	mov    ebx,DWORD PTR [ebp+0x10]
10104075:	3b f7                	cmp    esi,edi
10104077:	74 66                	je     0x101040df
10104079:	8b 06                	mov    eax,DWORD PTR [esi]
1010407b:	8b ce                	mov    ecx,esi
1010407d:	ff 90 bc 00 00 00    	call   DWORD PTR [eax+0xbc]
10104083:	85 c0                	test   eax,eax
10104085:	74 58                	je     0x101040df
10104087:	85 db                	test   ebx,ebx
10104089:	74 71                	je     0x101040fc
1010408b:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1010408e:	8d 4d bc             	lea    ecx,[ebp-0x44]
10104091:	51                   	push   ecx
10104092:	8d 4d f4             	lea    ecx,[ebp-0xc]
10104095:	f3 0f 7e 40 08       	movq   xmm0,QWORD PTR [eax+0x8]
1010409a:	66 0f d6 45 f4       	movq   QWORD PTR [ebp-0xc],xmm0
1010409f:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
101040a2:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
101040a5:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
101040a8:	f3 0f 10 80 d8 00 00 	movss  xmm0,DWORD PTR [eax+0xd8]
101040af:	00 
101040b0:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
101040b3:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
101040b8:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
101040be:	83 c0 08             	add    eax,0x8
101040c1:	6a 01                	push   0x1
101040c3:	51                   	push   ecx
101040c4:	50                   	push   eax
101040c5:	e8 36 67 01 00       	call   0x1011a800
101040ca:	f3 0f 10 45 cc       	movss  xmm0,DWORD PTR [ebp-0x34]
101040cf:	83 c4 14             	add    esp,0x14
101040d2:	0f 2e 05 90 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1390
101040d9:	9f                   	lahf
101040da:	f6 c4 44             	test   ah,0x44
101040dd:	7b 1d                	jnp    0x101040fc
101040df:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
101040e2:	56                   	push   esi
101040e3:	e8 78 43 01 00       	call   0x10118460
101040e8:	8b f0                	mov    esi,eax
101040ea:	83 c4 08             	add    esp,0x8
101040ed:	85 f6                	test   esi,esi
101040ef:	75 84                	jne    0x10104075
101040f1:	5f                   	pop    edi
101040f2:	5e                   	pop    esi
101040f3:	33 c0                	xor    eax,eax
101040f5:	5b                   	pop    ebx
101040f6:	8b e5                	mov    esp,ebp
101040f8:	5d                   	pop    ebp
101040f9:	c2 0c 00             	ret    0xc
101040fc:	5f                   	pop    edi
101040fd:	8b c6                	mov    eax,esi
101040ff:	5e                   	pop    esi
10104100:	5b                   	pop    ebx
10104101:	8b e5                	mov    esp,ebp
10104103:	5d                   	pop    ebp
10104104:	c2 0c 00             	ret    0xc
