
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1003c420 <.text+0x3b420>:
1003c420:	55                   	push   ebp
1003c421:	8b ec                	mov    ebp,esp
1003c423:	56                   	push   esi
1003c424:	8b f1                	mov    esi,ecx
1003c426:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
1003c429:	85 c9                	test   ecx,ecx
1003c42b:	74 28                	je     0x1003c455
1003c42d:	80 be bc 01 00 00 00 	cmp    BYTE PTR [esi+0x1bc],0x0
1003c434:	75 1f                	jne    0x1003c455
1003c436:	6a 00                	push   0x0
1003c438:	6a 00                	push   0x0
1003c43a:	6a 40                	push   0x40
1003c43c:	c6 86 bc 01 00 00 01 	mov    BYTE PTR [esi+0x1bc],0x1
1003c443:	e8 b8 0b 0a 00       	call   0x100dd000
1003c448:	84 c0                	test   al,al
1003c44a:	75 09                	jne    0x1003c455
1003c44c:	56                   	push   esi
1003c44d:	e8 ae d4 0d 00       	call   0x10119900
1003c452:	83 c4 04             	add    esp,0x4
1003c455:	5e                   	pop    esi
1003c456:	5d                   	pop    ebp
1003c457:	c2 04 00             	ret    0x4
