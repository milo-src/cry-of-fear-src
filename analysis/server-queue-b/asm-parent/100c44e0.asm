
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c44e0 <.text+0xc34e0>:
100c44e0:	55                   	push   ebp
100c44e1:	8b ec                	mov    ebp,esp
100c44e3:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
100c44e6:	83 7a 3c 00          	cmp    DWORD PTR [edx+0x3c],0x0
100c44ea:	75 54                	jne    0x100c4540
100c44ec:	a1 90 31 22 10       	mov    eax,ds:0x10223190
100c44f1:	85 c0                	test   eax,eax
100c44f3:	75 2e                	jne    0x100c4523
100c44f5:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c44fa:	8b 52 04             	mov    edx,DWORD PTR [edx+0x4]
100c44fd:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
100c4503:	8b 82 d0 01 00 00    	mov    eax,DWORD PTR [edx+0x1d0]
100c4509:	03 c1                	add    eax,ecx
100c450b:	50                   	push   eax
100c450c:	8b 02                	mov    eax,DWORD PTR [edx]
100c450e:	03 c1                	add    eax,ecx
100c4510:	50                   	push   eax
100c4511:	68 d0 5c 1d 10       	push   0x101d5cd0
100c4516:	6a 01                	push   0x1
100c4518:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c451e:	83 c4 10             	add    esp,0x10
100c4521:	5d                   	pop    ebp
100c4522:	c3                   	ret
100c4523:	8b 48 3c             	mov    ecx,DWORD PTR [eax+0x3c]
100c4526:	85 c9                	test   ecx,ecx
100c4528:	74 0f                	je     0x100c4539
100c452a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100c4530:	8b c1                	mov    eax,ecx
100c4532:	8b 48 3c             	mov    ecx,DWORD PTR [eax+0x3c]
100c4535:	85 c9                	test   ecx,ecx
100c4537:	75 f7                	jne    0x100c4530
100c4539:	3b c2                	cmp    eax,edx
100c453b:	74 03                	je     0x100c4540
100c453d:	89 50 3c             	mov    DWORD PTR [eax+0x3c],edx
100c4540:	5d                   	pop    ebp
100c4541:	c3                   	ret
