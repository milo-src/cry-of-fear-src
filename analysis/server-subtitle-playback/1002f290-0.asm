
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1002f290 <.text+0x2e290>:
1002f290:	55                   	push   ebp
1002f291:	8b ec                	mov    ebp,esp
1002f293:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
1002f296:	81 f9 00 10 00 00    	cmp    ecx,0x1000
1002f29c:	72 18                	jb     0x1002f2b6
1002f29e:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1002f2a1:	83 c1 23             	add    ecx,0x23
1002f2a4:	8b 50 fc             	mov    edx,DWORD PTR [eax-0x4]
1002f2a7:	2b c2                	sub    eax,edx
1002f2a9:	83 c0 fc             	add    eax,0xfffffffc
1002f2ac:	83 f8 1f             	cmp    eax,0x1f
1002f2af:	76 08                	jbe    0x1002f2b9
1002f2b1:	e9 ac 07 14 00       	jmp    0x1016fa62
1002f2b6:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
1002f2b9:	89 4d 0c             	mov    DWORD PTR [ebp+0xc],ecx
1002f2bc:	89 55 08             	mov    DWORD PTR [ebp+0x8],edx
1002f2bf:	5d                   	pop    ebp
1002f2c0:	e9 e0 e8 10 00       	jmp    0x1013dba5
