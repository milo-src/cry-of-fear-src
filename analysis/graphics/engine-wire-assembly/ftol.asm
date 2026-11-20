
D:\Steam\steamapps\common\Cry of Fear\hw.dll:     file format pei-i386


Disassembly of section .text:

01e7163c <.text+0x17063c>:
 1e7163c:	55                   	push   ebp
 1e7163d:	8b ec                	mov    ebp,esp
 1e7163f:	83 c4 f4             	add    esp,0xfffffff4
 1e71642:	9b d9 7d fe          	fstcw  WORD PTR [ebp-0x2]
 1e71646:	9b                   	fwait
 1e71647:	66 8b 45 fe          	mov    ax,WORD PTR [ebp-0x2]
 1e7164b:	80 cc 0c             	or     ah,0xc
 1e7164e:	66 89 45 fc          	mov    WORD PTR [ebp-0x4],ax
 1e71652:	d9 6d fc             	fldcw  WORD PTR [ebp-0x4]
 1e71655:	df 7d f4             	fistp  QWORD PTR [ebp-0xc]
 1e71658:	d9 6d fe             	fldcw  WORD PTR [ebp-0x2]
 1e7165b:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
 1e7165e:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
 1e71661:	c9                   	leave
 1e71662:	c3                   	ret
