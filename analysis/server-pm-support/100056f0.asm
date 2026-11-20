
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100056f0 <.text+0x46f0>:
100056f0:	55                   	push   ebp
100056f1:	8b ec                	mov    ebp,esp
100056f3:	53                   	push   ebx
100056f4:	56                   	push   esi
100056f5:	57                   	push   edi
100056f6:	8b 3d e8 0f 22 10    	mov    edi,DWORD PTR ds:0x10220fe8
100056fc:	33 db                	xor    ebx,ebx
100056fe:	83 ef 01             	sub    edi,0x1
10005701:	78 34                	js     0x10005737
10005703:	8d 04 1f             	lea    eax,[edi+ebx*1]
10005706:	99                   	cdq
10005707:	2b c2                	sub    eax,edx
10005709:	8b f0                	mov    esi,eax
1000570b:	d1 fe                	sar    esi,1
1000570d:	6b c6 0d             	imul   eax,esi,0xd
10005710:	6a 0c                	push   0xc
10005712:	05 f0 0f 22 10       	add    eax,0x10220ff0
10005717:	50                   	push   eax
10005718:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1000571b:	e8 72 66 17 00       	call   0x1017bd92
10005720:	83 c4 0c             	add    esp,0xc
10005723:	85 c0                	test   eax,eax
10005725:	74 17                	je     0x1000573e
10005727:	7e 05                	jle    0x1000572e
10005729:	8d 5e 01             	lea    ebx,[esi+0x1]
1000572c:	eb 05                	jmp    0x10005733
1000572e:	79 03                	jns    0x10005733
10005730:	8d 7e ff             	lea    edi,[esi-0x1]
10005733:	3b df                	cmp    ebx,edi
10005735:	7e cc                	jle    0x10005703
10005737:	5f                   	pop    edi
10005738:	5e                   	pop    esi
10005739:	b0 43                	mov    al,0x43
1000573b:	5b                   	pop    ebx
1000573c:	5d                   	pop    ebp
1000573d:	c3                   	ret
1000573e:	8a 86 f0 29 22 10    	mov    al,BYTE PTR [esi+0x102229f0]
10005744:	5f                   	pop    edi
10005745:	5e                   	pop    esi
10005746:	5b                   	pop    ebx
10005747:	5d                   	pop    ebp
10005748:	c3                   	ret
