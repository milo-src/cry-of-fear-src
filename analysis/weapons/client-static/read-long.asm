
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\client.dll:     file format pei-i386


Disassembly of section .text:

100809b0 <.text+0x7f9b0>:
100809b0:	56                   	push   %esi
100809b1:	8b 35 bc 40 54 10    	mov    0x105440bc,%esi
100809b7:	57                   	push   %edi
100809b8:	8d 7e 04             	lea    0x4(%esi),%edi
100809bb:	3b 3d b8 40 54 10    	cmp    0x105440b8,%edi
100809c1:	7e 10                	jle    0x100809d3
100809c3:	5f                   	pop    %edi
100809c4:	c7 05 c0 40 54 10 01 	movl   $0x1,0x105440c0
100809cb:	00 00 00 
100809ce:	83 c8 ff             	or     $0xffffffff,%eax
100809d1:	5e                   	pop    %esi
100809d2:	c3                   	ret
100809d3:	a1 b4 40 54 10       	mov    0x105440b4,%eax
100809d8:	89 3d bc 40 54 10    	mov    %edi,0x105440bc
100809de:	5f                   	pop    %edi
100809df:	0f b6 54 30 03       	movzbl 0x3(%eax,%esi,1),%edx
100809e4:	0f b6 4c 30 02       	movzbl 0x2(%eax,%esi,1),%ecx
100809e9:	c1 e2 08             	shl    $0x8,%edx
100809ec:	03 d1                	add    %ecx,%edx
100809ee:	0f b6 4c 30 01       	movzbl 0x1(%eax,%esi,1),%ecx
100809f3:	0f b6 04 30          	movzbl (%eax,%esi,1),%eax
100809f7:	c1 e2 08             	shl    $0x8,%edx
100809fa:	03 d1                	add    %ecx,%edx
100809fc:	c1 e2 08             	shl    $0x8,%edx
100809ff:	03 c2                	add    %edx,%eax
10080a01:	5e                   	pop    %esi
10080a02:	c3                   	ret
