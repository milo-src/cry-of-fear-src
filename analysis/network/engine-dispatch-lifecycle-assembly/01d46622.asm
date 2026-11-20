 1d46622:	55                   	push   ebp
 1d46623:	8b ec                	mov    ebp,esp
 1d46625:	83 7d 08 00          	cmp    DWORD PTR [ebp+0x8],0x0
 1d46629:	74 2e                	je     0x1d46659
 1d4662b:	83 7d 0c 00          	cmp    DWORD PTR [ebp+0xc],0x0
 1d4662f:	74 28                	je     0x1d46659
 1d46631:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
 1d46634:	0f be 08             	movsx  ecx,BYTE PTR [eax]
 1d46637:	85 c9                	test   ecx,ecx
 1d46639:	74 1e                	je     0x1d46659
 1d4663b:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
 1d4663e:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
 1d46641:	8a 08                	mov    cl,BYTE PTR [eax]
 1d46643:	88 0a                	mov    BYTE PTR [edx],cl
 1d46645:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
 1d46648:	83 c2 01             	add    edx,0x1
 1d4664b:	89 55 08             	mov    DWORD PTR [ebp+0x8],edx
 1d4664e:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
 1d46651:	83 c0 01             	add    eax,0x1
 1d46654:	89 45 0c             	mov    DWORD PTR [ebp+0xc],eax
 1d46657:	eb cc                	jmp    0x1d46625
 1d46659:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
 1d4665c:	c6 01 00             	mov    BYTE PTR [ecx],0x0
 1d4665f:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
 1d46662:	83 c2 01             	add    edx,0x1
 1d46665:	89 55 08             	mov    DWORD PTR [ebp+0x8],edx
 1d46668:	5d                   	pop    ebp
 1d46669:	c3                   	ret
