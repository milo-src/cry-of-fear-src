 1d470eb:	55                   	push   ebp
 1d470ec:	8b ec                	mov    ebp,esp
 1d470ee:	51                   	push   ecx
 1d470ef:	6a 04                	push   0x4
 1d470f1:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
 1d470f4:	50                   	push   eax
 1d470f5:	e8 ee 12 00 00       	call   0x1d483e8
 1d470fa:	83 c4 08             	add    esp,0x8
 1d470fd:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
 1d47100:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
 1d47103:	81 e1 ff 00 00 00    	and    ecx,0xff
 1d47109:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
 1d4710c:	88 0a                	mov    BYTE PTR [edx],cl
 1d4710e:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
 1d47111:	c1 f8 08             	sar    eax,0x8
 1d47114:	25 ff 00 00 00       	and    eax,0xff
 1d47119:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
 1d4711c:	88 41 01             	mov    BYTE PTR [ecx+0x1],al
 1d4711f:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
 1d47122:	c1 fa 10             	sar    edx,0x10
 1d47125:	81 e2 ff 00 00 00    	and    edx,0xff
 1d4712b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
 1d4712e:	88 50 02             	mov    BYTE PTR [eax+0x2],dl
 1d47131:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
 1d47134:	c1 f9 18             	sar    ecx,0x18
 1d47137:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
 1d4713a:	88 4a 03             	mov    BYTE PTR [edx+0x3],cl
 1d4713d:	8b e5                	mov    esp,ebp
 1d4713f:	5d                   	pop    ebp
 1d47140:	c3                   	ret
